; The whole file is one scope
(source_file) @local.scope

; Room definitions
(room_block
  id: (identifier) @local.definition)

; Object definitions
(object_block
  id: (identifier) @local.definition)

; Rule definitions
(rule_block
  id: (identifier) @local.definition)

; Sound key definitions
(sounds_block
  (key_value
    key: (identifier) @local.definition))

; Music key definitions
(music_block
  (key_value
    key: (identifier) @local.definition))

; Voice key definitions
(voices_block
  (key_value
    key: (identifier) @local.definition))

; Verb definitions
(verb_def
  verb: (identifier) @local.definition)

; Verb parameter definitions
(verb_parameter
  (identifier) @local.definition)

; Command trigger variable definitions
(command_trigger
  variable: (identifier) @local.definition)

; ── References ───────────────────────────────────────────

; Exit targets reference rooms
(exit_statement
  target: (identifier) @local.reference)

; Contains references objects
(contains_prop
  (identifier) @local.reference)

; Player start references room
(player_start
  (identifier) @local.reference)

; Player gives references object
(player_gives
  (identifier) @local.reference)

; Stateful desc references object
(stateful_desc
  object: (identifier) @local.reference)

; Trigger references
(enter_trigger (identifier) @local.reference)
(look_trigger (identifier) @local.reference)
(take_trigger (identifier) @local.reference)
(use_trigger (identifier) @local.reference)
(use_on_trigger object: (identifier) @local.reference)
(use_on_trigger target: (identifier) @local.reference)

; Condition references
(in_condition (identifier) @local.reference)
(is_open_condition (identifier) @local.reference)
(has_condition (identifier) @local.reference)
(exit_locked_condition (identifier) @local.reference)
(flag_condition (identifier) @local.reference)
(value_compare_condition (identifier) @local.reference)

; Action references
(open_action (identifier) @local.reference)
(unlock_exit_action (identifier) @local.reference)
(spawn_action object: (identifier) @local.reference)
(spawn_action room: (identifier) @local.reference)
(reveal_action object: (identifier) @local.reference)
(reveal_action room: (identifier) @local.reference)
(sound_action (identifier) @local.reference)
(play_music_action (identifier) @local.reference)
(set_flag_action (identifier) @local.reference)

; Exit lock key references object
(exit_lock key: (identifier) @local.reference)
