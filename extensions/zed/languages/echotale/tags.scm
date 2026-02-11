; Rooms — autocomplete when referencing room IDs (exit targets, in conditions, spawn)
(room_block
  id: (identifier) @name) @definition.class

; Objects — autocomplete when referencing object IDs (contains, use, take, look, spawn, etc.)
(object_block
  id: (identifier) @name) @definition.class

; Rules — autocomplete rule IDs
(rule_block
  id: (identifier) @name) @definition.function

; Verbs — autocomplete verb names
(verb_def
  verb: (identifier) @name) @definition.method

; Sounds — autocomplete sound keys
(sounds_block
  (key_value
    key: (identifier) @name)) @definition.constant

; Music — autocomplete music keys
(music_block
  (key_value
    key: (identifier) @name)) @definition.constant

; Flags — autocomplete flag names from set flag actions
(set_flag_action
  (identifier) @name) @reference.write

; Flags — autocomplete flag names from flag conditions
(flag_condition
  (identifier) @name) @reference.read
