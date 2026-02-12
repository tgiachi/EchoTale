; ── Keywords ──────────────────────────────────────────────

[
  "game"
  "start"
  "include"
  "author"
  "version"
  "room"
  "object"
  "rule"
  "player"
  "voices"
  "sounds"
  "music"
  "verbs"
  "default"
  "when"
  "if"
  "do"
  "else"
] @keyword

; ── Rule modifier ────────────────────────────────────────

(once_modifier) @keyword.modifier

; ── Property keywords ────────────────────────────────────

[
  "name"
  "desc"
  "image"
  "ambient"
  "exit"
  "contains"
  "portable"
  "container"
  "openable"
  "locked"
  "isOpen"
  "hidden"
  "gives"
  "hp"
  "key"
] @keyword.modifier

; ── Trigger keywords ─────────────────────────────────────

[
  "enter"
  "look"
  "use"
  "take"
  "on"
  "command"
  "chance"
] @keyword.control

(tick_trigger) @keyword.control

; ── Action keywords ──────────────────────────────────────

[
  "print"
  "set"
  "flag"
  "spawn"
  "reveal"
  "in"
  "open"
  "unlock"
  "sound"
  "playMusic"
  "is"
  "has"
  "exitLocked"
] @keyword.operator

(stop_music_action) @keyword.operator

; ── Operators ────────────────────────────────────────────

[
  "=="
  "!="
  "->"
  "="
] @operator

; ── Punctuation ──────────────────────────────────────────

["{" "}"] @punctuation.bracket
["<" ">"] @punctuation.bracket

; ── Directions ───────────────────────────────────────────

(direction) @constant

; ── Literals ─────────────────────────────────────────────

(string) @string
(number) @number
(boolean) @constant.builtin

; ── Identifiers by context ───────────────────────────────

(game_declaration (identifier) @variable.special)

(room_block id: (identifier) @type)
(object_block id: (identifier) @type)
(rule_block id: (identifier) @function)

(verb_def verb: (identifier) @function.method)
(verb_parameter (identifier) @variable.parameter)
(command_trigger variable: (identifier) @variable.parameter)

(key_value key: (identifier) @property)

(player_start (identifier) @variable)
(player_gives (identifier) @variable)
(contains_prop (identifier) @variable)

(exit_statement target: (identifier) @variable)
(exit_lock key: (identifier) @variable)

(stateful_desc object: (identifier) @variable)

(enter_trigger (identifier) @variable)
(look_trigger (identifier) @variable)
(take_trigger (identifier) @variable)
(use_trigger (identifier) @variable)
(use_on_trigger object: (identifier) @variable)
(use_on_trigger target: (identifier) @variable)
(command_trigger command: (identifier) @function.builtin)

(flag_condition (identifier) @variable)
(in_condition (identifier) @variable)
(is_open_condition (identifier) @variable)
(has_condition (identifier) @variable)
(exit_locked_condition (identifier) @variable)
(value_compare_condition (identifier) @variable)

(open_action (identifier) @variable)
(unlock_exit_action (identifier) @variable)
(spawn_action object: (identifier) @variable)
(spawn_action room: (identifier) @variable)
(reveal_action object: (identifier) @variable)
(reveal_action room: (identifier) @variable)
(sound_action (identifier) @variable)
(play_music_action (identifier) @variable)
(set_flag_action (identifier) @variable)

; ── Comments ─────────────────────────────────────────────

(comment) @comment
