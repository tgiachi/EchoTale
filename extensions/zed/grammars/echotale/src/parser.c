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
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 0
#define TOKEN_COUNT 75
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_game = 1,
  anon_sym_start = 2,
  anon_sym_include = 3,
  anon_sym_sounds = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_music = 7,
  anon_sym_EQ = 8,
  anon_sym_player = 9,
  anon_sym_gives = 10,
  anon_sym_hp = 11,
  anon_sym_room = 12,
  anon_sym_name = 13,
  anon_sym_desc = 14,
  anon_sym_image = 15,
  anon_sym_contains = 16,
  anon_sym_exit = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_locked = 19,
  anon_sym_key = 20,
  anon_sym_object = 21,
  anon_sym_portable = 22,
  anon_sym_container = 23,
  anon_sym_openable = 24,
  anon_sym_isOpen = 25,
  anon_sym_verbs = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_else = 29,
  anon_sym_rule = 30,
  anon_sym_when = 31,
  sym_tick_trigger = 32,
  anon_sym_enter = 33,
  anon_sym_look = 34,
  anon_sym_take = 35,
  anon_sym_use = 36,
  anon_sym_on = 37,
  anon_sym_command = 38,
  anon_sym_if = 39,
  anon_sym_chance = 40,
  anon_sym_flag = 41,
  anon_sym_is = 42,
  anon_sym_in = 43,
  anon_sym_has = 44,
  anon_sym_exitLocked = 45,
  anon_sym_EQ_EQ = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_do = 48,
  anon_sym_print = 49,
  anon_sym_set = 50,
  anon_sym_open = 51,
  anon_sym_unlock = 52,
  anon_sym_spawn = 53,
  anon_sym_sound = 54,
  anon_sym_playMusic = 55,
  sym_stop_music_action = 56,
  anon_sym_north = 57,
  anon_sym_south = 58,
  anon_sym_east = 59,
  anon_sym_west = 60,
  anon_sym_up = 61,
  anon_sym_down = 62,
  sym_identifier = 63,
  anon_sym_DQUOTE = 64,
  aux_sym_string_token1 = 65,
  sym_number = 66,
  anon_sym_true = 67,
  anon_sym_false = 68,
  anon_sym_POUND = 69,
  aux_sym_comment_token1 = 70,
  anon_sym_SLASH_SLASH = 71,
  anon_sym_SLASH_STAR = 72,
  aux_sym_comment_token2 = 73,
  anon_sym_SLASH = 74,
  sym_source_file = 75,
  sym__top_level = 76,
  sym_game_declaration = 77,
  sym_include_statement = 78,
  sym_sounds_block = 79,
  sym_music_block = 80,
  sym_key_value = 81,
  sym_player_block = 82,
  sym__player_prop = 83,
  sym_player_start = 84,
  sym_player_gives = 85,
  sym_player_hp = 86,
  sym_room_block = 87,
  sym__room_prop = 88,
  sym_name_prop = 89,
  sym_desc_prop = 90,
  sym_image_prop = 91,
  sym_contains_prop = 92,
  sym_exit_statement = 93,
  sym_exit_lock = 94,
  sym_object_block = 95,
  sym__object_prop = 96,
  sym_portable_prop = 97,
  sym_container_prop = 98,
  sym_openable_prop = 99,
  sym_locked_prop = 100,
  sym_is_open_prop = 101,
  sym_verbs_block = 102,
  sym_verb_def = 103,
  sym_verb_parameter = 104,
  sym__verb_statement = 105,
  sym_else_branch = 106,
  sym_rule_block = 107,
  sym_when_clause = 108,
  sym__trigger = 109,
  sym_enter_trigger = 110,
  sym_look_trigger = 111,
  sym_take_trigger = 112,
  sym_use_trigger = 113,
  sym_use_on_trigger = 114,
  sym_command_trigger = 115,
  sym_if_clause = 116,
  sym__condition = 117,
  sym_chance_condition = 118,
  sym_flag_condition = 119,
  sym_in_condition = 120,
  sym_is_open_condition = 121,
  sym_has_condition = 122,
  sym_exit_locked_condition = 123,
  sym_value_compare_condition = 124,
  sym_do_clause = 125,
  sym__action = 126,
  sym_print_action = 127,
  sym_set_flag_action = 128,
  sym_open_action = 129,
  sym_unlock_exit_action = 130,
  sym_spawn_action = 131,
  sym_sound_action = 132,
  sym_play_music_action = 133,
  sym_direction = 134,
  sym_string = 135,
  sym_boolean = 136,
  sym_comment = 137,
  aux_sym_source_file_repeat1 = 138,
  aux_sym_sounds_block_repeat1 = 139,
  aux_sym_player_block_repeat1 = 140,
  aux_sym_room_block_repeat1 = 141,
  aux_sym_object_block_repeat1 = 142,
  aux_sym_verbs_block_repeat1 = 143,
  aux_sym_verb_def_repeat1 = 144,
  aux_sym_else_branch_repeat1 = 145,
  aux_sym_rule_block_repeat1 = 146,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_game] = "game",
  [anon_sym_start] = "start",
  [anon_sym_include] = "include",
  [anon_sym_sounds] = "sounds",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_music] = "music",
  [anon_sym_EQ] = "=",
  [anon_sym_player] = "player",
  [anon_sym_gives] = "gives",
  [anon_sym_hp] = "hp",
  [anon_sym_room] = "room",
  [anon_sym_name] = "name",
  [anon_sym_desc] = "desc",
  [anon_sym_image] = "image",
  [anon_sym_contains] = "contains",
  [anon_sym_exit] = "exit",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_locked] = "locked",
  [anon_sym_key] = "key",
  [anon_sym_object] = "object",
  [anon_sym_portable] = "portable",
  [anon_sym_container] = "container",
  [anon_sym_openable] = "openable",
  [anon_sym_isOpen] = "isOpen",
  [anon_sym_verbs] = "verbs",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_else] = "else",
  [anon_sym_rule] = "rule",
  [anon_sym_when] = "when",
  [sym_tick_trigger] = "tick_trigger",
  [anon_sym_enter] = "enter",
  [anon_sym_look] = "look",
  [anon_sym_take] = "take",
  [anon_sym_use] = "use",
  [anon_sym_on] = "on",
  [anon_sym_command] = "command",
  [anon_sym_if] = "if",
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
  [sym_contains_prop] = "contains_prop",
  [sym_exit_statement] = "exit_statement",
  [sym_exit_lock] = "exit_lock",
  [sym_object_block] = "object_block",
  [sym__object_prop] = "_object_prop",
  [sym_portable_prop] = "portable_prop",
  [sym_container_prop] = "container_prop",
  [sym_openable_prop] = "openable_prop",
  [sym_locked_prop] = "locked_prop",
  [sym_is_open_prop] = "is_open_prop",
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
  [sym_sound_action] = "sound_action",
  [sym_play_music_action] = "play_music_action",
  [sym_direction] = "direction",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sounds_block_repeat1] = "sounds_block_repeat1",
  [aux_sym_player_block_repeat1] = "player_block_repeat1",
  [aux_sym_room_block_repeat1] = "room_block_repeat1",
  [aux_sym_object_block_repeat1] = "object_block_repeat1",
  [aux_sym_verbs_block_repeat1] = "verbs_block_repeat1",
  [aux_sym_verb_def_repeat1] = "verb_def_repeat1",
  [aux_sym_else_branch_repeat1] = "else_branch_repeat1",
  [aux_sym_rule_block_repeat1] = "rule_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_game] = anon_sym_game,
  [anon_sym_start] = anon_sym_start,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_sounds] = anon_sym_sounds,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_music] = anon_sym_music,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_player] = anon_sym_player,
  [anon_sym_gives] = anon_sym_gives,
  [anon_sym_hp] = anon_sym_hp,
  [anon_sym_room] = anon_sym_room,
  [anon_sym_name] = anon_sym_name,
  [anon_sym_desc] = anon_sym_desc,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_locked] = anon_sym_locked,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_portable] = anon_sym_portable,
  [anon_sym_container] = anon_sym_container,
  [anon_sym_openable] = anon_sym_openable,
  [anon_sym_isOpen] = anon_sym_isOpen,
  [anon_sym_verbs] = anon_sym_verbs,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_when] = anon_sym_when,
  [sym_tick_trigger] = sym_tick_trigger,
  [anon_sym_enter] = anon_sym_enter,
  [anon_sym_look] = anon_sym_look,
  [anon_sym_take] = anon_sym_take,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_if] = anon_sym_if,
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
  [sym_contains_prop] = sym_contains_prop,
  [sym_exit_statement] = sym_exit_statement,
  [sym_exit_lock] = sym_exit_lock,
  [sym_object_block] = sym_object_block,
  [sym__object_prop] = sym__object_prop,
  [sym_portable_prop] = sym_portable_prop,
  [sym_container_prop] = sym_container_prop,
  [sym_openable_prop] = sym_openable_prop,
  [sym_locked_prop] = sym_locked_prop,
  [sym_is_open_prop] = sym_is_open_prop,
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
  [sym_sound_action] = sym_sound_action,
  [sym_play_music_action] = sym_play_music_action,
  [sym_direction] = sym_direction,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sounds_block_repeat1] = aux_sym_sounds_block_repeat1,
  [aux_sym_player_block_repeat1] = aux_sym_player_block_repeat1,
  [aux_sym_room_block_repeat1] = aux_sym_room_block_repeat1,
  [aux_sym_object_block_repeat1] = aux_sym_object_block_repeat1,
  [aux_sym_verbs_block_repeat1] = aux_sym_verbs_block_repeat1,
  [aux_sym_verb_def_repeat1] = aux_sym_verb_def_repeat1,
  [aux_sym_else_branch_repeat1] = aux_sym_else_branch_repeat1,
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
  [anon_sym_sounds] = {
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
  [anon_sym_music] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_contains] = {
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
  [anon_sym_isOpen] = {
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
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
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
  [anon_sym_if] = {
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
  [sym_contains_prop] = {
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
  [aux_sym_sounds_block_repeat1] = {
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
  [aux_sym_verbs_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verb_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_else_branch_repeat1] = {
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
  [143] = 2,
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
  [169] = 169,
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
  [202] = 195,
  [203] = 199,
  [204] = 204,
  [205] = 205,
  [206] = 206,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(193);
      ADVANCE_MAP(
        '!', 8,
        '"', 289,
        '#', 296,
        '-', 10,
        '/', 312,
        '<', 222,
        '=', 202,
        '>', 223,
        'c', 89,
        'd', 55,
        'e', 21,
        'f', 14,
        'g', 15,
        'h', 26,
        'i', 85,
        'k', 57,
        'l', 132,
        'm', 178,
        'n', 29,
        'o', 34,
        'p', 106,
        'r', 134,
        's', 71,
        't', 16,
        'u', 126,
        'v', 72,
        'w', 84,
        '{', 198,
        '}', 199,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 296,
        '/', 5,
        '=', 201,
        'c', 276,
        'e', 287,
        'f', 279,
        'h', 266,
        'i', 280,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 296,
        '/', 5,
        'd', 141,
        'e', 20,
        'i', 156,
        'n', 133,
        's', 137,
        'u', 142,
        'w', 83,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(296);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '}') ADVANCE(199);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(297);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '/') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '/') ADVANCE(303);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(212);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(183);
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(184);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(205);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(111);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(256);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(237);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 90:
      if (lookahead == 'h') ADVANCE(258);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(259);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'j') ADVANCE(78);
      END_STATE();
    case 99:
      if (lookahead == 'k') ADVANCE(229);
      END_STATE();
    case 100:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 101:
      if (lookahead == 'k') ADVANCE(253);
      END_STATE();
    case 102:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'k') ADVANCE(73);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 106:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 113:
      if (lookahead == 'm') ADVANCE(206);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 116:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'p') ADVANCE(262);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(243);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 162:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 163:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 164:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 187:
      if (lookahead == 'w') ADVANCE(122);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 190:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 191:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(292);
      END_STATE();
    case 192:
      if (eof) ADVANCE(193);
      ADVANCE_MAP(
        '!', 8,
        '"', 289,
        '#', 296,
        '-', 10,
        '/', 5,
        '=', 9,
        'c', 139,
        'd', 56,
        'e', 105,
        'i', 86,
        'k', 57,
        'l', 138,
        'm', 178,
        'n', 28,
        'o', 35,
        'p', 108,
        'r', 134,
        's', 136,
        'v', 72,
        '}', 199,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_game);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_sounds);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_music);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_player);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_gives);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_hp);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_room);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_name);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_locked);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_portable);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_container);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_openable);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_isOpen);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_isOpen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_verbs);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tick_trigger);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_enter);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_look);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_take);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_chance);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_chance);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_has);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_has);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_exitLocked);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_unlock);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_spawn);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_sound);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_playMusic);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_stop_music_action);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_north);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_south);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_east);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_west);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_down);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(298);
      if (lookahead == '/') ADVANCE(291);
      if (lookahead == '\\') ADVANCE(191);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(299);
      if (lookahead == '/') ADVANCE(301);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(302);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(310);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '\\') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(292);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(302);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(307);
      if (lookahead == '/') ADVANCE(303);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 192},
  [3] = {.lex_state = 192},
  [4] = {.lex_state = 192},
  [5] = {.lex_state = 192},
  [6] = {.lex_state = 192},
  [7] = {.lex_state = 192},
  [8] = {.lex_state = 192},
  [9] = {.lex_state = 192},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 192},
  [17] = {.lex_state = 192},
  [18] = {.lex_state = 192},
  [19] = {.lex_state = 192},
  [20] = {.lex_state = 192},
  [21] = {.lex_state = 192},
  [22] = {.lex_state = 192},
  [23] = {.lex_state = 192},
  [24] = {.lex_state = 192},
  [25] = {.lex_state = 192},
  [26] = {.lex_state = 192},
  [27] = {.lex_state = 192},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 192},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 192},
  [33] = {.lex_state = 192},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 192},
  [36] = {.lex_state = 192},
  [37] = {.lex_state = 192},
  [38] = {.lex_state = 192},
  [39] = {.lex_state = 192},
  [40] = {.lex_state = 192},
  [41] = {.lex_state = 192},
  [42] = {.lex_state = 192},
  [43] = {.lex_state = 192},
  [44] = {.lex_state = 192},
  [45] = {.lex_state = 192},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 192},
  [48] = {.lex_state = 192},
  [49] = {.lex_state = 192},
  [50] = {.lex_state = 192},
  [51] = {.lex_state = 192},
  [52] = {.lex_state = 192},
  [53] = {.lex_state = 192},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 192},
  [62] = {.lex_state = 192},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 192},
  [67] = {.lex_state = 192},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 192},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 192},
  [75] = {.lex_state = 192},
  [76] = {.lex_state = 192},
  [77] = {.lex_state = 192},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 192},
  [80] = {.lex_state = 192},
  [81] = {.lex_state = 192},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 192},
  [86] = {.lex_state = 192},
  [87] = {.lex_state = 192},
  [88] = {.lex_state = 192},
  [89] = {.lex_state = 192},
  [90] = {.lex_state = 192},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 192},
  [94] = {.lex_state = 192},
  [95] = {.lex_state = 192},
  [96] = {.lex_state = 192},
  [97] = {.lex_state = 192},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 192},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 192},
  [102] = {.lex_state = 192},
  [103] = {.lex_state = 192},
  [104] = {.lex_state = 192},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 192},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 192},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 192},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 192},
  [122] = {.lex_state = 192},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 192},
  [126] = {.lex_state = 192},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 192},
  [129] = {.lex_state = 192},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 192},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 192},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 192},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 300},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 3},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 3},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 3},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 290},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 290},
  [204] = {.lex_state = 0},
  [205] = {(TSStateId)(-1)},
  [206] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_game] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_music] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_player] = ACTIONS(1),
    [anon_sym_gives] = ACTIONS(1),
    [anon_sym_hp] = ACTIONS(1),
    [anon_sym_room] = ACTIONS(1),
    [anon_sym_name] = ACTIONS(1),
    [anon_sym_desc] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_locked] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_portable] = ACTIONS(1),
    [anon_sym_container] = ACTIONS(1),
    [anon_sym_isOpen] = ACTIONS(1),
    [anon_sym_verbs] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [sym_tick_trigger] = ACTIONS(1),
    [anon_sym_enter] = ACTIONS(1),
    [anon_sym_look] = ACTIONS(1),
    [anon_sym_take] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
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
    [sym_source_file] = STATE(171),
    [sym_game_declaration] = STATE(6),
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
    ACTIONS(9), 24,
      ts_builtin_sym_end,
      anon_sym_start,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_RBRACE,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_object,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
      anon_sym_else,
      anon_sym_rule,
      anon_sym_if,
      anon_sym_do,
  [37] = 16,
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
      anon_sym_locked,
    ACTIONS(21), 1,
      anon_sym_portable,
    ACTIONS(23), 1,
      anon_sym_container,
    ACTIONS(25), 1,
      anon_sym_openable,
    ACTIONS(27), 1,
      anon_sym_isOpen,
    ACTIONS(29), 1,
      anon_sym_verbs,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_object_block_repeat1,
    STATE(22), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(21), 9,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_verbs_block,
  [95] = 16,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(19), 1,
      anon_sym_locked,
    ACTIONS(21), 1,
      anon_sym_portable,
    ACTIONS(23), 1,
      anon_sym_container,
    ACTIONS(25), 1,
      anon_sym_openable,
    ACTIONS(27), 1,
      anon_sym_isOpen,
    ACTIONS(29), 1,
      anon_sym_verbs,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_object_block_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(22), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(21), 9,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_verbs_block,
  [153] = 15,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_name,
    ACTIONS(38), 1,
      anon_sym_desc,
    ACTIONS(41), 1,
      anon_sym_contains,
    ACTIONS(44), 1,
      anon_sym_locked,
    ACTIONS(47), 1,
      anon_sym_portable,
    ACTIONS(50), 1,
      anon_sym_container,
    ACTIONS(53), 1,
      anon_sym_openable,
    ACTIONS(56), 1,
      anon_sym_isOpen,
    ACTIONS(59), 1,
      anon_sym_verbs,
    STATE(22), 1,
      sym__object_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(5), 2,
      sym_comment,
      aux_sym_object_block_repeat1,
    STATE(21), 9,
      sym_name_prop,
      sym_desc_prop,
      sym_contains_prop,
      sym_portable_prop,
      sym_container_prop,
      sym_openable_prop,
      sym_locked_prop,
      sym_is_open_prop,
      sym_verbs_block,
  [209] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_include,
    ACTIONS(66), 1,
      anon_sym_sounds,
    ACTIONS(68), 1,
      anon_sym_music,
    ACTIONS(70), 1,
      anon_sym_player,
    ACTIONS(72), 1,
      anon_sym_room,
    ACTIONS(74), 1,
      anon_sym_object,
    ACTIONS(76), 1,
      anon_sym_rule,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(41), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(52), 7,
      sym_include_statement,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [259] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_include,
    ACTIONS(83), 1,
      anon_sym_sounds,
    ACTIONS(86), 1,
      anon_sym_music,
    ACTIONS(89), 1,
      anon_sym_player,
    ACTIONS(92), 1,
      anon_sym_room,
    ACTIONS(95), 1,
      anon_sym_object,
    ACTIONS(98), 1,
      anon_sym_rule,
    STATE(41), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(7), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(52), 7,
      sym_include_statement,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [307] = 14,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      anon_sym_include,
    ACTIONS(66), 1,
      anon_sym_sounds,
    ACTIONS(68), 1,
      anon_sym_music,
    ACTIONS(70), 1,
      anon_sym_player,
    ACTIONS(72), 1,
      anon_sym_room,
    ACTIONS(74), 1,
      anon_sym_object,
    ACTIONS(76), 1,
      anon_sym_rule,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(41), 1,
      sym__top_level,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(52), 7,
      sym_include_statement,
      sym_sounds_block,
      sym_music_block,
      sym_player_block,
      sym_room_block,
      sym_object_block,
      sym_rule_block,
  [357] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 17,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_key,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
      anon_sym_DQUOTE,
  [387] = 13,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_print,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_open,
    ACTIONS(111), 1,
      anon_sym_unlock,
    ACTIONS(113), 1,
      anon_sym_spawn,
    ACTIONS(115), 1,
      anon_sym_sound,
    ACTIONS(117), 1,
      anon_sym_playMusic,
    ACTIONS(119), 1,
      sym_stop_music_action,
    STATE(10), 1,
      sym_comment,
    STATE(77), 1,
      sym__action,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(76), 7,
      sym_print_action,
      sym_set_flag_action,
      sym_open_action,
      sym_unlock_exit_action,
      sym_spawn_action,
      sym_sound_action,
      sym_play_music_action,
  [434] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_isOpen,
    ACTIONS(123), 1,
      anon_sym_chance,
    ACTIONS(125), 1,
      anon_sym_flag,
    ACTIONS(127), 1,
      anon_sym_in,
    ACTIONS(129), 1,
      anon_sym_has,
    ACTIONS(131), 1,
      anon_sym_exitLocked,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(11), 1,
      sym_comment,
    STATE(74), 1,
      sym__condition,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(75), 7,
      sym_chance_condition,
      sym_flag_condition,
      sym_in_condition,
      sym_is_open_condition,
      sym_has_condition,
      sym_exit_locked_condition,
      sym_value_compare_condition,
  [478] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(137), 1,
      anon_sym_image,
    ACTIONS(139), 1,
      anon_sym_exit,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_room_block_repeat1,
    STATE(58), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(59), 5,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_contains_prop,
      sym_exit_statement,
  [520] = 12,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_name,
    ACTIONS(15), 1,
      anon_sym_desc,
    ACTIONS(17), 1,
      anon_sym_contains,
    ACTIONS(137), 1,
      anon_sym_image,
    ACTIONS(139), 1,
      anon_sym_exit,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_room_block_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(58), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(59), 5,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_contains_prop,
      sym_exit_statement,
  [562] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      sym_tick_trigger,
    ACTIONS(145), 1,
      anon_sym_enter,
    ACTIONS(147), 1,
      anon_sym_look,
    ACTIONS(149), 1,
      anon_sym_take,
    ACTIONS(151), 1,
      anon_sym_use,
    ACTIONS(153), 1,
      anon_sym_command,
    STATE(14), 1,
      sym_comment,
    STATE(126), 1,
      sym__trigger,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(142), 6,
      sym_enter_trigger,
      sym_look_trigger,
      sym_take_trigger,
      sym_use_trigger,
      sym_use_on_trigger,
      sym_command_trigger,
  [602] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_name,
    ACTIONS(160), 1,
      anon_sym_desc,
    ACTIONS(163), 1,
      anon_sym_image,
    ACTIONS(166), 1,
      anon_sym_contains,
    ACTIONS(169), 1,
      anon_sym_exit,
    STATE(58), 1,
      sym__room_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(15), 2,
      sym_comment,
      aux_sym_room_block_repeat1,
    STATE(59), 5,
      sym_name_prop,
      sym_desc_prop,
      sym_image_prop,
      sym_contains_prop,
      sym_exit_statement,
  [642] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [667] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [692] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(18), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 12,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [717] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [740] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [763] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [809] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [832] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [855] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(190), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [878] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [901] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(194), 10,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_contains,
      anon_sym_locked,
      anon_sym_portable,
      anon_sym_container,
      anon_sym_openable,
      anon_sym_isOpen,
      anon_sym_verbs,
  [924] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(196), 1,
      anon_sym_start,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_gives,
    ACTIONS(204), 1,
      anon_sym_hp,
    STATE(91), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(28), 2,
      sym_comment,
      aux_sym_player_block_repeat1,
    STATE(92), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [956] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      anon_sym_start,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      anon_sym_gives,
    ACTIONS(213), 1,
      anon_sym_hp,
    STATE(28), 1,
      aux_sym_player_block_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(91), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(92), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [990] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      anon_sym_else,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    STATE(30), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_verb_def_repeat1,
    STATE(93), 1,
      sym__verb_statement,
    STATE(170), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_if_clause,
      sym_do_clause,
  [1026] = 10,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(207), 1,
      anon_sym_start,
    ACTIONS(211), 1,
      anon_sym_gives,
    ACTIONS(213), 1,
      anon_sym_hp,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_player_block_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(91), 1,
      sym__player_prop,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(92), 3,
      sym_player_start,
      sym_player_gives,
      sym_player_hp,
  [1060] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_else,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_verb_def_repeat1,
    STATE(93), 1,
      sym__verb_statement,
    STATE(186), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_if_clause,
      sym_do_clause,
  [1096] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_else,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_verb_def_repeat1,
    STATE(93), 1,
      sym__verb_statement,
    STATE(186), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_if_clause,
      sym_do_clause,
  [1132] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(229), 1,
      anon_sym_key,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_comment,
    STATE(65), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1160] = 11,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(217), 1,
      anon_sym_else,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_verb_def_repeat1,
    STATE(93), 1,
      sym__verb_statement,
    STATE(197), 1,
      sym_else_branch,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(94), 2,
      sym_if_clause,
      sym_do_clause,
  [1196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(235), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1217] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1238] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(239), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1259] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1280] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1301] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(41), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1322] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1343] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1364] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1385] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1406] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(257), 1,
      anon_sym_locked,
    STATE(46), 1,
      sym_comment,
    STATE(64), 1,
      sym_exit_lock,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1431] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1452] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1473] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1494] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1515] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(51), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1536] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 8,
      ts_builtin_sym_end,
      anon_sym_include,
      anon_sym_sounds,
      anon_sym_music,
      anon_sym_player,
      anon_sym_room,
      anon_sym_object,
      anon_sym_rule,
  [1557] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(273), 1,
      anon_sym_if,
    ACTIONS(276), 1,
      anon_sym_do,
    STATE(93), 1,
      sym__verb_statement,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 2,
      anon_sym_RBRACE,
      anon_sym_else,
    STATE(53), 2,
      sym_comment,
      aux_sym_verb_def_repeat1,
    STATE(94), 2,
      sym_if_clause,
      sym_do_clause,
  [1586] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_comment,
    STATE(60), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1611] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(55), 1,
      sym_comment,
    STATE(169), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [1633] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(56), 1,
      sym_comment,
    STATE(102), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [1655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(57), 1,
      sym_comment,
    STATE(96), 1,
      sym_direction,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 6,
      anon_sym_north,
      anon_sym_south,
      anon_sym_east,
      anon_sym_west,
      anon_sym_up,
      anon_sym_down,
  [1677] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1696] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(59), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1715] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(287), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1734] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    STATE(61), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_else_branch_repeat1,
    STATE(81), 1,
      aux_sym_rule_block_repeat1,
    STATE(128), 1,
      sym_if_clause,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1763] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(219), 1,
      anon_sym_if,
    ACTIONS(221), 1,
      anon_sym_do,
    STATE(61), 1,
      aux_sym_rule_block_repeat1,
    STATE(62), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_else_branch_repeat1,
    STATE(128), 1,
      sym_if_clause,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1792] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(63), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1811] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(291), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1830] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 6,
      anon_sym_RBRACE,
      anon_sym_name,
      anon_sym_desc,
      anon_sym_image,
      anon_sym_contains,
      anon_sym_exit,
  [1849] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(66), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 5,
      anon_sym_RBRACE,
      anon_sym_DASH_GT,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [1867] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [1884] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(68), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_verbs_block_repeat1,
    STATE(136), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1907] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_else_branch_repeat1,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1930] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      sym_identifier,
    STATE(70), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_sounds_block_repeat1,
    STATE(131), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1953] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(311), 1,
      sym_identifier,
    STATE(131), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(71), 2,
      sym_comment,
      aux_sym_sounds_block_repeat1,
  [1974] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(301), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_verbs_block_repeat1,
    STATE(136), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [1997] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_sounds_block_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(131), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2020] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(74), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2037] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(75), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2054] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(76), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(322), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2071] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(77), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(324), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2088] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(78), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(326), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2105] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    ACTIONS(330), 1,
      anon_sym_do,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(79), 2,
      sym_comment,
      aux_sym_else_branch_repeat1,
  [2126] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_else_branch_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2149] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(335), 1,
      anon_sym_if,
    ACTIONS(338), 1,
      anon_sym_do,
    STATE(128), 1,
      sym_if_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(81), 2,
      sym_comment,
      aux_sym_rule_block_repeat1,
  [2170] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(340), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2187] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(83), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(342), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2204] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(136), 1,
      sym_verb_def,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    STATE(84), 2,
      sym_comment,
      aux_sym_verbs_block_repeat1,
  [2225] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(85), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(349), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2242] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(86), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2259] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(87), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(353), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2276] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(88), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2293] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(89), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(357), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2310] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(90), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2327] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(91), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2344] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(92), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 4,
      anon_sym_start,
      anon_sym_RBRACE,
      anon_sym_gives,
      anon_sym_hp,
  [2361] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(93), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2378] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(94), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2395] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(369), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2412] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(96), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(371), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2429] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(97), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2446] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_sounds_block_repeat1,
    STATE(131), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2469] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_do,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      aux_sym_else_branch_repeat1,
    STATE(99), 1,
      sym_comment,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2492] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_sounds_block_repeat1,
    STATE(100), 1,
      sym_comment,
    STATE(131), 1,
      sym_key_value,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2515] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(381), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2532] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(102), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(383), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2549] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(103), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(385), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2566] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(104), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(387), 4,
      anon_sym_RBRACE,
      anon_sym_else,
      anon_sym_if,
      anon_sym_do,
  [2583] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_boolean,
    STATE(105), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2601] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_boolean,
    STATE(106), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2619] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_boolean,
    STATE(107), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2637] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(101), 1,
      sym_boolean,
    STATE(108), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2655] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_boolean,
    STATE(109), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2673] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    ACTIONS(393), 1,
      anon_sym_LT,
    STATE(110), 1,
      sym_comment,
    STATE(145), 1,
      sym_verb_parameter,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2693] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(221), 1,
      anon_sym_do,
    STATE(99), 1,
      aux_sym_else_branch_repeat1,
    STATE(111), 1,
      sym_comment,
    STATE(135), 1,
      sym_do_clause,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2713] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_boolean,
    STATE(112), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2731] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(395), 1,
      anon_sym_on,
    STATE(113), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(397), 2,
      anon_sym_if,
      anon_sym_do,
  [2749] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(95), 1,
      sym_boolean,
    STATE(114), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2767] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_boolean,
    STATE(115), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2785] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(67), 1,
      sym_boolean,
    STATE(116), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(389), 2,
      anon_sym_true,
      anon_sym_false,
  [2803] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(117), 1,
      sym_comment,
    STATE(132), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2820] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(118), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 2,
      anon_sym_if,
      anon_sym_do,
  [2835] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
    STATE(119), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2852] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
    STATE(120), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2869] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(121), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 2,
      anon_sym_if,
      anon_sym_do,
  [2884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(122), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(405), 2,
      anon_sym_if,
      anon_sym_do,
  [2899] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_string,
    STATE(123), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2916] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_string,
    STATE(124), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2933] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(125), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(407), 2,
      anon_sym_if,
      anon_sym_do,
  [2948] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(126), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 2,
      anon_sym_if,
      anon_sym_do,
  [2963] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      sym_string,
    STATE(127), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [2980] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(128), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 2,
      anon_sym_if,
      anon_sym_do,
  [2995] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(129), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(413), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [3010] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(130), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3025] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(131), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(417), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3040] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(132), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(419), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3055] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(133), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(421), 2,
      anon_sym_if,
      anon_sym_do,
  [3070] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(423), 1,
      anon_sym_when,
    STATE(62), 1,
      sym_when_clause,
    STATE(134), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3087] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(135), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(425), 2,
      anon_sym_RBRACE,
      anon_sym_do,
  [3102] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(136), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(427), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3117] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(137), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(429), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3132] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_comment,
    STATE(151), 1,
      sym_string,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3149] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(139), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3164] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      sym_string,
    STATE(140), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3181] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(141), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(433), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3196] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(142), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(435), 2,
      anon_sym_if,
      anon_sym_do,
  [3211] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(143), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [3226] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(144), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3240] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3254] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(146), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3268] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(147), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3282] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(148), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(447), 1,
      sym_identifier,
    STATE(149), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3310] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(449), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(451), 1,
      anon_sym_start,
    STATE(151), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3338] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(453), 1,
      anon_sym_is,
    STATE(152), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3352] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3366] = 4,
    ACTIONS(457), 1,
      anon_sym_POUND,
    ACTIONS(459), 1,
      aux_sym_comment_token1,
    STATE(154), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3380] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3394] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(465), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3408] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3422] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(158), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3436] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3450] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(160), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3464] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(475), 1,
      anon_sym_in,
    STATE(161), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3478] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(477), 1,
      sym_identifier,
    STATE(162), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3492] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3520] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(165), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3534] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(485), 1,
      anon_sym_EQ,
    STATE(166), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3548] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(487), 1,
      sym_identifier,
    STATE(167), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3562] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(489), 1,
      sym_identifier,
    STATE(168), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3576] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(491), 1,
      anon_sym_DASH_GT,
    STATE(169), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3590] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3604] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    STATE(171), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3618] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(172), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3632] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(497), 1,
      anon_sym_GT,
    STATE(173), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3646] = 4,
    ACTIONS(457), 1,
      anon_sym_POUND,
    ACTIONS(499), 1,
      aux_sym_comment_token2,
    STATE(174), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3660] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(501), 1,
      sym_number,
    STATE(175), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3674] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(503), 1,
      anon_sym_GT,
    STATE(176), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3688] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(505), 1,
      sym_identifier,
    STATE(177), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3702] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(507), 1,
      sym_identifier,
    STATE(178), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3716] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(509), 1,
      sym_identifier,
    STATE(179), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3730] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(180), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3744] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(181), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3758] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(182), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(183), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3786] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(184), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3800] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(521), 1,
      anon_sym_flag,
    STATE(185), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3814] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3828] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(187), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3842] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3856] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(527), 1,
      anon_sym_exit,
    STATE(189), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3870] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(529), 1,
      sym_identifier,
    STATE(190), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3884] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(191), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3898] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(192), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3912] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(535), 1,
      sym_number,
    STATE(193), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3926] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(194), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3940] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3954] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(541), 1,
      sym_identifier,
    STATE(196), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3968] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3982] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(545), 1,
      anon_sym_SLASH,
    STATE(198), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [3996] = 4,
    ACTIONS(457), 1,
      anon_sym_POUND,
    ACTIONS(547), 1,
      aux_sym_string_token1,
    STATE(199), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4010] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(200), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4024] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(551), 1,
      sym_identifier,
    STATE(201), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4038] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(553), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4052] = 4,
    ACTIONS(457), 1,
      anon_sym_POUND,
    ACTIONS(555), 1,
      aux_sym_string_token1,
    STATE(203), 1,
      sym_comment,
    ACTIONS(461), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4066] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(557), 1,
      anon_sym_LT,
    STATE(204), 1,
      sym_comment,
    ACTIONS(5), 2,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
  [4080] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [4084] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 209,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 307,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 387,
  [SMALL_STATE(11)] = 434,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 520,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 602,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 667,
  [SMALL_STATE(18)] = 692,
  [SMALL_STATE(19)] = 717,
  [SMALL_STATE(20)] = 740,
  [SMALL_STATE(21)] = 763,
  [SMALL_STATE(22)] = 786,
  [SMALL_STATE(23)] = 809,
  [SMALL_STATE(24)] = 832,
  [SMALL_STATE(25)] = 855,
  [SMALL_STATE(26)] = 878,
  [SMALL_STATE(27)] = 901,
  [SMALL_STATE(28)] = 924,
  [SMALL_STATE(29)] = 956,
  [SMALL_STATE(30)] = 990,
  [SMALL_STATE(31)] = 1026,
  [SMALL_STATE(32)] = 1060,
  [SMALL_STATE(33)] = 1096,
  [SMALL_STATE(34)] = 1132,
  [SMALL_STATE(35)] = 1160,
  [SMALL_STATE(36)] = 1196,
  [SMALL_STATE(37)] = 1217,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1259,
  [SMALL_STATE(40)] = 1280,
  [SMALL_STATE(41)] = 1301,
  [SMALL_STATE(42)] = 1322,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1364,
  [SMALL_STATE(45)] = 1385,
  [SMALL_STATE(46)] = 1406,
  [SMALL_STATE(47)] = 1431,
  [SMALL_STATE(48)] = 1452,
  [SMALL_STATE(49)] = 1473,
  [SMALL_STATE(50)] = 1494,
  [SMALL_STATE(51)] = 1515,
  [SMALL_STATE(52)] = 1536,
  [SMALL_STATE(53)] = 1557,
  [SMALL_STATE(54)] = 1586,
  [SMALL_STATE(55)] = 1611,
  [SMALL_STATE(56)] = 1633,
  [SMALL_STATE(57)] = 1655,
  [SMALL_STATE(58)] = 1677,
  [SMALL_STATE(59)] = 1696,
  [SMALL_STATE(60)] = 1715,
  [SMALL_STATE(61)] = 1734,
  [SMALL_STATE(62)] = 1763,
  [SMALL_STATE(63)] = 1792,
  [SMALL_STATE(64)] = 1811,
  [SMALL_STATE(65)] = 1830,
  [SMALL_STATE(66)] = 1849,
  [SMALL_STATE(67)] = 1867,
  [SMALL_STATE(68)] = 1884,
  [SMALL_STATE(69)] = 1907,
  [SMALL_STATE(70)] = 1930,
  [SMALL_STATE(71)] = 1953,
  [SMALL_STATE(72)] = 1974,
  [SMALL_STATE(73)] = 1997,
  [SMALL_STATE(74)] = 2020,
  [SMALL_STATE(75)] = 2037,
  [SMALL_STATE(76)] = 2054,
  [SMALL_STATE(77)] = 2071,
  [SMALL_STATE(78)] = 2088,
  [SMALL_STATE(79)] = 2105,
  [SMALL_STATE(80)] = 2126,
  [SMALL_STATE(81)] = 2149,
  [SMALL_STATE(82)] = 2170,
  [SMALL_STATE(83)] = 2187,
  [SMALL_STATE(84)] = 2204,
  [SMALL_STATE(85)] = 2225,
  [SMALL_STATE(86)] = 2242,
  [SMALL_STATE(87)] = 2259,
  [SMALL_STATE(88)] = 2276,
  [SMALL_STATE(89)] = 2293,
  [SMALL_STATE(90)] = 2310,
  [SMALL_STATE(91)] = 2327,
  [SMALL_STATE(92)] = 2344,
  [SMALL_STATE(93)] = 2361,
  [SMALL_STATE(94)] = 2378,
  [SMALL_STATE(95)] = 2395,
  [SMALL_STATE(96)] = 2412,
  [SMALL_STATE(97)] = 2429,
  [SMALL_STATE(98)] = 2446,
  [SMALL_STATE(99)] = 2469,
  [SMALL_STATE(100)] = 2492,
  [SMALL_STATE(101)] = 2515,
  [SMALL_STATE(102)] = 2532,
  [SMALL_STATE(103)] = 2549,
  [SMALL_STATE(104)] = 2566,
  [SMALL_STATE(105)] = 2583,
  [SMALL_STATE(106)] = 2601,
  [SMALL_STATE(107)] = 2619,
  [SMALL_STATE(108)] = 2637,
  [SMALL_STATE(109)] = 2655,
  [SMALL_STATE(110)] = 2673,
  [SMALL_STATE(111)] = 2693,
  [SMALL_STATE(112)] = 2713,
  [SMALL_STATE(113)] = 2731,
  [SMALL_STATE(114)] = 2749,
  [SMALL_STATE(115)] = 2767,
  [SMALL_STATE(116)] = 2785,
  [SMALL_STATE(117)] = 2803,
  [SMALL_STATE(118)] = 2820,
  [SMALL_STATE(119)] = 2835,
  [SMALL_STATE(120)] = 2852,
  [SMALL_STATE(121)] = 2869,
  [SMALL_STATE(122)] = 2884,
  [SMALL_STATE(123)] = 2899,
  [SMALL_STATE(124)] = 2916,
  [SMALL_STATE(125)] = 2933,
  [SMALL_STATE(126)] = 2948,
  [SMALL_STATE(127)] = 2963,
  [SMALL_STATE(128)] = 2980,
  [SMALL_STATE(129)] = 2995,
  [SMALL_STATE(130)] = 3010,
  [SMALL_STATE(131)] = 3025,
  [SMALL_STATE(132)] = 3040,
  [SMALL_STATE(133)] = 3055,
  [SMALL_STATE(134)] = 3070,
  [SMALL_STATE(135)] = 3087,
  [SMALL_STATE(136)] = 3102,
  [SMALL_STATE(137)] = 3117,
  [SMALL_STATE(138)] = 3132,
  [SMALL_STATE(139)] = 3149,
  [SMALL_STATE(140)] = 3164,
  [SMALL_STATE(141)] = 3181,
  [SMALL_STATE(142)] = 3196,
  [SMALL_STATE(143)] = 3211,
  [SMALL_STATE(144)] = 3226,
  [SMALL_STATE(145)] = 3240,
  [SMALL_STATE(146)] = 3254,
  [SMALL_STATE(147)] = 3268,
  [SMALL_STATE(148)] = 3282,
  [SMALL_STATE(149)] = 3296,
  [SMALL_STATE(150)] = 3310,
  [SMALL_STATE(151)] = 3324,
  [SMALL_STATE(152)] = 3338,
  [SMALL_STATE(153)] = 3352,
  [SMALL_STATE(154)] = 3366,
  [SMALL_STATE(155)] = 3380,
  [SMALL_STATE(156)] = 3394,
  [SMALL_STATE(157)] = 3408,
  [SMALL_STATE(158)] = 3422,
  [SMALL_STATE(159)] = 3436,
  [SMALL_STATE(160)] = 3450,
  [SMALL_STATE(161)] = 3464,
  [SMALL_STATE(162)] = 3478,
  [SMALL_STATE(163)] = 3492,
  [SMALL_STATE(164)] = 3506,
  [SMALL_STATE(165)] = 3520,
  [SMALL_STATE(166)] = 3534,
  [SMALL_STATE(167)] = 3548,
  [SMALL_STATE(168)] = 3562,
  [SMALL_STATE(169)] = 3576,
  [SMALL_STATE(170)] = 3590,
  [SMALL_STATE(171)] = 3604,
  [SMALL_STATE(172)] = 3618,
  [SMALL_STATE(173)] = 3632,
  [SMALL_STATE(174)] = 3646,
  [SMALL_STATE(175)] = 3660,
  [SMALL_STATE(176)] = 3674,
  [SMALL_STATE(177)] = 3688,
  [SMALL_STATE(178)] = 3702,
  [SMALL_STATE(179)] = 3716,
  [SMALL_STATE(180)] = 3730,
  [SMALL_STATE(181)] = 3744,
  [SMALL_STATE(182)] = 3758,
  [SMALL_STATE(183)] = 3772,
  [SMALL_STATE(184)] = 3786,
  [SMALL_STATE(185)] = 3800,
  [SMALL_STATE(186)] = 3814,
  [SMALL_STATE(187)] = 3828,
  [SMALL_STATE(188)] = 3842,
  [SMALL_STATE(189)] = 3856,
  [SMALL_STATE(190)] = 3870,
  [SMALL_STATE(191)] = 3884,
  [SMALL_STATE(192)] = 3898,
  [SMALL_STATE(193)] = 3912,
  [SMALL_STATE(194)] = 3926,
  [SMALL_STATE(195)] = 3940,
  [SMALL_STATE(196)] = 3954,
  [SMALL_STATE(197)] = 3968,
  [SMALL_STATE(198)] = 3982,
  [SMALL_STATE(199)] = 3996,
  [SMALL_STATE(200)] = 4010,
  [SMALL_STATE(201)] = 4024,
  [SMALL_STATE(202)] = 4038,
  [SMALL_STATE(203)] = 4052,
  [SMALL_STATE(204)] = 4066,
  [SMALL_STATE(205)] = 4080,
  [SMALL_STATE(206)] = 4084,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(159),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains_prop, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_desc_prop, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_prop, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_locked_prop, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_portable_prop, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object_prop, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_block_repeat1, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_open_prop, 2, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openable_prop, 2, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_prop, 2, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbs_block, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbs_block, 3, 0, 0),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(184),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_room_block, 4, 0, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_block, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sounds_block, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 4, 0, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_block, 5, 0, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game_declaration, 4, 0, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_block, 4, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 6, 0, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 4, 0, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sounds_block, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_block, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_block, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_block, 7, 0, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_room_block, 5, 0, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level, 1, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 4, 0, 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_room_block_repeat1, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__room_prop, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 5, 0, 11),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_prop, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_statement, 5, 0, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_lock, 3, 0, 9),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_direction, 1, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag_condition, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sounds_block_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sounds_block_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_clause, 2, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__action, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_clause, 2, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_start, 2, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_else_branch_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_else_branch_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_gives, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_hp, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 2, 0, 0),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chance_condition, 2, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_has_condition, 2, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_action, 2, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_action, 2, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sound_action, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_play_music_action, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_player_block_repeat1, 1, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__player_prop, 1, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verb_def_repeat1, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_statement, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_is_open_condition, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_locked_condition, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_compare_condition, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_branch, 2, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_flag_action, 4, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlock_exit_action, 4, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spawn_action, 4, 0, 8),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_condition, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_trigger, 2, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enter_trigger, 2, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_on_trigger, 4, 0, 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_look_trigger, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_take_trigger, 2, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_clause, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_block_repeat1, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 4, 0, 5),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sounds_block_repeat1, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, 0, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_trigger, 5, 0, 7),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_else_branch_repeat1, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verbs_block_repeat1, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 3, 0, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 5, 0, 5),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_def, 6, 0, 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trigger, 1, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [493] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verb_parameter, 3, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
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
