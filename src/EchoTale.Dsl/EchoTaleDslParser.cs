using EchoTale.Dsl.Data;
using EchoTale.Dsl.Types.Validation;
using EchoTale.Dsl.Types.World;
using Sprache;

namespace EchoTale.Dsl;

public static class EchoTaleDslParser
{
    private static readonly Parser<string> Identifier =
        Sprache.Parse.Letter.Or(Sprache.Parse.Char('_'))
            .Then(first => Sprache.Parse.LetterOrDigit.Or(Sprache.Parse.Char('_')).Many().Text().Select(rest => $"{first}{rest}"))
            .Token();

    private static readonly Parser<string> StringLiteral =
        from open in Sprache.Parse.Char('"').Token()
        from content in Sprache.Parse.Char('\\').Then(_ => Sprache.Parse.Chars('\\', '"', 'n', 'r', 't').Select(ConvertEscape))
            .Or(Sprache.Parse.CharExcept(new[] { '"', '\\' }))
            .Many()
            .Text()
        from close in Sprache.Parse.Char('"').Token()
        select content;

    private static readonly Parser<int> Integer =
        from digits in Sprache.Parse.Number.Token()
        select int.Parse(digits);

    private static readonly Parser<bool> Boolean =
        Keyword("true").Return(true)
            .Or(Keyword("false").Return(false));

    private static readonly Parser<WorldDirection> DirectionParser =
        Keyword("north").Return(WorldDirection.North)
            .Or(Keyword("south").Return(WorldDirection.South))
            .Or(Keyword("east").Return(WorldDirection.East))
            .Or(Keyword("west").Return(WorldDirection.West))
            .Or(Keyword("up").Return(WorldDirection.Up))
            .Or(Keyword("down").Return(WorldDirection.Down));

    private static readonly Parser<(string Title, string StartRoom)> GameHeader =
        from game in Keyword("game")
        from title in StringLiteral
        from start in Keyword("start")
        from startRoom in Identifier
        select (title, startRoom);

    private static readonly Parser<(RoomDeclaration? Room, ObjectDeclaration? Object, RuleDeclaration? Rule, PlayerDeclaration? Player, string? Include, string? Author, string? Version, IReadOnlyList<VoiceDeclaration>? Voices, IReadOnlyList<SoundDeclaration>? Sounds, IReadOnlyList<MusicDeclaration>? Music)> Declaration =
        (from room in Sprache.Parse.Ref(() => Room)
            select (room, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from obj in Sprache.Parse.Ref(() => GameObject)
            select ((RoomDeclaration?)null, obj, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from rule in Sprache.Parse.Ref(() => Rule)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, rule, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from player in Sprache.Parse.Ref(() => Player)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, player, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from include in Sprache.Parse.Ref(() => Include)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, include, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from author in Sprache.Parse.Ref(() => Author)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, author, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from version in Sprache.Parse.Ref(() => Version)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, version, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from voices in Sprache.Parse.Ref(() => VoicesBlock)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, voices, (IReadOnlyList<SoundDeclaration>?)null, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from sounds in Sprache.Parse.Ref(() => SoundsBlock)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, sounds, (IReadOnlyList<MusicDeclaration>?)null))
        .Or(from music in Sprache.Parse.Ref(() => MusicBlock)
            select ((RoomDeclaration?)null, (ObjectDeclaration?)null, (RuleDeclaration?)null, (PlayerDeclaration?)null, (string?)null, (string?)null, (string?)null, (IReadOnlyList<VoiceDeclaration>?)null, (IReadOnlyList<SoundDeclaration>?)null, music));

    private static readonly Parser<string> Include =
        from include in Keyword("include")
        from path in StringLiteral
        select path;

    private static readonly Parser<string> Author =
        from author in Keyword("author")
        from assign in Sprache.Parse.Char('=').Token()
        from value in StringLiteral
        select value;

    private static readonly Parser<string> Version =
        from version in Keyword("version")
        from assign in Sprache.Parse.Char('=').Token()
        from value in StringLiteral
        select value;

    private static readonly Parser<VoiceDeclaration> VoiceEntry =
        from id in Identifier
        from assign in Sprache.Parse.Char('=').Token()
        from name in StringLiteral
        select new VoiceDeclaration(id, name);

    private static readonly Parser<IReadOnlyList<VoiceDeclaration>> VoicesBlock =
        from voices in Keyword("voices")
        from open in Sprache.Parse.Char('{').Token()
        from entries in VoiceEntry.AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select entries.ToList();

    private static readonly Parser<SoundDeclaration> SoundEntry =
        from id in Identifier
        from assign in Sprache.Parse.Char('=').Token()
        from file in StringLiteral
        select new SoundDeclaration(id, file);

    private static readonly Parser<IReadOnlyList<SoundDeclaration>> SoundsBlock =
        from sounds in Keyword("sounds")
        from open in Sprache.Parse.Char('{').Token()
        from entries in SoundEntry.AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select entries.ToList();

    private static readonly Parser<MusicDeclaration> MusicEntry =
        from id in Identifier
        from assign in Sprache.Parse.Char('=').Token()
        from file in StringLiteral
        select new MusicDeclaration(id, file);

    private static readonly Parser<IReadOnlyList<MusicDeclaration>> MusicBlock =
        from music in Keyword("music")
        from open in Sprache.Parse.Char('{').Token()
        from entries in MusicEntry.AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select entries.ToList();

    private static readonly Parser<RoomDeclaration> Room =
        from room in Keyword("room")
        from id in Identifier
        from open in Sprache.Parse.Char('{').Token()
        from statements in Sprache.Parse.Ref(() => RoomStatement).Many()
        from close in Sprache.Parse.Char('}').Token()
        select BuildRoom(id, statements);

    private static readonly Parser<(string? Name, string? Image, string? Description, string? Ambient, ExitDeclaration? Exit, string? Contains)> RoomStatement =
        (from name in Keyword("name")
            from value in StringLiteral
            select (value, (string?)null, (string?)null, (string?)null, (ExitDeclaration?)null, (string?)null))
        .Or(from image in Keyword("image")
            from value in StringLiteral
            select ((string?)null, value, (string?)null, (string?)null, (ExitDeclaration?)null, (string?)null))
        .Or(from desc in Keyword("desc")
            from value in StringLiteral
            select ((string?)null, (string?)null, value, (string?)null, (ExitDeclaration?)null, (string?)null))
        .Or(from ambient in Keyword("ambient")
            from value in StringLiteral
            select ((string?)null, (string?)null, (string?)null, value, (ExitDeclaration?)null, (string?)null))
        .Or(from exit in Sprache.Parse.Ref(() => Exit)
            select ((string?)null, (string?)null, (string?)null, (string?)null, exit, (string?)null))
        .Or(from contains in Keyword("contains")
            from objectId in Identifier
            select ((string?)null, (string?)null, (string?)null, (string?)null, (ExitDeclaration?)null, objectId));

    private static readonly Parser<ExitDeclaration> Exit =
        from exit in Keyword("exit")
        from direction in DirectionParser
        from arrow in Sprache.Parse.String("->").Token()
        from targetRoom in Identifier
        from lockSegment in
            (from locked in Keyword("locked")
                from lockedValue in Boolean
                from key in (from keyKeyword in Keyword("key")
                    from keyId in Identifier
                    select keyId).Optional()
                from message in StringLiteral.Optional()
                select (
                    Locked: lockedValue,
                    KeyObjectId: key.IsDefined ? key.Get() : (string?)null,
                    Message: message.IsDefined ? message.Get() : (string?)null))
            .Optional()
        select new ExitDeclaration(
            direction,
            targetRoom,
            lockSegment.IsDefined && lockSegment.Get().Locked,
            lockSegment.IsDefined ? lockSegment.Get().KeyObjectId : null,
            lockSegment.IsDefined ? lockSegment.Get().Message : null);

    private static readonly Parser<PlayerDeclaration> Player =
        from player in Keyword("player")
        from open in Sprache.Parse.Char('{').Token()
        from statements in PlayerStatement.Many()
        from close in Sprache.Parse.Char('}').Token()
        select BuildPlayer(statements);

    private static readonly Parser<(string? Start, string? Gives, int? Hp)> PlayerStatement =
        (from start in Keyword("start")
            from roomId in Identifier
            select (roomId, (string?)null, (int?)null))
        .Or(from gives in Keyword("gives")
            from objectId in Identifier
            select ((string?)null, objectId, (int?)null))
        .Or(from hp in Keyword("hp")
            from value in Integer
            select ((string?)null, (string?)null, (int?)value));

    private static readonly Parser<ObjectDeclaration> GameObject =
        from obj in Keyword("object")
        from id in Identifier
        from open in Sprache.Parse.Char('{').Token()
        from statements in Sprache.Parse.Ref(() => ObjectStatement).Many()
        from close in Sprache.Parse.Char('}').Token()
        select BuildObject(id, statements);

    private static readonly Parser<ObjectStatefulDescription> ObjectStatefulDescriptionBlock =
        from open in Sprache.Parse.Char('{').Token()
        from ifKeyword in Keyword("if")
        from isOpen in Keyword("isOpen")
        from objectId in Identifier
        from expected in Boolean
        from whenText in StringLiteral
        from elseKeyword in Keyword("else")
        from elseText in StringLiteral
        from close in Sprache.Parse.Char('}').Token()
        select new ObjectStatefulDescription(objectId, expected, whenText, elseText);

    private static readonly Parser<IReadOnlyList<RuleAction>> ObjectDefaultBlock =
        from defaultKeyword in Keyword("default")
        from open in Sprache.Parse.Char('{').Token()
        from actions in (from doKeyword in Keyword("do")
            from action in Sprache.Parse.Ref(() => RuleAction)
            select action).AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select actions.ToList();

    private static readonly Parser<(string? Name, string? Description, ObjectStatefulDescription? StatefulDescription, bool? Portable, bool? Container, bool? Openable, bool? Locked, bool? IsOpen, bool? Hidden, string? Contains, IReadOnlyList<RuleAction>? DefaultActions, IReadOnlyList<ObjectVerbDeclaration>? Verbs)> ObjectStatement =
        (from name in Keyword("name")
            from value in StringLiteral
            select (value, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from desc in Keyword("desc")
            from value in StringLiteral
            select ((string?)null, value, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from desc in Keyword("desc")
            from value in Sprache.Parse.Ref(() => ObjectStatefulDescriptionBlock)
            select ((string?)null, (string?)null, value, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from portable in Keyword("portable")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)value, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from container in Keyword("container")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)value, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from openable in Keyword("openable")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)value, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from locked in Keyword("locked")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)value, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from isOpen in Keyword("isOpen")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)value, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from hidden in Keyword("hidden")
            from value in Boolean
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)value, (string?)null, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from contains in Keyword("contains")
            from value in Identifier
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, value, (IReadOnlyList<RuleAction>?)null, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from defaultActions in Sprache.Parse.Ref(() => ObjectDefaultBlock)
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, defaultActions, (IReadOnlyList<ObjectVerbDeclaration>?)null))
        .Or(from verbs in Sprache.Parse.Ref(() => ObjectVerbsBlock)
            select ((string?)null, (string?)null, (ObjectStatefulDescription?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (bool?)null, (string?)null, (IReadOnlyList<RuleAction>?)null, verbs));

    private static readonly Parser<IReadOnlyList<ObjectVerbDeclaration>> ObjectVerbsBlock =
        from verbs in Keyword("verbs")
        from open in Sprache.Parse.Char('{').Token()
        from entries in ObjectVerb.AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select entries.ToList();

    private static readonly Parser<ObjectVerbDeclaration> ObjectVerb =
        from verb in Identifier
        from variable in (from lt in Sprache.Parse.Char('<').Token()
            from variableId in Identifier
            from gt in Sprache.Parse.Char('>').Token()
            select variableId).Optional()
        from open in Sprache.Parse.Char('{').Token()
        from statements in ObjectVerbStatement.AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select BuildObjectVerb(verb, variable.IsDefined ? variable.Get() : null, statements);

    private static readonly Parser<(int Kind, RuleCondition? Condition, RuleAction? Action)> ObjectVerbStatement =
        (from ifKeyword in Keyword("if")
            from condition in Sprache.Parse.Ref(() => RuleCondition)
            select (0, condition, (RuleAction?)null))
        .Or(from elseKeyword in Keyword("else")
            select (1, (RuleCondition?)null, (RuleAction?)null))
        .Or(from doKeyword in Keyword("do")
            from action in Sprache.Parse.Ref(() => RuleAction)
            select (2, (RuleCondition?)null, action));

    private static readonly Parser<RuleDeclaration> Rule =
        from rule in Keyword("rule")
        from id in Identifier
        from once in Keyword("once").Optional()
        from open in Sprache.Parse.Char('{').Token()
        from when in Keyword("when")
        from trigger in Sprache.Parse.Ref(() => RuleTrigger)
        from conditions in (from ifKeyword in Keyword("if")
            from condition in Sprache.Parse.Ref(() => RuleCondition)
            select condition).Many()
        from actions in (from doKeyword in Keyword("do")
            from action in Sprache.Parse.Ref(() => RuleAction)
            select action).AtLeastOnce()
        from close in Sprache.Parse.Char('}').Token()
        select new RuleDeclaration(id, once.IsDefined, trigger, conditions.ToList(), actions.ToList());

    private static readonly Parser<RuleTrigger> RuleTrigger =
        (from command in Keyword("command")
            from commandName in Identifier
            from open in Sprache.Parse.Char('<').Token()
            from variable in Identifier
            from close in Sprache.Parse.Char('>').Token()
            select (RuleTrigger)new CommandTrigger(commandName, variable))
        .Or(from tick in Keyword("tick")
            select (RuleTrigger)new TickTrigger())
        .Or(from enter in Keyword("enter")
            from roomId in Identifier
            select (RuleTrigger)new EnterTrigger(roomId))
        .Or(from look in Keyword("look")
            from targetId in Identifier
            select (RuleTrigger)new LookTrigger(targetId))
        .Or(from take in Keyword("take")
            from objectId in Identifier
            select (RuleTrigger)new TakeTrigger(objectId))
        .Or(from use in Keyword("use")
            from objectId in Identifier
            from onKeyword in Keyword("on")
            from targetId in Identifier
            select (RuleTrigger)new UseOnTrigger(objectId, targetId))
        .Or(from use in Keyword("use")
            from objectId in Identifier
            select (RuleTrigger)new UseTrigger(objectId));

    private static readonly Parser<RuleCondition> RuleCondition =
        (from chance in Keyword("chance")
            from value in Integer
            select (RuleCondition)new ChanceCondition(value))
        .Or(from flag in Keyword("flag")
            from flagId in Identifier
            from isKeyword in Keyword("is")
            from value in Boolean
            select (RuleCondition)new FlagIsCondition(flagId, value))
        .Or(from inKeyword in Keyword("in")
            from roomId in Identifier
            select (RuleCondition)new InCondition(roomId))
        .Or(from isOpen in Keyword("isOpen")
            from objectId in Identifier
            from value in Boolean
            select (RuleCondition)new IsOpenCondition(objectId, value))
        .Or(from has in Keyword("has")
            from objectId in Identifier
            select (RuleCondition)new HasCondition(objectId))
        .Or(from exitLocked in Keyword("exitLocked")
            from roomId in Identifier
            from direction in DirectionParser
            select (RuleCondition)new ExitLockedCondition(roomId, direction))
        .Or(from variable in Identifier
            from op in Sprache.Parse.String("==").Text().Or(Sprache.Parse.String("!=").Text()).Token()
            from expected in StringLiteral
            let comparison = op == "!=" ? ComparisonOperator.NotEqual : ComparisonOperator.Equal
            select (RuleCondition)new ValueCompareCondition(variable, comparison, expected));

    private static readonly Parser<RuleAction> RuleAction =
        (from print in Keyword("print")
            from message in StringLiteral
            select (RuleAction)new PrintAction(message))
        .Or(from playMusic in Keyword("playMusic")
            from musicId in Identifier
            select (RuleAction)new PlayMusicAction(musicId))
        .Or(from stopMusic in Keyword("stopMusic")
            select (RuleAction)new StopMusicAction())
        .Or(from sound in Keyword("sound")
            from soundId in Identifier
            select (RuleAction)new PlaySoundAction(soundId))
        .Or(from spawn in Keyword("spawn")
            from objectId in Identifier
            from inKeyword in Keyword("in")
            from roomId in Identifier
            select (RuleAction)new SpawnInRoomAction(objectId, roomId))
        .Or(from reveal in Keyword("reveal")
            from objectId in Identifier
            from inKeyword in Keyword("in")
            from roomId in Identifier
            select (RuleAction)new RevealInRoomAction(objectId, roomId))
        .Or(from set in Keyword("set")
            from flag in Keyword("flag")
            from flagId in Identifier
            from value in Boolean
            select (RuleAction)new SetFlagAction(flagId, value))
        .Or(from open in Keyword("open")
            from objectId in Identifier
            select (RuleAction)new OpenAction(objectId))
        .Or(from unlock in Keyword("unlock")
            from exit in Keyword("exit")
            from roomId in Identifier
            from direction in DirectionParser
            select (RuleAction)new UnlockExitAction(roomId, direction));

    public static GameDocument Parse(string source)
    {
        if (string.IsNullOrWhiteSpace(source))
        {
            throw new ArgumentException("Source cannot be null or empty.", nameof(source));
        }

        string sanitizedSource = StripComments(source);

        Parser<GameDocument> parser =
            from header in GameHeader
            from declarations in Declaration.Many()
            from end in Sprache.Parse.WhiteSpace.Many().End()
            select BuildDocument(header.Title, header.StartRoom, declarations);

        return parser.Parse(sanitizedSource);
    }

    private static Parser<string> Keyword(string keyword) => Sprache.Parse.String(keyword).Text().Token();

    private static char ConvertEscape(char c) => c switch
    {
        'n' => '\n',
        'r' => '\r',
        't' => '\t',
        _ => c
    };

    private static string StripComments(string source)
    {
        ReadOnlySpan<char> input = source.AsSpan();
        Span<char> output = source.Length <= 4096 ? stackalloc char[source.Length] : new char[source.Length];

        int i = 0;
        int o = 0;

        while (i < input.Length)
        {
            char c = input[i];

            // Keep string literal content untouched.
            if (c == '"')
            {
                output[o++] = c;
                i++;
                bool escaped = false;
                while (i < input.Length)
                {
                    char ch = input[i];
                    output[o++] = ch;
                    i++;

                    if (escaped)
                    {
                        escaped = false;
                        continue;
                    }

                    if (ch == '\\')
                    {
                        escaped = true;
                        continue;
                    }

                    if (ch == '"')
                    {
                        break;
                    }
                }

                continue;
            }

            if (c == '#')
            {
                output[o++] = ' ';
                i++;
                while (i < input.Length && input[i] != '\n')
                {
                    output[o++] = ' ';
                    i++;
                }

                continue;
            }

            if (c == '/' && i + 1 < input.Length && input[i + 1] == '/')
            {
                output[o++] = ' ';
                output[o++] = ' ';
                i += 2;
                while (i < input.Length && input[i] != '\n')
                {
                    output[o++] = ' ';
                    i++;
                }

                continue;
            }

            if (c == '/' && i + 1 < input.Length && input[i + 1] == '*')
            {
                output[o++] = ' ';
                output[o++] = ' ';
                i += 2;

                bool closed = false;
                while (i < input.Length)
                {
                    if (i + 1 < input.Length && input[i] == '*' && input[i + 1] == '/')
                    {
                        output[o++] = ' ';
                        output[o++] = ' ';
                        i += 2;
                        closed = true;
                        break;
                    }

                    char ch = input[i];
                    output[o++] = ch == '\n' ? '\n' : ' ';
                    i++;
                }

                if (!closed)
                {
                    throw new ParseException("Unterminated block comment.");
                }

                continue;
            }

            output[o++] = c;
            i++;
        }

        return new string(output[..o]);
    }

    private static GameDocument BuildDocument(
        string title,
        string startRoom,
        IEnumerable<(RoomDeclaration? Room, ObjectDeclaration? Object, RuleDeclaration? Rule, PlayerDeclaration? Player, string? Include, string? Author, string? Version, IReadOnlyList<VoiceDeclaration>? Voices, IReadOnlyList<SoundDeclaration>? Sounds, IReadOnlyList<MusicDeclaration>? Music)> declarations)
    {
        List<RoomDeclaration> rooms = new();
        List<ObjectDeclaration> objects = new();
        List<RuleDeclaration> rules = new();
        List<string> includes = new();
        string? author = null;
        string? version = null;
        Dictionary<string, string> voices = new(StringComparer.Ordinal);
        Dictionary<string, string> sounds = new(StringComparer.Ordinal);
        Dictionary<string, string> music = new(StringComparer.Ordinal);
        PlayerDeclaration? player = null;

        foreach ((RoomDeclaration? room, ObjectDeclaration? obj, RuleDeclaration? rule, PlayerDeclaration? playerDecl, string? include, string? authorDeclaration, string? versionDeclaration, IReadOnlyList<VoiceDeclaration>? voicesBlock, IReadOnlyList<SoundDeclaration>? soundsBlock, IReadOnlyList<MusicDeclaration>? musicBlock) declaration in declarations)
        {
            if (declaration.room is not null)
            {
                rooms.Add(declaration.room);
            }

            if (declaration.obj is not null)
            {
                objects.Add(declaration.obj);
            }

            if (declaration.rule is not null)
            {
                rules.Add(declaration.rule);
            }

            if (declaration.playerDecl is not null)
            {
                player = declaration.playerDecl;
            }

            if (declaration.include is not null)
            {
                includes.Add(declaration.include);
            }

            if (declaration.authorDeclaration is not null)
            {
                author = declaration.authorDeclaration;
            }

            if (declaration.versionDeclaration is not null)
            {
                version = declaration.versionDeclaration;
            }

            if (declaration.voicesBlock is not null)
            {
                foreach (VoiceDeclaration blockVoice in declaration.voicesBlock)
                {
                    voices[blockVoice.Id] = blockVoice.Name;
                }
            }

            if (declaration.soundsBlock is not null)
            {
                foreach (SoundDeclaration blockSound in declaration.soundsBlock)
                {
                    sounds[blockSound.Id] = blockSound.File;
                }
            }

            if (declaration.musicBlock is not null)
            {
                foreach (MusicDeclaration blockMusic in declaration.musicBlock)
                {
                    music[blockMusic.Id] = blockMusic.File;
                }
            }
        }

        return new GameDocument(title, author, version, player?.StartRoomId ?? startRoom, player, includes, voices, sounds, music, rooms, objects, rules);
    }

    private static RoomDeclaration BuildRoom(
        string id,
        IEnumerable<(string? Name, string? Image, string? Description, string? Ambient, ExitDeclaration? Exit, string? Contains)> statements)
    {
        string? name = null;
        string? image = null;
        string? description = null;
        string? ambient = null;
        List<ExitDeclaration> exits = new();
        List<string> contains = new();

        foreach ((string? stmtName, string? stmtImage, string? stmtDesc, string? stmtAmbient, ExitDeclaration? stmtExit, string? stmtContains) in statements)
        {
            if (stmtName is not null)
            {
                name = stmtName;
            }

            if (stmtImage is not null)
            {
                image = stmtImage;
            }

            if (stmtDesc is not null)
            {
                description = stmtDesc;
            }

            if (stmtAmbient is not null)
            {
                ambient = stmtAmbient;
            }

            if (stmtExit is not null)
            {
                exits.Add(stmtExit);
            }

            if (stmtContains is not null)
            {
                contains.Add(stmtContains);
            }
        }

        return new RoomDeclaration(id, name, image, description, ambient, exits, contains);
    }

    private static ObjectDeclaration BuildObject(
        string id,
        IEnumerable<(string? Name, string? Description, ObjectStatefulDescription? StatefulDescription, bool? Portable, bool? Container, bool? Openable, bool? Locked, bool? IsOpen, bool? Hidden, string? Contains, IReadOnlyList<RuleAction>? DefaultActions, IReadOnlyList<ObjectVerbDeclaration>? Verbs)> statements)
    {
        string? name = null;
        string? description = null;
        ObjectStatefulDescription? statefulDescription = null;
        bool? portable = null;
        bool? container = null;
        bool? openable = null;
        bool? locked = null;
        bool? isOpen = null;
        bool? hidden = null;
        List<string> contains = new();
        List<RuleAction> defaultActions = new();
        List<ObjectVerbDeclaration> verbs = new();

        foreach ((string? stmtName, string? stmtDesc, ObjectStatefulDescription? stmtStatefulDescription, bool? stmtPortable, bool? stmtContainer, bool? stmtOpenable, bool? stmtLocked, bool? stmtIsOpen, bool? stmtHidden, string? stmtContains, IReadOnlyList<RuleAction>? stmtDefaultActions, IReadOnlyList<ObjectVerbDeclaration>? stmtVerbs) in statements)
        {
            if (stmtName is not null)
            {
                name = stmtName;
            }

            if (stmtDesc is not null)
            {
                description = stmtDesc;
                statefulDescription = null;
            }

            if (stmtStatefulDescription is not null)
            {
                statefulDescription = stmtStatefulDescription;
                description = null;
            }

            if (stmtPortable.HasValue)
            {
                portable = stmtPortable.Value;
            }

            if (stmtContainer.HasValue)
            {
                container = stmtContainer.Value;
            }

            if (stmtOpenable.HasValue)
            {
                openable = stmtOpenable.Value;
            }

            if (stmtLocked.HasValue)
            {
                locked = stmtLocked.Value;
            }

            if (stmtIsOpen.HasValue)
            {
                isOpen = stmtIsOpen.Value;
            }

            if (stmtHidden.HasValue)
            {
                hidden = stmtHidden.Value;
            }

            if (stmtContains is not null)
            {
                contains.Add(stmtContains);
            }

            if (stmtDefaultActions is not null)
            {
                defaultActions = stmtDefaultActions.ToList();
            }

            if (stmtVerbs is not null)
            {
                verbs.AddRange(stmtVerbs);
            }
        }

        return new ObjectDeclaration(id, name, description, statefulDescription, portable, container, openable, locked, isOpen, hidden, contains, defaultActions, verbs);
    }

    private static ObjectVerbDeclaration BuildObjectVerb(string verb, string? variable, IEnumerable<(int Kind, RuleCondition? Condition, RuleAction? Action)> statements)
    {
        List<RuleCondition> conditions = new();
        List<RuleAction> actions = new();
        List<RuleAction> elseActions = new();
        bool inElse = false;

        foreach ((int kind, RuleCondition? condition, RuleAction? action) in statements)
        {
            if (kind == 0 && condition is not null)
            {
                conditions.Add(condition);
                continue;
            }

            if (kind == 1)
            {
                inElse = true;
                continue;
            }

            if (kind == 2 && action is not null)
            {
                if (inElse)
                {
                    elseActions.Add(action);
                }
                else
                {
                    actions.Add(action);
                }
            }
        }

        return new ObjectVerbDeclaration(verb, variable, conditions, actions, elseActions);
    }

    private static PlayerDeclaration BuildPlayer(IEnumerable<(string? Start, string? Gives, int? Hp)> statements)
    {
        string? startRoomId = null;
        string? givesObjectId = null;
        int hp = 0;

        foreach ((string? stmtStart, string? stmtGives, int? stmtHp) in statements)
        {
            if (stmtStart is not null)
            {
                startRoomId = stmtStart;
            }

            if (stmtGives is not null)
            {
                givesObjectId = stmtGives;
            }

            if (stmtHp.HasValue)
            {
                hp = stmtHp.Value;
            }
        }

        if (startRoomId is null)
        {
            throw new ParseException("player.start is required.");
        }

        return new PlayerDeclaration(startRoomId, givesObjectId, hp);
    }
}
