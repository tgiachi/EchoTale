#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 245
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  anon_sym_game = 1,
  anon_sym_start = 2,
  anon_sym_include = 3,
  anon_sym_author = 4,
  anon_sym_EQ = 5,
  anon_sym_version = 6,
  anon_sym_voices = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_sounds = 10,
  anon_sym_music = 11,
  anon_sym_player = 12,
  anon_sym_gives = 13,
  anon_sym_hp = 14,
  anon_sym_room = 15,
  anon_sym_name = 16,
  anon_sym_desc = 17,
  anon_sym_image = 18,
  anon_sym_ambient = 19,
  anon_sym_contains = 20,
  anon_sym_if = 21,
  anon_sym_isOpen = 22,
  anon_sym_else = 23,
  anon_sym_exit = 24,
  anon_sym_DASH_GT = 25,
  anon_sym_locked = 26,
  anon_sym_key = 27,
  anon_sym_object = 28,
  anon_sym_portable = 29,
  anon_sym_container = 30,
  anon_sym_openable = 31,
  anon_sym_hidden = 32,
  anon_sym_default = 33,
  anon_sym_verbs = 34,
  anon_sym_LT = 35,
  anon_sym_GT = 36,
  anon_sym_rule = 37,
  sym_once_modifier = 38,
  anon_sym_when = 39,
  sym_tick_trigger = 40,
  anon_sym_enter = 41,
  anon_sym_look = 42,
  anon_sym_take = 43,
  anon_sym_use = 44,
  anon_sym_on = 45,
  anon_sym_command = 46,
  anon_sym_chance = 47,
  anon_sym_flag = 48,
  anon_sym_is = 49,
  anon_sym_in = 50,
  anon_sym_has = 51,
  anon_sym_exitLocked = 52,
  anon_sym_EQ_EQ = 53,
  anon_sym_BANG_EQ = 54,
  anon_sym_do = 55,
  anon_sym_print = 56,
  anon_sym_set = 57,
  anon_sym_open = 58,
  anon_sym_unlock = 59,
  anon_sym_spawn = 60,
  anon_sym_reveal = 61,
  anon_sym_sound = 62,
  anon_sym_playMusic = 63,
  sym_stop_music_action = 64,
  anon_sym_north = 65,
  anon_sym_south = 66,
  anon_sym_east = 67,
  anon_sym_west = 68,
  anon_sym_up = 69,
  anon_sym_down = 70,
  sym_identifier = 71,
  anon_sym_DQUOTE = 72,
  aux_sym_string_token1 = 73,
  sym_number = 74,
  anon_sym_true = 75,
  anon_sym_false = 76,
  anon_sym_POUND = 77,
  aux_sym_comment_token1 = 78,
  anon_sym_SLASH_SLASH = 79,
  anon_sym_SLASH_STAR = 80,
  aux_sym_comment_token2 = 81,
  anon_sym_SLASH = 82,
  sym_source_file = 83,
  sym__top_level = 84,
  sym_game_declaration = 85,
  sym_include_statement = 86,
  sym_author_statement = 87,
  sym_version_statement = 88,
  sym_voices_block = 89,
  sym_sounds_block = 90,
  sym_music_block = 91,
  sym_key_value = 92,
  sym_player_block = 93,
  sym__player_prop = 94,
  sym_player_start = 95,
  sym_player_gives = 96,
  sym_player_hp = 97,
  sym_room_block = 98,
  sym__room_prop = 99,
  sym_name_prop = 100,
  sym_desc_prop = 101,
  sym_image_prop = 102,
  sym_ambient_prop = 103,
  sym_contains_prop = 104,
  sym_stateful_desc = 105,
  sym_exit_statement = 106,
  sym_exit_lock = 107,
  sym_object_block = 108,
  sym__object_prop = 109,
  sym_portable_prop = 110,
  sym_container_prop = 111,
  sym_openable_prop = 112,
  sym_locked_prop = 113,
  sym_is_open_prop = 114,
  sym_hidden_prop = 115,
  sym_default_block = 116,
  sym_verbs_block = 117,
  sym_verb_def = 118,
  sym_verb_parameter = 119,
  sym__verb_statement = 120,
  sym_else_branch = 121,
  sym_rule_block = 122,
  sym_when_clause = 123,
  sym__trigger = 124,
  sym_enter_trigger = 125,
  sym_look_trigger = 126,
  sym_take_trigger = 127,
  sym_use_trigger = 128,
  sym_use_on_trigger = 129,
  sym_command_trigger = 130,
  sym_if_clause = 131,
  sym__condition = 132,
  sym_chance_condition = 133,
  sym_flag_condition = 134,
  sym_in_condition = 135,
  sym_is_open_condition = 136,
  sym_has_condition = 137,
  sym_exit_locked_condition = 138,
  sym_value_compare_condition = 139,
  sym_do_clause = 140,
  sym__action = 141,
  sym_print_action = 142,
  sym_set_flag_action = 143,
  sym_open_action = 144,
  sym_unlock_exit_action = 145,
  sym_spawn_action = 146,
  sym_reveal_action = 147,
  sym_sound_action = 148,
  sym_play_music_action = 149,
  sym_direction = 150,
  sym_string = 151,
  sym_boolean = 152,
  sym_comment = 153,
  aux_sym_source_file_repeat1 = 154,
  aux_sym_voices_block_repeat1 = 155,
  aux_sym_player_block_repeat1 = 156,
  aux_sym_room_block_repeat1 = 157,
  aux_sym_object_block_repeat1 = 158,
  aux_sym_default_block_repeat1 = 159,
  aux_sym_verbs_block_repeat1 = 160,
  aux_sym_verb_def_repeat1 = 161,
  aux_sym_rule_block_repeat1 = 162,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_game] = "game",
  [anon_sym_start] = "start",
  [anon_sym_include] = "include",
  [anon_sym_author] = "author",
  [anon_sym_EQ] = "=",
  [anon_sym_version] = "version",
  [anon_sym_voices] = "voices",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_sounds] = "sounds",
  [anon_sym_music] = "music",
  [anon_sym_player] = "player",
  [anon_sym_gives] = "gives",
  [anon_sym_hp] = "hp",
  [anon_sym_room] = "room",
  [anon_sym_name] = "name",
  [anon_sym_desc] = "desc",
  [anon_sym_image] = "image",
  [anon_sym_ambient] = "ambient",
  [anon_sym_contains] = "contains",
  [anon_sym_if] = "if",
  [anon_sym_isOpen] = "isOpen",
  [anon_sym_else] = "else",
  [anon_sym_exit] = "exit",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_locked] = "locked",
  [anon_sym_key] = "key",
  [anon_sym_object] = "object",
  [anon_sym_portable] = "portable",
  [anon_sym_container] = "container",
  [anon_sym_openable] = "openable",
  [anon_sym_hidden] = "hidden",
  [anon_sym_default] = "default",
  [anon_sym_verbs] = "verbs",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_rule] = "rule",
  [sym_once_modifier] = "once_modifier",
  [anon_sym_when] = "when",
  [sym_tick_trigger] = "tick_trigger",
  [anon_sym_enter] = "enter",
  [anon_sym_look] = "look",
  [anon_sym_take] = "take",
  [anon_sym_use] = "use",
  [anon_sym_on] = "on",
  [anon_sym_command] = "command",
  [anon_sym_chance] = "chance",
  [anon_sym_flag] = "flag",
  [anon_sym_is] = "is",
  [anon_sym_in] = "in",
  [anon_sym_has] = "has",
  [anon_sym_exitLocked] = "exitLocked",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_do] = "do",
  [anon_sym_print] = "print",
  [anon_sym_set] = "set",
  [anon_sym_open] = "open",
  [anon_sym_unlock] = "unlock",
  [anon_sym_spawn] = "spawn",
  [anon_sym_reveal] = "reveal",
  [anon_sym_sound] = "sound",
  [anon_sym_playMusic] = "playMusic",
  [sym_stop_music_action] = "stop_music_action",
  [anon_sym_north] = "north",
  [anon_sym_south] = "south",
  [anon_sym_east] = "east",
  [anon_sym_west] = "west",
  [anon_sym_up] = "up",
  [anon_sym_down] = "down",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_game_declaration] = "game_declaration",
  [sym_include_statement] = "include_statement",
  [sym_author_statement] = "author_statement",
  [sym_version_statement] = "version_statement",
  [sym_voices_block] = "voices_block",
  [sym_sounds_block] = "sounds_block",
  [sym_music_block] = "music_block",
  [sym_key_value] = "key_value",
  [sym_player_block] = "player_block",
  [sym__player_prop] = "_player_prop",
  [sym_player_start] = "player_start",
  [sym_player_gives] = "player_gives",
  [sym_player_hp] = "player_hp",
  [sym_room_block] = "room_block",
  [sym__room_prop] = "_room_prop",
  [sym_name_prop] = "name_prop",
  [sym_desc_prop] = "desc_prop",
  [sym_image_prop] = "image_prop",
  [sym_ambient_prop] = "ambient_prop",
  [sym_contains_prop] = "contains_prop",
  [sym_stateful_desc] = "stateful_desc",
  [sym_exit_statement] = "exit_statement",
  [sym_exit_lock] = "exit_lock",
  [sym_object_block] = "object_block",
  [sym__object_prop] = "_object_prop",
  [sym_portable_prop] = "portable_prop",
  [sym_container_prop] = "container_prop",
  [sym_openable_prop] = "openable_prop",
  [sym_locked_prop] = "locked_prop",
  [sym_is_open_prop] = "is_open_prop",
  [sym_hidden_prop] = "hidden_prop",
  [sym_default_block] = "default_block",
  [sym_verbs_block] = "verbs_block",
  [sym_verb_def] = "verb_def",
  [sym_verb_parameter] = "verb_parameter",
  [sym__verb_statement] = "_verb_statement",
  [sym_else_branch] = "else_branch",
  [sym_rule_block] = "rule_block",
  [sym_when_clause] = "when_clause",
  [sym__trigger] = "_trigger",
  [sym_enter_trigger] = "enter_trigger",
  [sym_look_trigger] = "look_trigger",
  [sym_take_trigger] = "take_trigger",
  [sym_use_trigger] = "use_trigger",
  [sym_use_on_trigger] = "use_on_trigger",
  [sym_command_trigger] = "command_trigger",
  [sym_if_clause] = "if_clause",
  [sym__condition] = "_condition",
  [sym_chance_condition] = "chance_condition",
  [sym_flag_condition] = "flag_condition",
  [sym_in_condition] = "in_condition",
  [sym_is_open_condition] = "is_open_condition",
  [sym_has_condition] = "has_condition",
  [sym_exit_locked_condition] = "exit_locked_condition",
  [sym_value_compare_condition] = "value_compare_condition",
  [sym_do_clause] = "do_clause",
  [sym__action] = "_action",
  [sym_print_action] = "print_action",
  [sym_set_flag_action] = "set_flag_action",
  [sym_open_action] = "open_action",
  [sym_unlock_exit_action] = "unlock_exit_action",
  [sym_spawn_action] = "spawn_action",
  [sym_reveal_action] = "reveal_action",
  [sym_sound_action] = "sound_action",
  [sym_play_music_action] = "play_music_action",
  [sym_direction] = "direction",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_voices_block_repeat1] = "voices_block_repeat1",
  [aux_sym_player_block_repeat1] = "player_block_repeat1",
  [aux_sym_room_block_repeat1] = "room_block_repeat1",
  [aux_sym_object_block_repeat1] = "object_block_repeat1",
  [aux_sym_default_block_repeat1] = "default_block_repeat1",
  [aux_sym_verbs_block_repeat1] = "verbs_block_repeat1",
  [aux_sym_verb_def_repeat1] = "verb_def_repeat1",
  [aux_sym_rule_block_repeat1] = "rule_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_version] = anon_sym_version,
  [anon_sym_voices] = anon_sym_voices,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_sounds] = anon_sym_sounds,
  [anon_sym_music] = anon_sym_music,
  [anon_sym_player] = anon_sym_player,
  [anon_sym_gives] = anon_sym_gives,
  [anon_sym_hp] = anon_sym_hp,
  [anon_sym_room] = anon_sym_room,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_ambient] = anon_sym_ambient,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_isOpen] = anon_sym_isOpen,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_locked] = anon_sym_locked,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_portable] = anon_sym_portable,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_openable] = anon_sym_openable,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_verbs] = anon_sym_verbs,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_rule] = anon_sym_rule,
  [sym_once_modifier] = sym_once_modifier,
  [anon_sym_when] = anon_sym_when,
  [sym_tick_trigger] = sym_tick_trigger,
  [anon_sym_enter] = anon_sym_enter,
  [anon_sym_look] = anon_sym_look,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_chance] = anon_sym_chance,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_has] = anon_sym_has,
  [anon_sym_exitLocked] = anon_sym_exitLocked,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_unlock] = anon_sym_unlock,
  [anon_sym_spawn] = anon_sym_spawn,
  [anon_sym_reveal] = anon_sym_reveal,
  [anon_sym_sound] = anon_sym_sound,
  [anon_sym_playMusic] = anon_sym_playMusic,
  [sym_stop_music_action] = sym_stop_music_action,
  [anon_sym_north] = anon_sym_north,
  [anon_sym_south] = anon_sym_south,
  [anon_sym_east] = anon_sym_east,
  [anon_sym_west] = anon_sym_west,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_down] = anon_sym_down,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_game_declaration] = sym_game_declaration,
  [sym_include_statement] = sym_include_statement,
  [sym_author_statement] = sym_author_statement,
  [sym_version_statement] = sym_version_statement,
  [sym_voices_block] = sym_voices_block,
  [sym_sounds_block] = sym_sounds_block,
  [sym_music_block] = sym_music_block,
  [sym_key_value] = sym_key_value,
  [sym_player_block] = sym_player_block,
  [sym__player_prop] = sym__player_prop,
  [sym_player_start] = sym_player_start,
  [sym_player_gives] = sym_player_gives,
  [sym_player_hp] = sym_player_hp,
  [sym_room_block] = sym_room_block,
  [sym__room_prop] = sym__room_prop,
  [sym_name_prop] = sym_name_prop,
  [sym_desc_prop] = sym_desc_prop,
  [sym_image_prop] = sym_image_prop,
  [sym_ambient_prop] = sym_ambient_prop,
  [sym_contains_prop] = sym_contains_prop,
  [sym_stateful_desc] = sym_stateful_desc,
  [sym_exit_statement] = sym_exit_statement,
  [sym_exit_lock] = sym_exit_lock,
  [sym_object_block] = sym_object_block,
  [sym__object_prop] = sym__object_prop,
  [sym_portable_prop] = sym_portable_prop,
  [sym_container_prop] = sym_container_prop,
  [sym_openable_prop] = sym_openable_prop,
  [sym_locked_prop] = sym_locked_prop,
  [sym_is_open_prop] = sym_is_open_prop,
  [sym_hidden_prop] = sym_hidden_prop,
  [sym_default_block] = sym_default_block,
  [sym_verbs_block] = sym_verbs_block,
  [sym_verb_def] = sym_verb_def,
  [sym_verb_parameter] = sym_verb_parameter,
  [sym__verb_statement] = sym__verb_statement,
  [sym_else_branch] = sym_else_branch,
  [sym_rule_block] = sym_rule_block,
  [sym_when_clause] = sym_when_clause,
  [sym__trigger] = sym__trigger,
  [sym_enter_trigger] = sym_enter_trigger,
  [sym_look_trigger] = sym_look_trigger,
  [sym_take_trigger] = sym_take_trigger,
  [sym_use_trigger] = sym_use_trigger,
  [sym_use_on_trigger] = sym_use_on_trigger,
  [sym_command_trigger] = sym_command_trigger,
  [sym_if_clause] = sym_if_clause,
  [sym__condition] = sym__condition,
  [sym_chance_condition] = sym_chance_condition,
  [sym_flag_condition] = sym_flag_condition,
  [sym_in_condition] = sym_in_condition,
  [sym_is_open_condition] = sym_is_open_condition,
  [sym_has_condition] = sym_has_condition,
  [sym_exit_locked_condition] = sym_exit_locked_condition,
  [sym_value_compare_condition] = sym_value_compare_condition,
  [sym_do_clause] = sym_do_clause,
  [sym__action] = sym__action,
  [sym_print_action] = sym_print_action,
  [sym_set_flag_action] = sym_set_flag_action,
  [sym_open_action] = sym_open_action,
  [sym_unlock_exit_action] = sym_unlock_exit_action,
  [sym_spawn_action] = sym_spawn_action,
  [sym_reveal_action] = sym_reveal_action,
  [sym_sound_action] = sym_sound_action,
  [sym_play_music_action] = sym_play_music_action,
  [sym_direction] = sym_direction,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_voices_block_repeat1] = aux_sym_voices_block_repeat1,
  [aux_sym_player_block_repeat1] = aux_sym_player_block_repeat1,
  [aux_sym_room_block_repeat1] = aux_sym_room_block_repeat1,
  [aux_sym_object_block_repeat1] = aux_sym_object_block_repeat1,
  [aux_sym_default_block_repeat1] = aux_sym_default_block_repeat1,
  [aux_sym_verbs_block_repeat1] = aux_sym_verbs_block_repeat1,
  [aux_sym_verb_def_repeat1] = aux_sym_verb_def_repeat1,
  [aux_sym_rule_block_repeat1] = aux_sym_rule_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_game] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_voices] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sounds] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_music] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_player] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gives] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_room] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ambient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isOpen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_locked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_portable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_container] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [sym_once_modifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [sym_tick_trigger] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_look] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_take] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_has] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exitLocked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unlock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spawn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reveal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_playMusic] = {
    .visible = true,
    .named = false,
  },
  [sym_stop_music_action] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_north] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_south] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_east] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_west] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_down] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_game_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_author_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_version_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_voices_block] = {
    .visible = true,
    .named = true,
  },
  [sym_sounds_block] = {
    .visible = true,
    .named = true,
  },
  [sym_music_block] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_player_block] = {
    .visible = true,
    .named = true,
  },
  [sym__player_prop] = {
    .visible = false,
    .named = true,
  },
  [sym_player_start] = {
    .visible = true,
    .named = true,
  },
  [sym_player_gives] = {
    .visible = true,
    .named = true,
  },
  [sym_player_hp] = {
    .visible = true,
    .named = true,
  },
  [sym_room_block] = {
    .visible = true,
    .named = true,
  },
  [sym__room_prop] = {
    .visible = false,
    .named = true,
  },
  [sym_name_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_desc_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_image_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_ambient_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_contains_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_stateful_desc] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_lock] = {
    .visible = true,
    .named = true,
  },
  [sym_object_block] = {
    .visible = true,
    .named = true,
  },
  [sym__object_prop] = {
    .visible = false,
    .named = true,
  },
  [sym_portable_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_container_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_openable_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_locked_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_is_open_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_default_block] = {
    .visible = true,
    .named = true,
  },
  [sym_verbs_block] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_def] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__verb_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_else_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_block] = {
    .visible = true,
    .named = true,
  },
  [sym_when_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__trigger] = {
    .visible = false,
    .named = true,
  },
  [sym_enter_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_look_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_take_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_use_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_use_on_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_command_trigger] = {
    .visible = true,
    .named = true,
  },
  [sym_if_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_chance_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_flag_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_in_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_is_open_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_has_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_locked_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_value_compare_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_do_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_print_action] = {
    .visible = true,
    .named = true,
  },
  [sym_set_flag_action] = {
    .visible = true,
    .named = true,
  },
  [sym_open_action] = {
    .visible = true,
    .named = true,
  },
  [sym_unlock_exit_action] = {
    .visible = true,
    .named = true,
  },
  [sym_spawn_action] = {
    .visible = true,
    .named = true,
  },
  [sym_reveal_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sound_action] = {
    .visible = true,
    .named = true,
  },
  [sym_play_music_action] = {
    .visible = true,
    .named = true,
  },
  [sym_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_voices_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_player_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_room_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_default_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbs_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verb_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_command = 1,
  field_direction = 2,
  field_id = 3,
  field_key = 4,
  field_message = 5,
  field_object = 6,
  field_room = 7,
  field_start_room = 8,
  field_target = 9,
  field_value = 10,
  field_variable = 11,
  field_verb = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_command] = "command",
  [field_direction] = "direction",
  [field_id] = "id",
  [field_key] = "key",
  [field_message] = "message",
  [field_object] = "object",
  [field_room] = "room",
  [field_start_room] = "start_room",
  [field_target] = "target",
  [field_value] = "value",
  [field_variable] = "variable",
  [field_verb] = "verb",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_start_room, 3},
  [1] =
    {field_id, 1},
  [2] =
    {field_key, 0},
    {field_value, 2},
  [4] =
    {field_direction, 1},
    {field_target, 3},
  [6] =
    {field_verb, 0},
  [7] =
    {field_object, 1},
    {field_target, 3},
  [9] =
    {field_command, 1},
    {field_variable, 3},
  [11] =
    {field_object, 1},
    {field_room, 3},
  [13] =
    {field_message, 2},
  [14] =
    {field_key, 3},
  [15] =
    {field_key, 3},
    {field_message, 4},
  [17] =
    {field_object, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 2,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 213,
  [241] = 227,
  [242] = 242,
  [243] = 243,
  [244] = 244,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(227);
      ADVANCE_MAP(
        '!', 8,
        '"', 331,
        '#', 338,
        '-', 10,
        '/', 354,
        '<', 264,
        '=', 233,
        '>', 265,
        'a', 134,
        'c', 103,
        'd', 62,
        'e', 15,
        'f', 16,
        'g', 17,
        'h', 25,
        'i', 98,
        'k', 64,
        'l', 158,
        'm', 210,
        'n', 31,
        'o', 36,
        'p', 126,
        'r', 96,
        's', 79,
        't', 18,
        'u', 148,
        'v', 80,
        'w', 95,
        '{', 236,
        '}', 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 338,
        '/', 5,
        '=', 232,
        'c', 318,
        'e', 329,
        'f', 321,
        'h', 308,
        'i', 322,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 338,
        '/', 5,
        'd', 169,
        'e', 14,
        'i', 186,
        'n', 159,
        'o', 156,
        's', 164,
        'u', 170,
        'w', 94,
        '{', 236,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(350);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(288);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(254);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(217);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(242);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(131);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(132);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 's') ADVANCE(248);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(300);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 117:
      if (lookahead == 'j') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 'k') ADVANCE(271);
      END_STATE();
    case 119:
      if (lookahead == 'k') ADVANCE(269);
      END_STATE();
    case 120:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 121:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 122:
      if (lookahead == 'k') ADVANCE(82);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 134:
      if (lookahead == 'm') ADVANCE(38);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 136:
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 138:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 139:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(261);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(304);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(235);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 192:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(262);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 212:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 213:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 214:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 216:
      if (lookahead == 'u') ADVANCE(192);
      END_STATE();
    case 217:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 219:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 220:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 221:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 225:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 226:
      if (eof) ADVANCE(227);
      ADVANCE_MAP(
        '!', 8,
        '"', 331,
        '#', 338,
        '-', 10,
        '/', 5,
        '=', 9,
        'a', 134,
        'c', 167,
        'd', 63,
        'e', 124,
        'h', 107,
        'i', 99,
        'k', 64,
        'l', 165,
        'm', 210,
        'n', 30,
        'o', 37,
        'p', 129,
        'r', 160,
        's', 162,
        'v', 80,
        '}', 237,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_voices);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_sounds);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_player);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_gives);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_hp);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_room);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_ambient);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_isOpen);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_isOpen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_locked);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_portable);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_openable);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_verbs);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_once_modifier);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_tick_trigger);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_enter);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_look);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_take);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_chance);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_chance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'O') ADVANCE(172);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_has);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_exitLocked);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_unlock);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_spawn);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_reveal);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_sound);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_playMusic);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_stop_music_action);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_north);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_south);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_east);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_west);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 's') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\\') ADVANCE(225);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(351);
      if (lookahead == '/') ADVANCE(347);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(334);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '/') ADVANCE(343);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(352);
      if (lookahead == '/') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(334);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(334);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(344);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(349);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 226},
  [3] = {.lex_state = 226},
  [4] = {.lex_state = 226},
  [5] = {.lex_state = 226},
  [6] = {.lex_state = 226},
  [7] = {.lex_state = 226},
  [8] = {.lex_state = 226},
  [9] = {.lex_state = 226},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 226},
  [12] = {.lex_state = 226},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 226},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 226},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 226},
  [21] = {.lex_state = 226},
  [22] = {.lex_state = 226},
  [23] = {.lex_state = 226},
  [24] = {.lex_state = 226},
  [25] = {.lex_state = 226},
  [26] = {.lex_state = 226},
  [27] = {.lex_state = 226},
  [28] = {.lex_state = 226},
  [29] = {.lex_state = 226},
  [30] = {.lex_state = 226},
  [31] = {.lex_state = 226},
  [32] = {.lex_state = 226},
  [33] = {.lex_state = 226},
  [34] = {.lex_state = 226},
  [35] = {.lex_state = 226},
  [36] = {.lex_state = 226},
  [37] = {.lex_state = 226},
  [38] = {.lex_state = 226},
  [39] = {.lex_state = 226},
  [40] = {.lex_state = 226},
  [41] = {.lex_state = 226},
  [42] = {.lex_state = 226},
  [43] = {.lex_state = 226},
  [44] = {.lex_state = 226},
  [45] = {.lex_state = 226},
  [46] = {.lex_state = 226},
  [47] = {.lex_state = 226},
  [48] = {.lex_state = 226},
  [49] = {.lex_state = 226},
  [50] = {.lex_state = 226},
  [51] = {.lex_state = 226},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 226},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 226},
  [59] = {.lex_state = 226},
  [60] = {.lex_state = 226},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 226},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 226},
  [74] = {.lex_state = 226},
  [75] = {.lex_state = 226},
  [76] = {.lex_state = 226},
  [77] = {.lex_state = 226},
  [78] = {.lex_state = 226},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 226},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 226},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 226},
  [92] = {.lex_state = 226},
  [93] = {.lex_state = 226},
  [94] = {.lex_state = 226},
  [95] = {.lex_state = 226},
  [96] = {.lex_state = 226},
  [97] = {.lex_state = 226},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 226},
  [101] = {.lex_state = 226},
  [102] = {.lex_state = 226},
  [103] = {.lex_state = 226},
  [104] = {.lex_state = 226},
  [105] = {.lex_state = 226},
  [106] = {.lex_state = 226},
  [107] = {.lex_state = 226},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 226},
  [110] = {.lex_state = 226},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 226},
  [114] = {.lex_state = 226},
  [115] = {.lex_state = 226},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 226},
  [118] = {.lex_state = 226},
  [119] = {.lex_state = 226},
  [120] = {.lex_state = 226},
  [121] = {.lex_state = 226},
  [122] = {.lex_state = 226},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 226},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 226},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 226},
  [139] = {.lex_state = 226},
  [140] = {.lex_state = 226},
  [141] = {.lex_state = 226},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 226},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 226},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 226},
  [155] = {.lex_state = 226},
  [156] = {.lex_state = 226},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 226},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 3},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 3},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 226},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 332},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 342},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 332},
  [242] = {.lex_state = 3},
  [243] = {(TSStateId)(-1)},
  [244] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
    [anon_sym_voices] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_music] = ACTIONS(1),
    [anon_sym_player] = ACTIONS(1),
    [anon_sym_gives] = ACTIONS(1),
    [anon_sym_hp] = ACTIONS(1),
    [anon_sym_room] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_ambient] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_isOpen] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_locked] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_portable] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_verbs] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_tick_trigger] = ACTIONS(1),
    [anon_sym_enter] = ACTIONS(1),
    [anon_sym_look] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_chance] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_has] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_unlock] = ACTIONS(1),
    [anon_sym_spawn] = ACTIONS(1),
    [anon_sym_reveal] = ACTIONS(1),
    [anon_sym_sound] = ACTIONS(1),
    [anon_sym_playMusic] = ACTIONS(1),
    [sym_stop_music_action] = ACTIONS(1),
    [anon_sym_north] = ACTIONS(1),
    [anon_sym_south] = ACTIONS(1),
    [anon_sym_east] = ACTIONS(1),
    [anon_sym_west] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_down] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(208),
    [sym_game_declaration] = STATE(8),
    [sym_comment] = STATE(1),
    [anon_sym_game] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 30,
      ts_builtin_sym_end,
      anon_sym_start,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_RBRACE,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_if,
      anon_sym_isOpen,
      anon_sym_else,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_object,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
      anon_sym_rule,
      anon_sym_do,
  [43] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(19), 1,
      anon_sym_isOpen,
    ACTIONS(21), 1,
      anon_sym_locked,
    ACTIONS(23), 1,
      anon_sym_portable,
    ACTIONS(25), 1,
      anon_sym_container,
    ACTIONS(27), 1,
      anon_sym_openable,
    ACTIONS(29), 1,
      anon_sym_hidden,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_verbs,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_object_block_repeat1,
    STATE(21), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(20), 11,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_hidden_prop,
      sym_default_block,
      sym_verbs_block,
  [109] = 18,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(19), 1,
      anon_sym_isOpen,
    ACTIONS(21), 1,
      anon_sym_locked,
    ACTIONS(23), 1,
      anon_sym_portable,
    ACTIONS(25), 1,
      anon_sym_container,
    ACTIONS(27), 1,
      anon_sym_openable,
    ACTIONS(29), 1,
      anon_sym_hidden,
    ACTIONS(31), 1,
      anon_sym_default,
    ACTIONS(33), 1,
      anon_sym_verbs,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_object_block_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(21), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(20), 11,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_hidden_prop,
      sym_default_block,
      sym_verbs_block,
  [175] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_name,
    ACTIONS(42), 1,
      anon_sym_desc,
    ACTIONS(45), 1,
      anon_sym_contains,
    ACTIONS(48), 1,
      anon_sym_isOpen,
    ACTIONS(51), 1,
      anon_sym_locked,
    ACTIONS(54), 1,
      anon_sym_portable,
    ACTIONS(57), 1,
      anon_sym_container,
    ACTIONS(60), 1,
      anon_sym_openable,
    ACTIONS(63), 1,
      anon_sym_hidden,
    ACTIONS(66), 1,
      anon_sym_default,
    ACTIONS(69), 1,
      anon_sym_verbs,
    STATE(21), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(5), 2,
      sym_comment,
      aux_sym_object_block_repeat1,
    STATE(20), 11,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_hidden_prop,
      sym_default_block,
      sym_verbs_block,
  [239] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_include,
    ACTIONS(76), 1,
      anon_sym_author,
    ACTIONS(78), 1,
      anon_sym_version,
    ACTIONS(80), 1,
      anon_sym_voices,
    ACTIONS(82), 1,
      anon_sym_sounds,
    ACTIONS(84), 1,
      anon_sym_music,
    ACTIONS(86), 1,
      anon_sym_player,
    ACTIONS(88), 1,
      anon_sym_room,
    ACTIONS(90), 1,
      anon_sym_object,
    ACTIONS(92), 1,
      anon_sym_rule,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(38), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(34), 10,
      sym_include_statement,
      sym_author_statement,
      sym_version_statement,
      sym_voices_block,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [301] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(99), 1,
      anon_sym_author,
    ACTIONS(102), 1,
      anon_sym_version,
    ACTIONS(105), 1,
      anon_sym_voices,
    ACTIONS(108), 1,
      anon_sym_sounds,
    ACTIONS(111), 1,
      anon_sym_music,
    ACTIONS(114), 1,
      anon_sym_player,
    ACTIONS(117), 1,
      anon_sym_room,
    ACTIONS(120), 1,
      anon_sym_object,
    ACTIONS(123), 1,
      anon_sym_rule,
    STATE(38), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(7), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(34), 10,
      sym_include_statement,
      sym_author_statement,
      sym_version_statement,
      sym_voices_block,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [361] = 17,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      anon_sym_include,
    ACTIONS(76), 1,
      anon_sym_author,
    ACTIONS(78), 1,
      anon_sym_version,
    ACTIONS(80), 1,
      anon_sym_voices,
    ACTIONS(82), 1,
      anon_sym_sounds,
    ACTIONS(84), 1,
      anon_sym_music,
    ACTIONS(86), 1,
      anon_sym_player,
    ACTIONS(88), 1,
      anon_sym_room,
    ACTIONS(90), 1,
      anon_sym_object,
    ACTIONS(92), 1,
      anon_sym_rule,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(38), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(34), 10,
      sym_include_statement,
      sym_author_statement,
      sym_version_statement,
      sym_voices_block,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [423] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 20,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_if,
      anon_sym_isOpen,
      anon_sym_else,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_key,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
      anon_sym_do,
      anon_sym_DQUOTE,
  [456] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      anon_sym_print,
    ACTIONS(132), 1,
      anon_sym_set,
    ACTIONS(134), 1,
      anon_sym_open,
    ACTIONS(136), 1,
      anon_sym_unlock,
    ACTIONS(138), 1,
      anon_sym_spawn,
    ACTIONS(140), 1,
      anon_sym_reveal,
    ACTIONS(142), 1,
      anon_sym_sound,
    ACTIONS(144), 1,
      anon_sym_playMusic,
    ACTIONS(146), 1,
      sym_stop_music_action,
    STATE(10), 1,
      sym_comment,
    STATE(94), 1,
      sym__action,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(93), 8,
      sym_print_action,
      sym_set_flag_action,
      sym_open_action,
      sym_unlock_exit_action,
      sym_spawn_action,
      sym_reveal_action,
      sym_sound_action,
      sym_play_music_action,
  [507] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [535] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [563] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_image,
    ACTIONS(156), 1,
      anon_sym_ambient,
    ACTIONS(158), 1,
      anon_sym_exit,
    STATE(13), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_room_block_repeat1,
    STATE(66), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(63), 6,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_ambient_prop,
      sym_contains_prop,
      sym_exit_statement,
  [609] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(154), 1,
      anon_sym_image,
    ACTIONS(156), 1,
      anon_sym_ambient,
    ACTIONS(158), 1,
      anon_sym_exit,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_room_block_repeat1,
    STATE(66), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(63), 6,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_ambient_prop,
      sym_contains_prop,
      sym_exit_statement,
  [655] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [683] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 1,
      anon_sym_name,
    ACTIONS(169), 1,
      anon_sym_desc,
    ACTIONS(172), 1,
      anon_sym_image,
    ACTIONS(175), 1,
      anon_sym_ambient,
    ACTIONS(178), 1,
      anon_sym_contains,
    ACTIONS(181), 1,
      anon_sym_exit,
    STATE(66), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(16), 2,
      sym_comment,
      aux_sym_room_block_repeat1,
    STATE(63), 6,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_ambient_prop,
      sym_contains_prop,
      sym_exit_statement,
  [727] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 15,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [755] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(186), 1,
      anon_sym_isOpen,
    ACTIONS(188), 1,
      anon_sym_chance,
    ACTIONS(190), 1,
      anon_sym_flag,
    ACTIONS(192), 1,
      anon_sym_in,
    ACTIONS(194), 1,
      anon_sym_has,
    ACTIONS(196), 1,
      anon_sym_exitLocked,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(18), 1,
      sym_comment,
    STATE(91), 1,
      sym__condition,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(92), 7,
      sym_chance_condition,
      sym_flag_condition,
      sym_in_condition,
      sym_is_open_condition,
      sym_has_condition,
      sym_exit_locked_condition,
      sym_value_compare_condition,
  [799] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(200), 1,
      sym_tick_trigger,
    ACTIONS(202), 1,
      anon_sym_enter,
    ACTIONS(204), 1,
      anon_sym_look,
    ACTIONS(206), 1,
      anon_sym_take,
    ACTIONS(208), 1,
      anon_sym_use,
    ACTIONS(210), 1,
      anon_sym_command,
    STATE(19), 1,
      sym_comment,
    STATE(152), 1,
      sym__trigger,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(148), 6,
      sym_enter_trigger,
      sym_look_trigger,
      sym_take_trigger,
      sym_use_trigger,
      sym_use_on_trigger,
      sym_command_trigger,
  [839] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [864] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [889] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [914] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [939] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [964] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [989] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [1014] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [1039] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [1064] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [1089] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(30), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_isOpen,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_hidden,
      anon_sym_default,
      anon_sym_verbs,
  [1114] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1162] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(238), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1186] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1210] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(242), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1234] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1258] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1282] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(248), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1306] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(250), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1330] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1354] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(254), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1402] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(258), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1426] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(260), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1450] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(262), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1474] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(264), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1498] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(266), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1522] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(268), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1546] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(270), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1570] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(272), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1594] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 11,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_author,
      anon_sym_version,
      anon_sym_voices,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1618] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      anon_sym_key,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_comment,
    STATE(71), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [1647] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(282), 1,
      anon_sym_start,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      anon_sym_gives,
    ACTIONS(290), 1,
      anon_sym_hp,
    STATE(86), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(53), 2,
      sym_comment,
      aux_sym_player_block_repeat1,
    STATE(88), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [1679] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(295), 1,
      anon_sym_locked,
    STATE(54), 1,
      sym_comment,
    STATE(72), 1,
      sym_exit_lock,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [1705] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(301), 1,
      anon_sym_else,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(55), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_verb_def_repeat1,
    STATE(109), 1,
      sym__verb_statement,
    STATE(199), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(110), 2,
      sym_if_clause,
      sym_do_clause,
  [1741] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_start,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      anon_sym_gives,
    ACTIONS(311), 1,
      anon_sym_hp,
    STATE(53), 1,
      aux_sym_player_block_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(86), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(88), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [1775] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_start,
    ACTIONS(309), 1,
      anon_sym_gives,
    ACTIONS(311), 1,
      anon_sym_hp,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      aux_sym_player_block_repeat1,
    STATE(57), 1,
      sym_comment,
    STATE(86), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(88), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [1809] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(301), 1,
      anon_sym_else,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_verb_def_repeat1,
    STATE(109), 1,
      sym__verb_statement,
    STATE(218), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(110), 2,
      sym_if_clause,
      sym_do_clause,
  [1845] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(301), 1,
      anon_sym_else,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_verb_def_repeat1,
    STATE(109), 1,
      sym__verb_statement,
    STATE(218), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(110), 2,
      sym_if_clause,
      sym_do_clause,
  [1881] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(301), 1,
      anon_sym_else,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_verb_def_repeat1,
    STATE(109), 1,
      sym__verb_statement,
    STATE(232), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(110), 2,
      sym_if_clause,
      sym_do_clause,
  [1917] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym_comment,
    STATE(70), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(319), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [1943] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_if,
    ACTIONS(326), 1,
      anon_sym_do,
    STATE(109), 1,
      sym__verb_statement,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(321), 2,
      anon_sym_RBRACE,
      anon_sym_else,
    STATE(62), 2,
      sym_comment,
      aux_sym_verb_def_repeat1,
    STATE(110), 2,
      sym_if_clause,
      sym_do_clause,
  [1972] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(329), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [1992] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    STATE(215), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2014] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(333), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2034] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2054] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    STATE(78), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2076] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(68), 1,
      sym_comment,
    STATE(119), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(331), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [2098] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(69), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(337), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2118] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(70), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2138] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(71), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(341), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2158] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(72), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 7,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_ambient,
      anon_sym_contains,
      anon_sym_exit,
  [2178] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(73), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_default_block_repeat1,
    STATE(97), 1,
      aux_sym_rule_block_repeat1,
    STATE(154), 1,
      sym_if_clause,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2207] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(74), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_rule_block_repeat1,
    STATE(107), 1,
      aux_sym_default_block_repeat1,
    STATE(154), 1,
      sym_if_clause,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2236] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(74), 1,
      aux_sym_rule_block_repeat1,
    STATE(75), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_default_block_repeat1,
    STATE(154), 1,
      sym_if_clause,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2265] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_if,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(73), 1,
      aux_sym_rule_block_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym_default_block_repeat1,
    STATE(154), 1,
      sym_if_clause,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2294] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(345), 5,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_DASH_GT,
      anon_sym_do,
  [2312] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2329] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(79), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2352] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2375] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2398] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2421] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2444] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym_voices_block_repeat1,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2467] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(365), 1,
      sym_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym_verbs_block_repeat1,
    STATE(164), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2490] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2507] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_default_block_repeat1,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2530] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2547] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_default_block_repeat1,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2570] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_verbs_block_repeat1,
    STATE(164), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2593] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(377), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2610] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2627] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2644] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2661] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(387), 1,
      anon_sym_do,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(95), 2,
      sym_comment,
      aux_sym_default_block_repeat1,
  [2682] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_default_block_repeat1,
    STATE(96), 1,
      sym_comment,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2705] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(392), 1,
      anon_sym_if,
    ACTIONS(395), 1,
      anon_sym_do,
    STATE(154), 1,
      sym_if_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(97), 2,
      sym_comment,
      aux_sym_rule_block_repeat1,
  [2726] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(397), 1,
      anon_sym_RBRACE,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(144), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(98), 2,
      sym_comment,
      aux_sym_voices_block_repeat1,
  [2747] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      sym_identifier,
    STATE(164), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(99), 2,
      sym_comment,
      aux_sym_verbs_block_repeat1,
  [2768] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(100), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2785] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2802] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2819] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2836] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2853] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(105), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(417), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2870] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(106), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2887] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_default_block_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2910] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(108), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(423), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2927] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(109), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(425), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(110), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(427), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [2961] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(111), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(429), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2978] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(112), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3012] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(114), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3029] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_default_block_repeat1,
    STATE(115), 1,
      sym_comment,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3052] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(11), 2,
      sym_stateful_desc,
      sym_string,
  [3073] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(441), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3107] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(119), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3124] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(120), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(447), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3141] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 4,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_else,
      anon_sym_do,
  [3158] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(115), 1,
      aux_sym_default_block_repeat1,
    STATE(122), 1,
      sym_comment,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3178] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(113), 1,
      sym_boolean,
    STATE(123), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3196] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(303), 1,
      anon_sym_do,
    STATE(89), 1,
      aux_sym_default_block_repeat1,
    STATE(124), 1,
      sym_comment,
    STATE(156), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3216] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_boolean,
    STATE(125), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3234] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_boolean,
    STATE(126), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3252] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_boolean,
    STATE(127), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3270] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_boolean,
    STATE(128), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3288] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_boolean,
    STATE(129), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3306] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_boolean,
    STATE(130), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3324] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_boolean,
    STATE(131), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3342] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      anon_sym_LT,
    STATE(132), 1,
      sym_comment,
    STATE(172), 1,
      sym_verb_parameter,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3362] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_boolean,
    STATE(133), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3380] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(134), 1,
      sym_comment,
    STATE(159), 1,
      sym_boolean,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3398] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_boolean,
    STATE(135), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(451), 2,
      anon_sym_true,
      anon_sym_false,
  [3416] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      anon_sym_on,
    STATE(136), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 2,
      anon_sym_if,
      anon_sym_do,
  [3434] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_string,
    STATE(137), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3451] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(138), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 2,
      anon_sym_if,
      anon_sym_do,
  [3466] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(463), 2,
      anon_sym_if,
      anon_sym_do,
  [3481] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(140), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 2,
      anon_sym_if,
      anon_sym_do,
  [3496] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(467), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3511] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_string,
    STATE(142), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3528] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      sym_string,
    STATE(143), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3545] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(144), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3560] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      anon_sym_when,
    STATE(76), 1,
      sym_when_clause,
    STATE(145), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3577] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      sym_comment,
    STATE(157), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3594] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_string,
    STATE(147), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3611] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(148), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(475), 2,
      anon_sym_if,
      anon_sym_do,
  [3626] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(149), 1,
      sym_comment,
    STATE(191), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3643] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_string,
    STATE(150), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(151), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(152), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(479), 2,
      anon_sym_if,
      anon_sym_do,
  [3690] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      anon_sym_when,
    STATE(75), 1,
      sym_when_clause,
    STATE(153), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3707] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(154), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 2,
      anon_sym_if,
      anon_sym_do,
  [3722] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(155), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 2,
      anon_sym_if,
      anon_sym_do,
  [3737] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(156), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(485), 2,
      anon_sym_RBRACE,
      anon_sym_do,
  [3752] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(157), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(491), 1,
      sym_once_modifier,
    STATE(158), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3784] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      sym_comment,
    STATE(228), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3801] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_string,
    STATE(160), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(161), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3833] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_string,
    STATE(162), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3850] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(163), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 2,
      anon_sym_if,
      anon_sym_do,
  [3865] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(164), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3880] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      sym_string,
    STATE(165), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(166), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3912] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_comment,
    STATE(236), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3929] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(168), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3944] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(169), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3959] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      sym_identifier,
    STATE(170), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3973] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(171), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3987] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    STATE(172), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4001] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4015] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4029] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(175), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4043] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(176), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4057] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4071] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      anon_sym_is,
    STATE(178), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4085] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(521), 1,
      sym_identifier,
    STATE(179), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4099] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4113] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      aux_sym_comment_token2,
    STATE(181), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4127] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(182), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4141] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4155] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(184), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4169] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4183] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(186), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4197] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      anon_sym_in,
    STATE(187), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4211] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_in,
    STATE(188), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4225] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(189), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4239] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(190), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4253] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      anon_sym_start,
    STATE(191), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4267] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      anon_sym_LT,
    STATE(192), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4281] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      sym_identifier,
    STATE(193), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4295] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      sym_identifier,
    STATE(194), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4309] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(195), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4323] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(559), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4337] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(561), 1,
      sym_identifier,
    STATE(197), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4351] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(198), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4365] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4379] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(565), 1,
      sym_number,
    STATE(200), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4393] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(567), 1,
      anon_sym_flag,
    STATE(201), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4407] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(569), 1,
      anon_sym_GT,
    STATE(202), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4421] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(203), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4435] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(573), 1,
      anon_sym_exit,
    STATE(204), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4449] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(575), 1,
      anon_sym_GT,
    STATE(205), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4463] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(206), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4477] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(207), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4491] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4505] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(583), 1,
      sym_identifier,
    STATE(209), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4519] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4533] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(587), 1,
      sym_identifier,
    STATE(211), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4547] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(589), 1,
      sym_identifier,
    STATE(212), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4561] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(591), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4575] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(593), 1,
      sym_identifier,
    STATE(214), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4589] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(595), 1,
      anon_sym_DASH_GT,
    STATE(215), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4603] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(597), 1,
      anon_sym_isOpen,
    STATE(216), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4617] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(599), 1,
      anon_sym_EQ,
    STATE(217), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4631] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4645] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(601), 1,
      sym_identifier,
    STATE(219), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4659] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(220), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4673] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(605), 1,
      sym_identifier,
    STATE(221), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4687] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(607), 1,
      anon_sym_EQ,
    STATE(222), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4701] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(609), 1,
      anon_sym_if,
    STATE(223), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(611), 1,
      sym_identifier,
    STATE(224), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4729] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_SLASH,
    STATE(225), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4743] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_number,
    STATE(226), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4757] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(617), 1,
      aux_sym_string_token1,
    STATE(227), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4771] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(619), 1,
      anon_sym_else,
    STATE(228), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4785] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(621), 1,
      sym_identifier,
    STATE(229), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4799] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4813] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(231), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4827] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4841] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(233), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(234), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(633), 1,
      anon_sym_LBRACE,
    STATE(235), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4883] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4897] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(637), 1,
      sym_identifier,
    STATE(237), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4911] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(639), 1,
      aux_sym_comment_token1,
    STATE(238), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4925] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(239), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4939] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(643), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4953] = 4,
    ACTIONS(525), 1,
      anon_sym_POUND,
    ACTIONS(645), 1,
      aux_sym_string_token1,
    STATE(241), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4967] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(647), 1,
      sym_identifier,
    STATE(242), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4981] = 1,
    ACTIONS(649), 1,
      ts_builtin_sym_end,
  [4985] = 1,
    ACTIONS(651), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 109,
  [SMALL_STATE(5)] = 175,
  [SMALL_STATE(6)] = 239,
  [SMALL_STATE(7)] = 301,
  [SMALL_STATE(8)] = 361,
  [SMALL_STATE(9)] = 423,
  [SMALL_STATE(10)] = 456,
  [SMALL_STATE(11)] = 507,
  [SMALL_STATE(12)] = 535,
  [SMALL_STATE(13)] = 563,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 655,
  [SMALL_STATE(16)] = 683,
  [SMALL_STATE(17)] = 727,
  [SMALL_STATE(18)] = 755,
  [SMALL_STATE(19)] = 799,
  [SMALL_STATE(20)] = 839,
  [SMALL_STATE(21)] = 864,
  [SMALL_STATE(22)] = 889,
  [SMALL_STATE(23)] = 914,
  [SMALL_STATE(24)] = 939,
  [SMALL_STATE(25)] = 964,
  [SMALL_STATE(26)] = 989,
  [SMALL_STATE(27)] = 1014,
  [SMALL_STATE(28)] = 1039,
  [SMALL_STATE(29)] = 1064,
  [SMALL_STATE(30)] = 1089,
  [SMALL_STATE(31)] = 1114,
  [SMALL_STATE(32)] = 1138,
  [SMALL_STATE(33)] = 1162,
  [SMALL_STATE(34)] = 1186,
  [SMALL_STATE(35)] = 1210,
  [SMALL_STATE(36)] = 1234,
  [SMALL_STATE(37)] = 1258,
  [SMALL_STATE(38)] = 1282,
  [SMALL_STATE(39)] = 1306,
  [SMALL_STATE(40)] = 1330,
  [SMALL_STATE(41)] = 1354,
  [SMALL_STATE(42)] = 1378,
  [SMALL_STATE(43)] = 1402,
  [SMALL_STATE(44)] = 1426,
  [SMALL_STATE(45)] = 1450,
  [SMALL_STATE(46)] = 1474,
  [SMALL_STATE(47)] = 1498,
  [SMALL_STATE(48)] = 1522,
  [SMALL_STATE(49)] = 1546,
  [SMALL_STATE(50)] = 1570,
  [SMALL_STATE(51)] = 1594,
  [SMALL_STATE(52)] = 1618,
  [SMALL_STATE(53)] = 1647,
  [SMALL_STATE(54)] = 1679,
  [SMALL_STATE(55)] = 1705,
  [SMALL_STATE(56)] = 1741,
  [SMALL_STATE(57)] = 1775,
  [SMALL_STATE(58)] = 1809,
  [SMALL_STATE(59)] = 1845,
  [SMALL_STATE(60)] = 1881,
  [SMALL_STATE(61)] = 1917,
  [SMALL_STATE(62)] = 1943,
  [SMALL_STATE(63)] = 1972,
  [SMALL_STATE(64)] = 1992,
  [SMALL_STATE(65)] = 2014,
  [SMALL_STATE(66)] = 2034,
  [SMALL_STATE(67)] = 2054,
  [SMALL_STATE(68)] = 2076,
  [SMALL_STATE(69)] = 2098,
  [SMALL_STATE(70)] = 2118,
  [SMALL_STATE(71)] = 2138,
  [SMALL_STATE(72)] = 2158,
  [SMALL_STATE(73)] = 2178,
  [SMALL_STATE(74)] = 2207,
  [SMALL_STATE(75)] = 2236,
  [SMALL_STATE(76)] = 2265,
  [SMALL_STATE(77)] = 2294,
  [SMALL_STATE(78)] = 2312,
  [SMALL_STATE(79)] = 2329,
  [SMALL_STATE(80)] = 2352,
  [SMALL_STATE(81)] = 2375,
  [SMALL_STATE(82)] = 2398,
  [SMALL_STATE(83)] = 2421,
  [SMALL_STATE(84)] = 2444,
  [SMALL_STATE(85)] = 2467,
  [SMALL_STATE(86)] = 2490,
  [SMALL_STATE(87)] = 2507,
  [SMALL_STATE(88)] = 2530,
  [SMALL_STATE(89)] = 2547,
  [SMALL_STATE(90)] = 2570,
  [SMALL_STATE(91)] = 2593,
  [SMALL_STATE(92)] = 2610,
  [SMALL_STATE(93)] = 2627,
  [SMALL_STATE(94)] = 2644,
  [SMALL_STATE(95)] = 2661,
  [SMALL_STATE(96)] = 2682,
  [SMALL_STATE(97)] = 2705,
  [SMALL_STATE(98)] = 2726,
  [SMALL_STATE(99)] = 2747,
  [SMALL_STATE(100)] = 2768,
  [SMALL_STATE(101)] = 2785,
  [SMALL_STATE(102)] = 2802,
  [SMALL_STATE(103)] = 2819,
  [SMALL_STATE(104)] = 2836,
  [SMALL_STATE(105)] = 2853,
  [SMALL_STATE(106)] = 2870,
  [SMALL_STATE(107)] = 2887,
  [SMALL_STATE(108)] = 2910,
  [SMALL_STATE(109)] = 2927,
  [SMALL_STATE(110)] = 2944,
  [SMALL_STATE(111)] = 2961,
  [SMALL_STATE(112)] = 2978,
  [SMALL_STATE(113)] = 2995,
  [SMALL_STATE(114)] = 3012,
  [SMALL_STATE(115)] = 3029,
  [SMALL_STATE(116)] = 3052,
  [SMALL_STATE(117)] = 3073,
  [SMALL_STATE(118)] = 3090,
  [SMALL_STATE(119)] = 3107,
  [SMALL_STATE(120)] = 3124,
  [SMALL_STATE(121)] = 3141,
  [SMALL_STATE(122)] = 3158,
  [SMALL_STATE(123)] = 3178,
  [SMALL_STATE(124)] = 3196,
  [SMALL_STATE(125)] = 3216,
  [SMALL_STATE(126)] = 3234,
  [SMALL_STATE(127)] = 3252,
  [SMALL_STATE(128)] = 3270,
  [SMALL_STATE(129)] = 3288,
  [SMALL_STATE(130)] = 3306,
  [SMALL_STATE(131)] = 3324,
  [SMALL_STATE(132)] = 3342,
  [SMALL_STATE(133)] = 3362,
  [SMALL_STATE(134)] = 3380,
  [SMALL_STATE(135)] = 3398,
  [SMALL_STATE(136)] = 3416,
  [SMALL_STATE(137)] = 3434,
  [SMALL_STATE(138)] = 3451,
  [SMALL_STATE(139)] = 3466,
  [SMALL_STATE(140)] = 3481,
  [SMALL_STATE(141)] = 3496,
  [SMALL_STATE(142)] = 3511,
  [SMALL_STATE(143)] = 3528,
  [SMALL_STATE(144)] = 3545,
  [SMALL_STATE(145)] = 3560,
  [SMALL_STATE(146)] = 3577,
  [SMALL_STATE(147)] = 3594,
  [SMALL_STATE(148)] = 3611,
  [SMALL_STATE(149)] = 3626,
  [SMALL_STATE(150)] = 3643,
  [SMALL_STATE(151)] = 3660,
  [SMALL_STATE(152)] = 3675,
  [SMALL_STATE(153)] = 3690,
  [SMALL_STATE(154)] = 3707,
  [SMALL_STATE(155)] = 3722,
  [SMALL_STATE(156)] = 3737,
  [SMALL_STATE(157)] = 3752,
  [SMALL_STATE(158)] = 3767,
  [SMALL_STATE(159)] = 3784,
  [SMALL_STATE(160)] = 3801,
  [SMALL_STATE(161)] = 3818,
  [SMALL_STATE(162)] = 3833,
  [SMALL_STATE(163)] = 3850,
  [SMALL_STATE(164)] = 3865,
  [SMALL_STATE(165)] = 3880,
  [SMALL_STATE(166)] = 3897,
  [SMALL_STATE(167)] = 3912,
  [SMALL_STATE(168)] = 3929,
  [SMALL_STATE(169)] = 3944,
  [SMALL_STATE(170)] = 3959,
  [SMALL_STATE(171)] = 3973,
  [SMALL_STATE(172)] = 3987,
  [SMALL_STATE(173)] = 4001,
  [SMALL_STATE(174)] = 4015,
  [SMALL_STATE(175)] = 4029,
  [SMALL_STATE(176)] = 4043,
  [SMALL_STATE(177)] = 4057,
  [SMALL_STATE(178)] = 4071,
  [SMALL_STATE(179)] = 4085,
  [SMALL_STATE(180)] = 4099,
  [SMALL_STATE(181)] = 4113,
  [SMALL_STATE(182)] = 4127,
  [SMALL_STATE(183)] = 4141,
  [SMALL_STATE(184)] = 4155,
  [SMALL_STATE(185)] = 4169,
  [SMALL_STATE(186)] = 4183,
  [SMALL_STATE(187)] = 4197,
  [SMALL_STATE(188)] = 4211,
  [SMALL_STATE(189)] = 4225,
  [SMALL_STATE(190)] = 4239,
  [SMALL_STATE(191)] = 4253,
  [SMALL_STATE(192)] = 4267,
  [SMALL_STATE(193)] = 4281,
  [SMALL_STATE(194)] = 4295,
  [SMALL_STATE(195)] = 4309,
  [SMALL_STATE(196)] = 4323,
  [SMALL_STATE(197)] = 4337,
  [SMALL_STATE(198)] = 4351,
  [SMALL_STATE(199)] = 4365,
  [SMALL_STATE(200)] = 4379,
  [SMALL_STATE(201)] = 4393,
  [SMALL_STATE(202)] = 4407,
  [SMALL_STATE(203)] = 4421,
  [SMALL_STATE(204)] = 4435,
  [SMALL_STATE(205)] = 4449,
  [SMALL_STATE(206)] = 4463,
  [SMALL_STATE(207)] = 4477,
  [SMALL_STATE(208)] = 4491,
  [SMALL_STATE(209)] = 4505,
  [SMALL_STATE(210)] = 4519,
  [SMALL_STATE(211)] = 4533,
  [SMALL_STATE(212)] = 4547,
  [SMALL_STATE(213)] = 4561,
  [SMALL_STATE(214)] = 4575,
  [SMALL_STATE(215)] = 4589,
  [SMALL_STATE(216)] = 4603,
  [SMALL_STATE(217)] = 4617,
  [SMALL_STATE(218)] = 4631,
  [SMALL_STATE(219)] = 4645,
  [SMALL_STATE(220)] = 4659,
  [SMALL_STATE(221)] = 4673,
  [SMALL_STATE(222)] = 4687,
  [SMALL_STATE(223)] = 4701,
  [SMALL_STATE(224)] = 4715,
  [SMALL_STATE(225)] = 4729,
  [SMALL_STATE(226)] = 4743,
  [SMALL_STATE(227)] = 4757,
  [SMALL_STATE(228)] = 4771,
  [SMALL_STATE(229)] = 4785,
  [SMALL_STATE(230)] = 4799,
  [SMALL_STATE(231)] = 4813,
  [SMALL_STATE(232)] = 4827,
  [SMALL_STATE(233)] = 4841,
  [SMALL_STATE(234)] = 4855,
  [SMALL_STATE(235)] = 4869,
  [SMALL_STATE(236)] = 4883,
  [SMALL_STATE(237)] = 4897,
  [SMALL_STATE(238)] = 4911,
  [SMALL_STATE(239)] = 4925,
  [SMALL_STATE(240)] = 4939,
  [SMALL_STATE(241)] = 4953,
  [SMALL_STATE(242)] = 4967,
  [SMALL_STATE(243)] = 4981,
  [SMALL_STATE(244)] = 4985,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(196),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(217),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(210),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(221),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(209),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_prop, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stateful_desc, 9, 0, 12),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_prop, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(160),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_prop, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_prop, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_open_prop, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portable_prop, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_prop, 2, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locked_prop, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openable_prop, 2, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_prop, 2, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbs_block, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_block, 4, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbs_block, 4, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voices_block, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voices_block, 4, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sounds_block, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_room_block, 5, 0, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_block, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_block, 4, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_room_block, 4, 0, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 5, 0, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_declaration, 4, 0, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_block, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author_statement, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 4, 0, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 6, 0, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_block, 3, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 7, 0, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_statement, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 8, 0, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sounds_block, 3, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 2, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 4, 0, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 4, 0, 10),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__room_prop, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_prop, 2, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ambient_prop, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 5, 0, 11),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 3, 0, 9),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 5, 0, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_locked_condition, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__player_prop, 1, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_clause, 2, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_default_block_repeat1, 2, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_default_block_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_voices_block_repeat1, 2, 0, 0),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_voices_block_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 2, 0, 0),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chance_condition, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_condition, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_condition, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_action, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_action, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_action, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_music_action, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_start, 2, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_statement, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_gives, 2, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_hp, 2, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_open_condition, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_compare_condition, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_branch, 2, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_condition, 4, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flag_action, 4, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlock_exit_action, 4, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_action, 4, 0, 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reveal_action, 4, 0, 8),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_trigger, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter_trigger, 2, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_look_trigger, 2, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_take_trigger, 2, 0, 0),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_voices_block_repeat1, 1, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigger, 1, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 3, 0, 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_clause, 2, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_on_trigger, 4, 0, 6),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_default_block_repeat1, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 4, 0, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_trigger, 5, 0, 7),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 1, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 5, 0, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 6, 0, 5),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [581] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_parameter, 3, 0, 0),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_echotale(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
