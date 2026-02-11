using EchoTale.Dsl.Data;
using EchoTale.Dsl.Types.Validation;
using EchoTale.Dsl.Types.World;

namespace EchoTale.Dsl.Tests;

public sealed class EchoTaleDslParserTests
{
    [Fact]
    public void Parse_ShouldBuildAst_ForFullScript()
    {
        const string script = """
                              game "The Crooked House" start laboratory
                              include "common/items.etf"
                              sounds {
                                unlock = "unlock.wav"
                                door = "door_creak.wav"
                                coin = "coin_drop.wav"
                              }
                              music {
                                lab = "lab_theme.ogg"
                                rain = "rain_loop.ogg"
                                study = "studio_theme.ogg"
                              }

                              player {
                                start laboratory
                                gives key
                                hp 20
                              }

                              room laboratory {
                                name "Laboratory" image "laboratory.png"
                                desc "A dusty room. A chair and a cabinet."
                                exit east -> corridor
                                contains chair
                                contains cabinet
                              }

                              room corridor {
                                name "Corridor"
                                desc "Long and silent."
                                exit west -> laboratory
                                exit east -> study locked true key key "The door is locked."
                                contains study_door
                              }

                              room study {
                                name "Study"
                                desc "Papers everywhere."
                                exit west -> corridor
                              }

                              object chair {
                                name "Chair"
                                desc "A wobbly chair."
                                portable false
                              }

                              object cabinet {
                                name "Cabinet"
                                desc "A closed metal cabinet."
                                portable false
                                container true
                                openable true
                                locked false
                                isOpen false
                                contains key
                              }

                              object key {
                                name "Key"
                                desc "A rusty key."
                                portable true
                              }

                              object study_door {
                                name "Study door"
                                desc "A sturdy door with a lock."
                                portable false
                              }

                              object diary {
                                name "Diary"
                                desc "A dusty diary."
                                portable true
                              }

                              object keypad_door {
                                name "Keypad door"
                                desc "A door with a numeric keypad."
                                portable false
                              }

                              rule first_enter_lab {
                                when enter laboratory
                                if flag seenLab is false
                                do print "An icy draft brushes the back of your neck."
                                do set flag seenLab true
                              }

                              rule look_cabinet_closed {
                                when look cabinet
                                if in laboratory
                                if isOpen cabinet false
                                do print "It's closed. Maybe you can open it."
                              }

                              rule open_cabinet {
                                when use cabinet
                                if in laboratory
                                if isOpen cabinet false
                                do open cabinet
                                do print "You open the cabinet."
                              }

                              rule unlock_study {
                                when use key on study_door
                                if in corridor
                                if exitLocked corridor east
                                do unlock exit corridor east
                                do sound unlock
                                do playMusic lab
                                do stopMusic
                                do print "Click. The door opens."
                              }

                              rule take_diary {
                                when take diary
                                do print "You hear something fall to the ground..."
                                do spawn coin in laboratory
                              }

                              rule read_diary {
                                when look diary
                                do print "Between the pages you read: 'The code is 0421'."
                                do set flag knowsCode true
                              }

                              rule correct_code {
                                when command enter <value>
                                if in corridor
                                if value == "0421"
                                do unlock exit corridor north
                                do print "The keypad beeps. The door opens."
                              }

                              rule wrong_code {
                                when command enter <value>
                                if in corridor
                                if value != "0421"
                                do print "Beep. Wrong code."
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);

        Assert.Equal("The Crooked House", document.GameTitle);
        Assert.Equal("laboratory", document.StartRoomId);
        Assert.Single(document.Includes);
        Assert.Equal("common/items.etf", document.Includes[0]);
        Assert.Equal(3, document.Sounds.Count);
        Assert.Equal("unlock.wav", document.Sounds["unlock"]);
        Assert.Equal("door_creak.wav", document.Sounds["door"]);
        Assert.Equal("coin_drop.wav", document.Sounds["coin"]);
        Assert.Equal(3, document.Music.Count);
        Assert.Equal("lab_theme.ogg", document.Music["lab"]);
        Assert.Equal("rain_loop.ogg", document.Music["rain"]);
        Assert.Equal("studio_theme.ogg", document.Music["study"]);
        Assert.NotNull(document.Player);
        Assert.Equal("laboratory", document.Player!.StartRoomId);
        Assert.Equal("key", document.Player.GivesObjectId);
        Assert.Equal(20, document.Player.Hp);
        Assert.Equal(3, document.Rooms.Count);
        Assert.Equal(6, document.Objects.Count);
        Assert.Equal(8, document.Rules.Count);

        var lab = Assert.Single(document.Rooms, r => r.Id == "laboratory");
        Assert.Equal("laboratory.png", lab.Image);

        var corridor = Assert.Single(document.Rooms, r => r.Id == "corridor");
        Assert.Equal(2, corridor.Exits.Count);
        var eastExit = Assert.Single(corridor.Exits, e => e.Direction == WorldDirection.East);
        Assert.True(eastExit.Locked);
        Assert.Equal("key", eastExit.KeyObjectId);
        Assert.Equal("The door is locked.", eastExit.LockedMessage);

        var unlockStudy = Assert.Single(document.Rules, r => r.Id == "unlock_study");
        Assert.IsType<UseOnTrigger>(unlockStudy.Trigger);
        Assert.Equal(2, unlockStudy.Conditions.Count);
        Assert.Equal(5, unlockStudy.Actions.Count);
        Assert.IsType<PlaySoundAction>(unlockStudy.Actions[1]);
        Assert.IsType<PlayMusicAction>(unlockStudy.Actions[2]);
        Assert.IsType<StopMusicAction>(unlockStudy.Actions[3]);
        Assert.Contains(unlockStudy.Actions, a => a is UnlockExitAction);

        var takeDiary = Assert.Single(document.Rules, r => r.Id == "take_diary");
        Assert.IsType<TakeTrigger>(takeDiary.Trigger);
        Assert.Equal(2, takeDiary.Actions.Count);
        var spawn = Assert.IsType<SpawnInRoomAction>(takeDiary.Actions[1]);
        Assert.Equal("coin", spawn.ObjectId);
        Assert.Equal("laboratory", spawn.RoomId);

        var correctCode = Assert.Single(document.Rules, r => r.Id == "correct_code");
        var commandTrigger = Assert.IsType<CommandTrigger>(correctCode.Trigger);
        Assert.Equal("enter", commandTrigger.Command);
        Assert.Equal("value", commandTrigger.Variable);
        Assert.Contains(correctCode.Conditions, c => c is ValueCompareCondition { Variable: "value", Operator: ComparisonOperator.Equal, Expected: "0421" });

        var wrongCode = Assert.Single(document.Rules, r => r.Id == "wrong_code");
        Assert.Contains(wrongCode.Conditions, c => c is ValueCompareCondition { Variable: "value", Operator: ComparisonOperator.NotEqual, Expected: "0421" });
    }

    [Fact]
    public void Validate_ShouldReportUnknownObject_WithLocation()
    {
        const string script = """
                              game "X" start laboratory
                              room laboratory { name "Lab" }
                              rule take_diary {
                                when take diary
                                do print "ok"
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);
        var diagnostics = new DslSemanticValidator().Validate(document, script);

        var unknown = Assert.Single(diagnostics, d => d.Code == "ETD001");
        Assert.Contains("Unknown object 'diary' at rule take_diary", unknown.Message);
        Assert.NotNull(unknown.Location);
        Assert.Equal(4, unknown.Location!.Line);
    }

    [Fact]
    public void Validate_ShouldReportError_WhenPlayerGivesObjectAlreadyInWorld()
    {
        const string script = """
                              game "X" start laboratory
                              player {
                                start laboratory
                                gives key
                                hp 10
                              }
                              room laboratory {
                                name "Lab"
                                contains key
                              }
                              object key {
                                name "Key"
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);
        var diagnostics = new DslSemanticValidator().Validate(document, script);

        Assert.Contains(diagnostics, d => d.Code == "ETD020");
    }

    [Fact]
    public void Validate_ShouldAllowSpawnMove_WhenObjectAlreadyInWorld()
    {
        const string script = """
                              game "X" start laboratory
                              room laboratory { name "Lab" }
                              room storage {
                                name "Storage"
                                contains coin
                              }
                              object coin { name "Coin" }
                              rule move_coin {
                                when take coin
                                do spawn coin in laboratory
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);
        var diagnostics = new DslSemanticValidator().Validate(document, script);

        Assert.DoesNotContain(diagnostics, d => d.Code == "ETD001");
    }

    [Fact]
    public void Validate_ShouldReportUnknownMusic_WhenPlayMusicIsNotDeclared()
    {
        const string script = """
                              game "X" start laboratory
                              room laboratory { name "Lab" }
                              object key { name "Key" }
                              rule bad_music {
                                when use key
                                do playMusic missing_track
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);
        var diagnostics = new DslSemanticValidator().Validate(document, script);

        Assert.Contains(diagnostics, d => d.Code == "ETD004");
    }

    [Fact]
    public void Parse_ShouldSupportTickTrigger_AndChanceCondition()
    {
        const string script = """
                              game "X" start corridor
                              sounds {
                                rain_start = "rain_start.wav"
                              }
                              room corridor { name "Corridor" }
                              room laboratory { name "Laboratory" }
                              object diary { name "Diary" }

                              rule rain_starts {
                                when tick
                                if in corridor
                                if flag raining is false
                                if chance 3
                                do set flag raining true
                                do print "Somewhere, it starts to rain."
                                do sound rain_start
                              }

                              rule rain_ambience {
                                when tick
                                if flag raining is true
                                if chance 15
                                do print "The rain drums in the distance."
                              }

                              rule throat_tightens {
                                when tick
                                if in laboratory
                                if chance 8
                                do print "You feel a lump in your throat, for no reason."
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);

        var rainStarts = Assert.Single(document.Rules, r => r.Id == "rain_starts");
        Assert.IsType<TickTrigger>(rainStarts.Trigger);
        Assert.Contains(rainStarts.Conditions, c => c is ChanceCondition { Percent: 3 });

        var rainAmbience = Assert.Single(document.Rules, r => r.Id == "rain_ambience");
        Assert.IsType<TickTrigger>(rainAmbience.Trigger);
        Assert.Contains(rainAmbience.Conditions, c => c is ChanceCondition { Percent: 15 });

        var throatTightens = Assert.Single(document.Rules, r => r.Id == "throat_tightens");
        Assert.IsType<TickTrigger>(throatTightens.Trigger);
        Assert.Contains(throatTightens.Conditions, c => c is ChanceCondition { Percent: 8 });
    }

    [Fact]
    public void Parse_ShouldSupportObjectVerbs_WithElseBranch()
    {
        const string script = """
                              game "X" start corridor
                              sounds {
                                page = "page.wav"
                                unlock = "unlock.wav"
                              }
                              room corridor {
                                name "Corridor"
                                exit north -> study locked true
                              }
                              room study { name "Study" }

                              object diary {
                                name "Diary"
                                desc "A dusty diary."
                                portable true
                                verbs {
                                  read {
                                    do print "Between the pages you read: 'The code is 0421'."
                                    do set flag knowsCode true
                                    do sound page
                                  }

                                  tear {
                                    do print "You tear a page. You feel a bit guilty."
                                    do set flag torePage true
                                  }
                                }
                              }

                              object keypad_door {
                                name "Keypad door"
                                desc "A door with a numeric keypad."
                                portable false
                                verbs {
                                  enter <value> {
                                    if value == "0421"
                                    do unlock exit corridor north
                                    do print "Beep. Correct code."
                                    do sound unlock
                                    else
                                    do print "Beep. Wrong code."
                                  }
                                }
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);

        var diary = Assert.Single(document.Objects, o => o.Id == "diary");
        Assert.Equal(2, diary.Verbs.Count);
        var readVerb = Assert.Single(diary.Verbs, v => v.Verb == "read");
        Assert.Null(readVerb.Variable);
        Assert.Equal(3, readVerb.Actions.Count);
        Assert.Empty(readVerb.ElseActions);

        var keypadDoor = Assert.Single(document.Objects, o => o.Id == "keypad_door");
        var insertVerb = Assert.Single(keypadDoor.Verbs, v => v.Verb == "enter");
        Assert.Equal("value", insertVerb.Variable);
        Assert.Single(insertVerb.Conditions);
        Assert.IsType<ValueCompareCondition>(insertVerb.Conditions[0]);
        Assert.Equal(3, insertVerb.Actions.Count);
        Assert.Single(insertVerb.ElseActions);
    }

    [Fact]
    public void Parse_ShouldIgnoreHashSlashAndBlockComments()
    {
        const string script = """
                              # initial comment
                              game "Comment Test" start lab // inline comment
                              include "common/base.etf"
                              /* block
                                 multiline */
                              sounds {
                                click = "click.wav" # trailing
                              }
                              room lab {
                                name "Lab" // room name
                                desc "A room // not a comment inside string"
                              }
                              object key {
                                name "Key"
                                desc "Small key."
                                portable true
                              }
                              rule r1 {
                                when look key
                                do print "ok /* text */"
                              }
                              """;

        var document = EchoTaleDslParser.Parse(script);

        Assert.Equal("Comment Test", document.GameTitle);
        Assert.Equal("lab", document.StartRoomId);
        Assert.Single(document.Includes);
        Assert.Single(document.Sounds);
        Assert.Single(document.Rooms);
        Assert.Single(document.Objects);
        Assert.Single(document.Rules);
    }
}
