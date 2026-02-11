using EchoTale.Dsl.Data;
using EchoTale.Dsl.Types.Validation;

namespace EchoTale.Dsl;

public sealed class DslSemanticValidator
{
    public IReadOnlyList<DslDiagnostic> Validate(GameDocument document, string source)
    {
        ArgumentNullException.ThrowIfNull(document);
        List<DslDiagnostic> collected = new();

        string[] lines = NormalizeNewLines(source).Split('\n');
        Dictionary<string, (int Start, int End)> ruleSpans = BuildRuleSpans(lines);

        HashSet<string> roomIds = document.Rooms.Select(r => r.Id).ToHashSet(StringComparer.Ordinal);
        HashSet<string> objectIds = document.Objects.Select(o => o.Id).ToHashSet(StringComparer.Ordinal);
        HashSet<string> voiceIds = document.Voices.Keys.ToHashSet(StringComparer.Ordinal);
        HashSet<string> soundIds = document.Sounds.Keys.ToHashSet(StringComparer.Ordinal);
        HashSet<string> musicIds = document.Music.Keys.ToHashSet(StringComparer.Ordinal);

        ValidateVoiceTag(document.GameTitle, "game title");

        HashSet<string> placedObjectIds = new(StringComparer.Ordinal);
        foreach (RoomDeclaration room in document.Rooms)
        {
            ValidateVoiceTag(room.Name, $"room '{room.Id}' name");
            ValidateVoiceTag(room.Description, $"room '{room.Id}' desc");
            ValidateVoiceTag(room.Ambient, $"room '{room.Id}' ambient");
            foreach (ExitDeclaration exit in room.Exits)
            {
                ValidateVoiceTag(exit.LockedMessage, $"room '{room.Id}' exit '{exit.Direction}' locked message");
            }

            foreach (string objectId in room.Contains)
            {
                placedObjectIds.Add(objectId);
                if (!objectIds.Contains(objectId))
                {
                    yieldDiag("ETD001", UnknownObjectMessage(objectId, null), FindGlobalLocation(lines, $"contains {objectId}"), document.Includes.Count > 0);
                }
            }

            foreach (ExitDeclaration exit in room.Exits)
            {
                if (!roomIds.Contains(exit.TargetRoomId))
                {
                    yieldDiag("ETD002", UnknownRoomMessage(exit.TargetRoomId, null), FindGlobalLocation(lines, $"-> {exit.TargetRoomId}"), document.Includes.Count > 0);
                }

                if (!string.IsNullOrWhiteSpace(exit.KeyObjectId) && !objectIds.Contains(exit.KeyObjectId))
                {
                    yieldDiag("ETD001", UnknownObjectMessage(exit.KeyObjectId!, null), FindGlobalLocation(lines, $"key {exit.KeyObjectId}"), document.Includes.Count > 0);
                }
            }
        }

        foreach (ObjectDeclaration obj in document.Objects)
        {
            ValidateVoiceTag(obj.Name, $"object '{obj.Id}' name");
            ValidateVoiceTag(obj.Description, $"object '{obj.Id}' desc");
            if (obj.StatefulDescription is not null)
            {
                if (!objectIds.Contains(obj.StatefulDescription.ConditionObjectId))
                {
                    yieldDiag("ETD001", $"Unknown object '{obj.StatefulDescription.ConditionObjectId}'.", FindGlobalLocation(lines, $"isOpen {obj.StatefulDescription.ConditionObjectId}"), document.Includes.Count > 0);
                }

                ValidateVoiceTag(obj.StatefulDescription.WhenText, $"object '{obj.Id}' stateful desc true branch");
                ValidateVoiceTag(obj.StatefulDescription.ElseText, $"object '{obj.Id}' stateful desc else branch");
            }

            foreach (string childObjectId in obj.Contains)
            {
                placedObjectIds.Add(childObjectId);
                if (!objectIds.Contains(childObjectId))
                {
                    yieldDiag("ETD001", UnknownObjectMessage(childObjectId, null), FindGlobalLocation(lines, $"contains {childObjectId}"), document.Includes.Count > 0);
                }
            }

            foreach (ObjectVerbDeclaration verb in obj.Verbs)
            {
                foreach (RuleCondition condition in verb.Conditions)
                {
                    switch (condition)
                    {
                        case InCondition inCondition when !roomIds.Contains(inCondition.RoomId):
                            yieldDiag("ETD002", UnknownRoomMessage(inCondition.RoomId, null), FindGlobalLocation(lines, $"in {inCondition.RoomId}"), document.Includes.Count > 0);
                            break;
                        case IsOpenCondition isOpen when !objectIds.Contains(isOpen.ObjectId):
                            yieldDiag("ETD001", UnknownObjectMessage(isOpen.ObjectId, null), FindGlobalLocation(lines, $"isOpen {isOpen.ObjectId}"), document.Includes.Count > 0);
                            break;
                        case HasCondition has when !objectIds.Contains(has.ObjectId):
                            yieldDiag("ETD001", UnknownObjectMessage(has.ObjectId, null), FindGlobalLocation(lines, $"has {has.ObjectId}"), document.Includes.Count > 0);
                            break;
                        case ExitLockedCondition exitLocked when !roomIds.Contains(exitLocked.RoomId):
                            yieldDiag("ETD002", UnknownRoomMessage(exitLocked.RoomId, null), FindGlobalLocation(lines, $"exitLocked {exitLocked.RoomId}"), document.Includes.Count > 0);
                            break;
                        case ChanceCondition chance when chance.Percent is < 1 or > 100:
                            yieldDiag("ETD030", $"Invalid chance '{chance.Percent}' in object '{obj.Id}' verb '{verb.Verb}'. Allowed range is 1..100.", FindGlobalLocation(lines, $"chance {chance.Percent}"), false);
                            break;
                        case ValueCompareCondition valueCondition:
                            if (string.IsNullOrWhiteSpace(verb.Variable))
                            {
                                yieldDiag("ETD040", $"value comparison in object '{obj.Id}' verb '{verb.Verb}' requires a parameter like '<value>'.", FindGlobalLocation(lines, $"{valueCondition.Variable} "), false);
                                break;
                            }

                            if (!string.Equals(valueCondition.Variable, verb.Variable, StringComparison.Ordinal))
                            {
                                yieldDiag("ETD041", $"Unknown verb variable '{valueCondition.Variable}' in object '{obj.Id}' verb '{verb.Verb}'; expected '{verb.Variable}'.", FindGlobalLocation(lines, $"{valueCondition.Variable} "), false);
                            }

                            break;
                    }
                }

                ValidateObjectActions(obj.Id, $"verb '{verb.Verb}'", verb.Actions, objectIds, roomIds, soundIds, musicIds, voiceIds, lines, yieldDiag, document.Includes.Count > 0);
                ValidateObjectActions(obj.Id, $"verb '{verb.Verb}' else", verb.ElseActions, objectIds, roomIds, soundIds, musicIds, voiceIds, lines, yieldDiag, document.Includes.Count > 0);
            }

            ValidateObjectActions(obj.Id, "default", obj.DefaultActions, objectIds, roomIds, soundIds, musicIds, voiceIds, lines, yieldDiag, document.Includes.Count > 0);
        }

        if (document.Player is not null)
        {
            if (!roomIds.Contains(document.Player.StartRoomId))
            {
                yieldDiag("ETD002", UnknownRoomMessage(document.Player.StartRoomId, null), FindGlobalLocation(lines, $"start {document.Player.StartRoomId}"), document.Includes.Count > 0);
            }

            if (!string.IsNullOrWhiteSpace(document.Player.GivesObjectId))
            {
                string givesObjectId = document.Player.GivesObjectId!;
                if (!objectIds.Contains(givesObjectId))
                {
                    yieldDiag("ETD001", UnknownObjectMessage(givesObjectId, null), FindGlobalLocation(lines, $"gives {givesObjectId}"), document.Includes.Count > 0);
                }
                else if (placedObjectIds.Contains(givesObjectId))
                {
                    yieldDiag(
                        "ETD020",
                        $"player.gives '{givesObjectId}' is already placed in world; for v0.1 this is not allowed.",
                        FindGlobalLocation(lines, $"gives {givesObjectId}"),
                        false);
                }
            }
        }

        foreach (RuleDeclaration rule in document.Rules)
        {
            switch (rule.Trigger)
            {
                case EnterTrigger enter when !roomIds.Contains(enter.RoomId):
                    yieldDiag("ETD002", UnknownRoomMessage(enter.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"enter {enter.RoomId}"), document.Includes.Count > 0);
                    break;
                case LookTrigger look when !objectIds.Contains(look.TargetId):
                    yieldDiag("ETD001", UnknownObjectMessage(look.TargetId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"look {look.TargetId}"), document.Includes.Count > 0);
                    break;
                case UseTrigger use when !objectIds.Contains(use.ObjectId):
                    yieldDiag("ETD001", UnknownObjectMessage(use.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"use {use.ObjectId}"), document.Includes.Count > 0);
                    break;
                case UseOnTrigger useOn:
                    if (!objectIds.Contains(useOn.ObjectId))
                    {
                        yieldDiag("ETD001", UnknownObjectMessage(useOn.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"use {useOn.ObjectId}"), document.Includes.Count > 0);
                    }

                    if (!objectIds.Contains(useOn.TargetId))
                    {
                        yieldDiag("ETD001", UnknownObjectMessage(useOn.TargetId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"on {useOn.TargetId}"), document.Includes.Count > 0);
                    }

                    break;
                case TakeTrigger take when !objectIds.Contains(take.ObjectId):
                    yieldDiag("ETD001", UnknownObjectMessage(take.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"take {take.ObjectId}"), document.Includes.Count > 0);
                    break;
                case TickTrigger:
                    break;
                case CommandTrigger:
                    break;
            }

            foreach (RuleCondition condition in rule.Conditions)
            {
                switch (condition)
                {
                    case InCondition inCondition when !roomIds.Contains(inCondition.RoomId):
                        yieldDiag("ETD002", UnknownRoomMessage(inCondition.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"in {inCondition.RoomId}"), document.Includes.Count > 0);
                        break;
                    case IsOpenCondition isOpen when !objectIds.Contains(isOpen.ObjectId):
                        yieldDiag("ETD001", UnknownObjectMessage(isOpen.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"isOpen {isOpen.ObjectId}"), document.Includes.Count > 0);
                        break;
                    case HasCondition has when !objectIds.Contains(has.ObjectId):
                        yieldDiag("ETD001", UnknownObjectMessage(has.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"has {has.ObjectId}"), document.Includes.Count > 0);
                        break;
                    case ExitLockedCondition exitLocked when !roomIds.Contains(exitLocked.RoomId):
                        yieldDiag("ETD002", UnknownRoomMessage(exitLocked.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"exitLocked {exitLocked.RoomId}"), document.Includes.Count > 0);
                        break;
                    case ChanceCondition chance when chance.Percent is < 1 or > 100:
                        yieldDiag("ETD030", $"Invalid chance '{chance.Percent}' at rule {rule.Id}. Allowed range is 1..100.", FindRuleLocation(lines, ruleSpans, rule.Id, $"chance {chance.Percent}"), false);
                        break;
                    case ValueCompareCondition valueCondition:
                        if (rule.Trigger is not CommandTrigger commandTrigger)
                        {
                            yieldDiag("ETD040", $"value comparison is only valid with 'when command ... <...>' at rule {rule.Id}.", FindRuleLocation(lines, ruleSpans, rule.Id, $"{valueCondition.Variable} "), false);
                            break;
                        }

                        if (!string.Equals(valueCondition.Variable, commandTrigger.Variable, StringComparison.Ordinal))
                        {
                            yieldDiag("ETD041", $"Unknown command variable '{valueCondition.Variable}' at rule {rule.Id}; expected '{commandTrigger.Variable}'.", FindRuleLocation(lines, ruleSpans, rule.Id, $"{valueCondition.Variable} "), false);
                        }

                        break;
                }
            }

            foreach (RuleAction action in rule.Actions)
            {
                switch (action)
                {
                    case OpenAction open when !objectIds.Contains(open.ObjectId):
                        yieldDiag("ETD001", UnknownObjectMessage(open.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"open {open.ObjectId}"), document.Includes.Count > 0);
                        break;
                    case UnlockExitAction unlock when !roomIds.Contains(unlock.RoomId):
                        yieldDiag("ETD002", UnknownRoomMessage(unlock.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"unlock exit {unlock.RoomId}"), document.Includes.Count > 0);
                        break;
                    case SpawnInRoomAction spawn:
                        if (!objectIds.Contains(spawn.ObjectId))
                        {
                            yieldDiag("ETD001", UnknownObjectMessage(spawn.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"spawn {spawn.ObjectId}"), document.Includes.Count > 0);
                        }

                        if (!roomIds.Contains(spawn.RoomId))
                        {
                            yieldDiag("ETD002", UnknownRoomMessage(spawn.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"in {spawn.RoomId}"), document.Includes.Count > 0);
                        }

                        break;
                    case RevealInRoomAction reveal:
                        if (!objectIds.Contains(reveal.ObjectId))
                        {
                            yieldDiag("ETD001", UnknownObjectMessage(reveal.ObjectId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"reveal {reveal.ObjectId}"), document.Includes.Count > 0);
                        }

                        if (!roomIds.Contains(reveal.RoomId))
                        {
                            yieldDiag("ETD002", UnknownRoomMessage(reveal.RoomId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"in {reveal.RoomId}"), document.Includes.Count > 0);
                        }

                        break;
                    case PlaySoundAction playSound when !soundIds.Contains(playSound.SoundId):
                        yieldDiag("ETD003", UnknownSoundMessage(playSound.SoundId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"sound {playSound.SoundId}"), false);
                        break;
                    case PlayMusicAction playMusic when !musicIds.Contains(playMusic.MusicId):
                        yieldDiag("ETD004", UnknownMusicMessage(playMusic.MusicId, rule.Id), FindRuleLocation(lines, ruleSpans, rule.Id, $"playMusic {playMusic.MusicId}"), false);
                        break;
                }

                if (action is PrintAction print)
                {
                    ValidateVoiceTag(print.Text, $"rule '{rule.Id}' print");
                }
            }
        }

        return collected;

        void yieldDiag(string code, string message, SourceLocation? location, bool couldComeFromInclude)
        {
            DslDiagnosticSeverity severity = couldComeFromInclude ? DslDiagnosticSeverity.Warning : DslDiagnosticSeverity.Error;
            collected.Add(new DslDiagnostic(code, severity, message, location));
        }

        void ValidateVoiceTag(string? text, string context)
        {
            if (string.IsNullOrEmpty(text))
            {
                return;
            }

            if (!TryExtractVoiceId(text, out string? voiceId))
            {
                return;
            }

            if (!voiceIds.Contains(voiceId!))
            {
                yieldDiag("ETD005", $"Unknown voice '{voiceId}' in {context}.", FindGlobalLocation(lines, $"<{voiceId}>"), false);
            }
        }
    }

    private static string NormalizeNewLines(string source)
    {
        return source.Replace("\r\n", "\n").Replace('\r', '\n');
    }

    private static string UnknownObjectMessage(string objectId, string? ruleId)
    {
        return ruleId is null
            ? $"Unknown object '{objectId}'."
            : $"Unknown object '{objectId}' at rule {ruleId}.";
    }

    private static string UnknownRoomMessage(string roomId, string? ruleId)
    {
        return ruleId is null
            ? $"Unknown room '{roomId}'."
            : $"Unknown room '{roomId}' at rule {ruleId}.";
    }

    private static string UnknownSoundMessage(string soundId, string? ruleId)
    {
        return ruleId is null
            ? $"Unknown sound '{soundId}'."
            : $"Unknown sound '{soundId}' at rule {ruleId}.";
    }

    private static string UnknownMusicMessage(string musicId, string? ruleId)
    {
        return ruleId is null
            ? $"Unknown music '{musicId}'."
            : $"Unknown music '{musicId}' at rule {ruleId}.";
    }

    private static Dictionary<string, (int Start, int End)> BuildRuleSpans(string[] lines)
    {
        Dictionary<string, (int Start, int End)> spans = new(StringComparer.Ordinal);
        string? currentRule = null;
        int startLine = 0;
        int depth = 0;

        for (int i = 0; i < lines.Length; i++)
        {
            string line = lines[i];
            if (currentRule is null)
            {
                string trimmed = line.TrimStart();
                if (trimmed.StartsWith("rule ", StringComparison.Ordinal))
                {
                    int openBrace = trimmed.IndexOf('{');
                    string rulePart = openBrace >= 0 ? trimmed[..openBrace] : trimmed;
                    string[] parts = rulePart.Split(' ', StringSplitOptions.RemoveEmptyEntries);
                    if (parts.Length >= 2)
                    {
                        currentRule = parts[1];
                        startLine = i + 1;
                        depth = CountChar(line, '{') - CountChar(line, '}');
                        if (depth <= 0)
                        {
                            spans[currentRule] = (startLine, i + 1);
                            currentRule = null;
                            depth = 0;
                        }
                    }
                }

                continue;
            }

            depth += CountChar(line, '{');
            depth -= CountChar(line, '}');
            if (depth <= 0)
            {
                spans[currentRule] = (startLine, i + 1);
                currentRule = null;
                depth = 0;
            }
        }

        return spans;
    }

    private static int CountChar(string value, char c)
    {
        int count = 0;
        foreach (char ch in value)
        {
            if (ch == c)
            {
                count++;
            }
        }

        return count;
    }

    private static SourceLocation? FindRuleLocation(string[] lines, Dictionary<string, (int Start, int End)> ruleSpans, string ruleId, string token)
    {
        if (!ruleSpans.TryGetValue(ruleId, out (int Start, int End) span))
        {
            return FindGlobalLocation(lines, token);
        }

        for (int i = span.Start; i <= span.End && i <= lines.Length; i++)
        {
            int idx = lines[i - 1].IndexOf(token, StringComparison.Ordinal);
            if (idx >= 0)
            {
                return new SourceLocation(i, idx + 1);
            }
        }

        return new SourceLocation(span.Start, 1);
    }

    private static SourceLocation? FindGlobalLocation(string[] lines, string token)
    {
        for (int i = 0; i < lines.Length; i++)
        {
            int idx = lines[i].IndexOf(token, StringComparison.Ordinal);
            if (idx >= 0)
            {
                return new SourceLocation(i + 1, idx + 1);
            }
        }

        return null;
    }

    private static bool TryExtractVoiceId(string text, out string? voiceId)
    {
        voiceId = null;
        if (text.Length < 4 || text[0] != '<')
        {
            return false;
        }

        int end = text.IndexOf('>');
        if (end <= 1)
        {
            return false;
        }

        string candidate = text[1..end];
        if (!IsValidIdentifier(candidate))
        {
            return false;
        }

        voiceId = candidate;
        return true;
    }

    private static bool IsValidIdentifier(string value)
    {
        if (string.IsNullOrEmpty(value))
        {
            return false;
        }

        if (!(char.IsLetter(value[0]) || value[0] == '_'))
        {
            return false;
        }

        for (int i = 1; i < value.Length; i++)
        {
            char c = value[i];
            if (!(char.IsLetterOrDigit(c) || c == '_'))
            {
                return false;
            }
        }

        return true;
    }

    private static void ValidateObjectActions(
        string objectId,
        string actionScope,
        IReadOnlyList<RuleAction> actions,
        HashSet<string> objectIds,
        HashSet<string> roomIds,
        HashSet<string> soundIds,
        HashSet<string> musicIds,
        HashSet<string> voiceIds,
        string[] lines,
        Action<string, string, SourceLocation?, bool> emit,
        bool couldComeFromInclude)
    {
        foreach (RuleAction action in actions)
        {
            switch (action)
            {
                case OpenAction open when !objectIds.Contains(open.ObjectId):
                    emit("ETD001", $"Unknown object '{open.ObjectId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"open {open.ObjectId}"), couldComeFromInclude);
                    break;
                case UnlockExitAction unlock when !roomIds.Contains(unlock.RoomId):
                    emit("ETD002", $"Unknown room '{unlock.RoomId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"unlock exit {unlock.RoomId}"), couldComeFromInclude);
                    break;
                case SpawnInRoomAction spawn:
                    if (!objectIds.Contains(spawn.ObjectId))
                    {
                        emit("ETD001", $"Unknown object '{spawn.ObjectId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"spawn {spawn.ObjectId}"), couldComeFromInclude);
                    }

                    if (!roomIds.Contains(spawn.RoomId))
                    {
                        emit("ETD002", $"Unknown room '{spawn.RoomId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"in {spawn.RoomId}"), couldComeFromInclude);
                    }

                    break;
                case RevealInRoomAction reveal:
                    if (!objectIds.Contains(reveal.ObjectId))
                    {
                        emit("ETD001", $"Unknown object '{reveal.ObjectId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"reveal {reveal.ObjectId}"), couldComeFromInclude);
                    }

                    if (!roomIds.Contains(reveal.RoomId))
                    {
                        emit("ETD002", $"Unknown room '{reveal.RoomId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"in {reveal.RoomId}"), couldComeFromInclude);
                    }

                    break;
                case PlaySoundAction playSound when !soundIds.Contains(playSound.SoundId):
                    emit("ETD003", $"Unknown sound '{playSound.SoundId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"sound {playSound.SoundId}"), false);
                    break;
                case PlayMusicAction playMusic when !musicIds.Contains(playMusic.MusicId):
                    emit("ETD004", $"Unknown music '{playMusic.MusicId}' in object '{objectId}' {actionScope}.", FindGlobalLocation(lines, $"playMusic {playMusic.MusicId}"), false);
                    break;
                case PrintAction print when TryExtractVoiceId(print.Text, out string? voiceId) && !voiceIds.Contains(voiceId!):
                    emit("ETD005", $"Unknown voice '{voiceId}' in object '{objectId}' {actionScope} print.", FindGlobalLocation(lines, $"<{voiceId}>"), false);
                    break;
            }
        }
    }
}
