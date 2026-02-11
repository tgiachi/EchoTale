/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "echotale",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => seq($.game_declaration, repeat($._top_level)),

    _top_level: ($) =>
      choice(
        $.include_statement,
        $.author_statement,
        $.version_statement,
        $.voices_block,
        $.sounds_block,
        $.music_block,
        $.player_block,
        $.room_block,
        $.object_block,
        $.rule_block
      ),

    // ── Top-level declarations ──────────────────────────────

    game_declaration: ($) =>
      seq("game", $.string, "start", field("start_room", $.identifier)),

    include_statement: ($) => seq("include", $.string),

    author_statement: ($) => seq("author", "=", $.string),

    version_statement: ($) => seq("version", "=", $.string),

    voices_block: ($) => seq("voices", "{", repeat($.key_value), "}"),

    sounds_block: ($) => seq("sounds", "{", repeat($.key_value), "}"),

    music_block: ($) => seq("music", "{", repeat($.key_value), "}"),

    key_value: ($) =>
      seq(field("key", $.identifier), "=", field("value", $.string)),

    // ── Player ──────────────────────────────────────────────

    player_block: ($) => seq("player", "{", repeat($._player_prop), "}"),

    _player_prop: ($) =>
      choice($.player_start, $.player_gives, $.player_hp),

    player_start: ($) => seq("start", $.identifier),
    player_gives: ($) => seq("gives", $.identifier),
    player_hp: ($) => seq("hp", $.number),

    // ── Room ────────────────────────────────────────────────

    room_block: ($) =>
      seq("room", field("id", $.identifier), "{", repeat($._room_prop), "}"),

    _room_prop: ($) =>
      choice(
        $.name_prop,
        $.desc_prop,
        $.image_prop,
        $.ambient_prop,
        $.exit_statement,
        $.contains_prop
      ),

    name_prop: ($) => seq("name", $.string),
    desc_prop: ($) => seq("desc", choice($.string, $.stateful_desc)),
    image_prop: ($) => seq("image", $.string),
    ambient_prop: ($) => seq("ambient", $.string),
    contains_prop: ($) => seq("contains", $.identifier),

    stateful_desc: ($) =>
      seq(
        "{",
        "if",
        "isOpen",
        field("object", $.identifier),
        $.boolean,
        $.string,
        "else",
        $.string,
        "}"
      ),

    exit_statement: ($) =>
      seq(
        "exit",
        field("direction", $.direction),
        "->",
        field("target", $.identifier),
        optional($.exit_lock)
      ),

    exit_lock: ($) =>
      seq(
        "locked",
        $.boolean,
        optional(seq("key", field("key", $.identifier))),
        optional(field("message", $.string))
      ),

    // ── Object ──────────────────────────────────────────────

    object_block: ($) =>
      seq(
        "object",
        field("id", $.identifier),
        "{",
        repeat($._object_prop),
        "}"
      ),

    _object_prop: ($) =>
      choice(
        $.name_prop,
        $.desc_prop,
        $.portable_prop,
        $.container_prop,
        $.openable_prop,
        $.locked_prop,
        $.is_open_prop,
        $.hidden_prop,
        $.contains_prop,
        $.default_block,
        $.verbs_block
      ),

    portable_prop: ($) => seq("portable", $.boolean),
    container_prop: ($) => seq("container", $.boolean),
    openable_prop: ($) => seq("openable", $.boolean),
    locked_prop: ($) => seq("locked", $.boolean),
    is_open_prop: ($) => seq("isOpen", $.boolean),
    hidden_prop: ($) => seq("hidden", $.boolean),

    // ── Default fallback ────────────────────────────────────

    default_block: ($) => seq("default", "{", repeat1($.do_clause), "}"),

    // ── Verbs ───────────────────────────────────────────────

    verbs_block: ($) => seq("verbs", "{", repeat($.verb_def), "}"),

    verb_def: ($) =>
      seq(
        field("verb", $.identifier),
        optional($.verb_parameter),
        "{",
        repeat($._verb_statement),
        optional($.else_branch),
        "}"
      ),

    verb_parameter: ($) => seq("<", $.identifier, ">"),

    _verb_statement: ($) => choice($.if_clause, $.do_clause),

    else_branch: ($) => seq("else", repeat1($.do_clause)),

    // ── Rule ────────────────────────────────────────────────

    rule_block: ($) =>
      seq(
        "rule",
        field("id", $.identifier),
        optional($.once_modifier),
        "{",
        $.when_clause,
        repeat($.if_clause),
        repeat1($.do_clause),
        "}"
      ),

    once_modifier: ($) => "once",

    // ── Triggers ────────────────────────────────────────────

    when_clause: ($) => seq("when", $._trigger),

    _trigger: ($) =>
      choice(
        $.tick_trigger,
        $.enter_trigger,
        $.look_trigger,
        $.take_trigger,
        $.use_on_trigger,
        $.use_trigger,
        $.command_trigger
      ),

    tick_trigger: ($) => "tick",
    enter_trigger: ($) => seq("enter", $.identifier),
    look_trigger: ($) => seq("look", $.identifier),
    take_trigger: ($) => seq("take", $.identifier),
    use_trigger: ($) => seq("use", $.identifier),
    use_on_trigger: ($) =>
      seq(
        "use",
        field("object", $.identifier),
        "on",
        field("target", $.identifier)
      ),
    command_trigger: ($) =>
      seq(
        "command",
        field("command", $.identifier),
        "<",
        field("variable", $.identifier),
        ">"
      ),

    // ── Conditions ──────────────────────────────────────────

    if_clause: ($) => seq("if", $._condition),

    _condition: ($) =>
      choice(
        $.chance_condition,
        $.flag_condition,
        $.in_condition,
        $.is_open_condition,
        $.has_condition,
        $.exit_locked_condition,
        $.value_compare_condition
      ),

    chance_condition: ($) => seq("chance", $.number),
    flag_condition: ($) => seq("flag", $.identifier, "is", $.boolean),
    in_condition: ($) => seq("in", $.identifier),
    is_open_condition: ($) => seq("isOpen", $.identifier, $.boolean),
    has_condition: ($) => seq("has", $.identifier),
    exit_locked_condition: ($) =>
      seq("exitLocked", $.identifier, $.direction),
    value_compare_condition: ($) =>
      seq($.identifier, choice("==", "!="), $.string),

    // ── Actions ─────────────────────────────────────────────

    do_clause: ($) => seq("do", $._action),

    _action: ($) =>
      choice(
        $.print_action,
        $.set_flag_action,
        $.open_action,
        $.unlock_exit_action,
        $.spawn_action,
        $.reveal_action,
        $.sound_action,
        $.play_music_action,
        $.stop_music_action
      ),

    print_action: ($) => seq("print", $.string),
    set_flag_action: ($) => seq("set", "flag", $.identifier, $.boolean),
    open_action: ($) => seq("open", $.identifier),
    unlock_exit_action: ($) =>
      seq("unlock", "exit", $.identifier, $.direction),
    spawn_action: ($) =>
      seq(
        "spawn",
        field("object", $.identifier),
        "in",
        field("room", $.identifier)
      ),
    reveal_action: ($) =>
      seq(
        "reveal",
        field("object", $.identifier),
        "in",
        field("room", $.identifier)
      ),
    sound_action: ($) => seq("sound", $.identifier),
    play_music_action: ($) => seq("playMusic", $.identifier),
    stop_music_action: ($) => "stopMusic",

    // ── Terminals ───────────────────────────────────────────

    direction: ($) =>
      choice("north", "south", "east", "west", "up", "down"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: ($) => seq('"', /([^"\\]|\\.)*/, '"'),

    number: ($) => /\d+/,

    boolean: ($) => choice("true", "false"),

    comment: ($) =>
      choice(
        seq("#", /[^\n]*/),
        seq("//", /[^\n]*/),
        seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
      ),
  },
});
