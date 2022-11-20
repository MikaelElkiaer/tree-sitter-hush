#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 42
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  anon_sym_EQ = 2,
  sym_break = 3,
  anon_sym_for = 4,
  anon_sym_in = 5,
  anon_sym_do = 6,
  anon_sym_end = 7,
  anon_sym_function = 8,
  anon_sym_return = 9,
  anon_sym_let = 10,
  anon_sym_while = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_DOLLAR_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_LBRACE = 16,
  anon_sym_AT_LBRACK = 17,
  anon_sym_COLON = 18,
  anon_sym_std = 19,
  anon_sym_DOT = 20,
  anon_sym_if = 21,
  anon_sym_then = 22,
  anon_sym_elseif = 23,
  anon_sym_else = 24,
  anon_sym_QMARK = 25,
  anon_sym_LPAREN = 26,
  anon_sym_COMMA = 27,
  anon_sym_RPAREN = 28,
  sym_shell_command = 29,
  anon_sym_PLUS = 30,
  anon_sym_DASH = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_LT = 39,
  anon_sym_GT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_PLUS_PLUS = 43,
  anon_sym_true = 44,
  anon_sym_false = 45,
  anon_sym_SQUOTE = 46,
  aux_sym_char_token1 = 47,
  sym_comment = 48,
  sym_float = 49,
  sym_nil = 50,
  sym_number = 51,
  sym_self = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_string_token1 = 54,
  anon_sym_not = 55,
  sym_source_file = 56,
  sym__statement = 57,
  sym_assignment = 58,
  sym_for = 59,
  sym_function_statement = 60,
  sym_return = 61,
  sym_variable_declaration = 62,
  sym_while = 63,
  sym_block = 64,
  sym__expression = 65,
  sym_array_declaration = 66,
  sym_array_index = 67,
  sym_binary_expression = 68,
  sym_capture_block = 69,
  sym_command_block = 70,
  sym_dictionary_declaration = 71,
  sym_dictionary_index = 72,
  sym_function_call = 73,
  sym_function_expression = 74,
  sym_if = 75,
  sym_try = 76,
  sym_unary_expression = 77,
  sym__literals = 78,
  sym_function_arguments = 79,
  sym_function_parameters = 80,
  sym_binary_operator = 81,
  sym_boolean = 82,
  sym_char = 83,
  sym_string = 84,
  sym_unary_operator = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_array_declaration_repeat1 = 87,
  aux_sym_dictionary_declaration_repeat1 = 88,
  aux_sym_if_repeat1 = 89,
  aux_sym_function_arguments_repeat1 = 90,
  aux_sym_function_parameters_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [sym_break] = "break",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_function] = "function",
  [anon_sym_return] = "return",
  [anon_sym_let] = "let",
  [anon_sym_while] = "while",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE] = "{",
  [anon_sym_AT_LBRACK] = "@[",
  [anon_sym_COLON] = ":",
  [anon_sym_std] = "std",
  [anon_sym_DOT] = ".",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_elseif] = "elseif",
  [anon_sym_else] = "else",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_shell_command] = "shell_command",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [sym_nil] = "nil",
  [sym_number] = "number",
  [sym_self] = "self",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_not] = "not",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment] = "assignment",
  [sym_for] = "for",
  [sym_function_statement] = "function_statement",
  [sym_return] = "return",
  [sym_variable_declaration] = "variable_declaration",
  [sym_while] = "while",
  [sym_block] = "block",
  [sym__expression] = "_expression",
  [sym_array_declaration] = "array_declaration",
  [sym_array_index] = "array_index",
  [sym_binary_expression] = "binary_expression",
  [sym_capture_block] = "capture_block",
  [sym_command_block] = "command_block",
  [sym_dictionary_declaration] = "dictionary_declaration",
  [sym_dictionary_index] = "dictionary_index",
  [sym_function_call] = "function_call",
  [sym_function_expression] = "function_expression",
  [sym_if] = "if",
  [sym_try] = "try",
  [sym_unary_expression] = "unary_expression",
  [sym__literals] = "_literals",
  [sym_function_arguments] = "function_arguments",
  [sym_function_parameters] = "function_parameters",
  [sym_binary_operator] = "binary_operator",
  [sym_boolean] = "boolean",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_unary_operator] = "unary_operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_declaration_repeat1] = "array_declaration_repeat1",
  [aux_sym_dictionary_declaration_repeat1] = "dictionary_declaration_repeat1",
  [aux_sym_if_repeat1] = "if_repeat1",
  [aux_sym_function_arguments_repeat1] = "function_arguments_repeat1",
  [aux_sym_function_parameters_repeat1] = "function_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_break] = sym_break,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_AT_LBRACK] = anon_sym_AT_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_std] = anon_sym_std,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_shell_command] = sym_shell_command,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [sym_comment] = sym_comment,
  [sym_float] = sym_float,
  [sym_nil] = sym_nil,
  [sym_number] = sym_number,
  [sym_self] = sym_self,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_not] = anon_sym_not,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment] = sym_assignment,
  [sym_for] = sym_for,
  [sym_function_statement] = sym_function_statement,
  [sym_return] = sym_return,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_while] = sym_while,
  [sym_block] = sym_block,
  [sym__expression] = sym__expression,
  [sym_array_declaration] = sym_array_declaration,
  [sym_array_index] = sym_array_index,
  [sym_binary_expression] = sym_binary_expression,
  [sym_capture_block] = sym_capture_block,
  [sym_command_block] = sym_command_block,
  [sym_dictionary_declaration] = sym_dictionary_declaration,
  [sym_dictionary_index] = sym_dictionary_index,
  [sym_function_call] = sym_function_call,
  [sym_function_expression] = sym_function_expression,
  [sym_if] = sym_if,
  [sym_try] = sym_try,
  [sym_unary_expression] = sym_unary_expression,
  [sym__literals] = sym__literals,
  [sym_function_arguments] = sym_function_arguments,
  [sym_function_parameters] = sym_function_parameters,
  [sym_binary_operator] = sym_binary_operator,
  [sym_boolean] = sym_boolean,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_unary_operator] = sym_unary_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_declaration_repeat1] = aux_sym_array_declaration_repeat1,
  [aux_sym_dictionary_declaration_repeat1] = aux_sym_dictionary_declaration_repeat1,
  [aux_sym_if_repeat1] = aux_sym_if_repeat1,
  [aux_sym_function_arguments_repeat1] = aux_sym_function_arguments_repeat1,
  [aux_sym_function_parameters_repeat1] = aux_sym_function_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_std] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_shell_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_self] = {
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_function_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_array_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_array_index] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_capture_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_index] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_try] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literals] = {
    .visible = false,
    .named = true,
  },
  [sym_function_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_method = 1,
  field_name = 2,
  field_property = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_method] = "method",
  [field_name] = "name",
  [field_property] = "property",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_property, 2},
  [1] =
    {field_name, 1},
  [2] =
    {field_method, 2},
    {field_method, 3},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '?') ADVANCE(37);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') SKIP(21)
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(122);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(80);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(123);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(84);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(124);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(90);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(92);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(119);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(33);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(136);
      END_STATE();
    case 20:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(20)
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '+') ADVANCE(98);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AT_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\r') ADVANCE(42);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(51);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(55);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(54);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '`') ADVANCE(62);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(62);
      if (lookahead == '`') ADVANCE(62);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(127);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(72);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(76);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '}') ADVANCE(132);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(86);
      if (lookahead == '`') ADVANCE(86);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(87);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '`') ADVANCE(88);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(89);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead == '`') ADVANCE(90);
      if (lookahead == '}') ADVANCE(133);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead == '`') ADVANCE(92);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead != 0) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '$') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '`') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(129);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_shell_command);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\' &&
          lookahead != '`' &&
          lookahead != '}') ADVANCE(66);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(65);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead == '}') ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(114);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == '\'') ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(114);
      if (lookahead == '\'') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(132);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '`') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'' ||
          lookahead == '`') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '`') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(126);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead == '\r') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(126);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '"') ADVANCE(129);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(144);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\\') SKIP(1)
      if (lookahead == 'a') ADVANCE(2);
      if (lookahead == 'b') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'w') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(15)
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_std);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_self);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_break);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 24},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 24},
  [62] = {.lex_state = 24},
  [63] = {.lex_state = 24},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 24},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 142},
  [103] = {.lex_state = 115},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 93},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 93},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_break] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_AT_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_std] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_self] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym__statement] = STATE(14),
    [sym_assignment] = STATE(14),
    [sym_for] = STATE(14),
    [sym_function_statement] = STATE(14),
    [sym_return] = STATE(14),
    [sym_variable_declaration] = STATE(14),
    [sym_while] = STATE(14),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(9),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [2] = {
    [sym__statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_for] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_return] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_while] = STATE(2),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_break] = ACTIONS(52),
    [anon_sym_for] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(58),
    [anon_sym_function] = ACTIONS(60),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_let] = ACTIONS(66),
    [anon_sym_while] = ACTIONS(69),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_AT_LBRACK] = ACTIONS(81),
    [anon_sym_std] = ACTIONS(84),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_elseif] = ACTIONS(58),
    [anon_sym_else] = ACTIONS(58),
    [anon_sym_PLUS] = ACTIONS(90),
    [anon_sym_DASH] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(99),
    [sym_nil] = ACTIONS(102),
    [sym_number] = ACTIONS(102),
    [sym_self] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(108),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(85),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_if_repeat1] = STATE(84),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_elseif] = ACTIONS(115),
    [anon_sym_else] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_for] = STATE(6),
    [sym_function_statement] = STATE(6),
    [sym_return] = STATE(6),
    [sym_variable_declaration] = STATE(6),
    [sym_while] = STATE(6),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(121),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_elseif] = ACTIONS(121),
    [anon_sym_else] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(94),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(123),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_elseif] = ACTIONS(123),
    [anon_sym_else] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [6] = {
    [sym__statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_for] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_return] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_while] = STATE(2),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(125),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(127),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_elseif] = ACTIONS(127),
    [anon_sym_else] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [7] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(122),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [8] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(117),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [9] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(114),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(108),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [11] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(106),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(137),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [12] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(112),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [13] = {
    [sym__statement] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_for] = STATE(4),
    [sym_function_statement] = STATE(4),
    [sym_return] = STATE(4),
    [sym_variable_declaration] = STATE(4),
    [sym_while] = STATE(4),
    [sym_block] = STATE(120),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [14] = {
    [sym__statement] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_for] = STATE(2),
    [sym_function_statement] = STATE(2),
    [sym_return] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_while] = STATE(2),
    [sym__expression] = STATE(43),
    [sym_array_declaration] = STATE(43),
    [sym_array_index] = STATE(46),
    [sym_binary_expression] = STATE(43),
    [sym_capture_block] = STATE(43),
    [sym_command_block] = STATE(43),
    [sym_dictionary_declaration] = STATE(43),
    [sym_dictionary_index] = STATE(46),
    [sym_function_call] = STATE(43),
    [sym_function_expression] = STATE(43),
    [sym_if] = STATE(43),
    [sym_try] = STATE(43),
    [sym_unary_expression] = STATE(43),
    [sym__literals] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_char] = STATE(43),
    [sym_string] = STATE(43),
    [sym_unary_operator] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(143),
    [sym_identifier] = ACTIONS(7),
    [sym_break] = ACTIONS(125),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_function] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_AT_LBRACK] = ACTIONS(27),
    [anon_sym_std] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [sym_number] = ACTIONS(41),
    [sym_self] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_not] = ACTIONS(45),
  },
  [15] = {
    [sym_function_arguments] = STATE(25),
    [sym_binary_operator] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(145),
    [sym_identifier] = ACTIONS(147),
    [sym_break] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(147),
    [anon_sym_do] = ACTIONS(147),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_function] = ACTIONS(147),
    [anon_sym_return] = ACTIONS(147),
    [anon_sym_let] = ACTIONS(147),
    [anon_sym_while] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(145),
    [anon_sym_LBRACE] = ACTIONS(145),
    [anon_sym_AT_LBRACK] = ACTIONS(145),
    [anon_sym_std] = ACTIONS(147),
    [anon_sym_DOT] = ACTIONS(145),
    [anon_sym_if] = ACTIONS(147),
    [anon_sym_then] = ACTIONS(147),
    [anon_sym_elseif] = ACTIONS(147),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_QMARK] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(145),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_or] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(147),
    [anon_sym_GT] = ACTIONS(147),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_PLUS_PLUS] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(147),
    [anon_sym_false] = ACTIONS(147),
    [anon_sym_SQUOTE] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(145),
    [sym_nil] = ACTIONS(147),
    [sym_number] = ACTIONS(147),
    [sym_self] = ACTIONS(147),
    [anon_sym_DQUOTE] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(147),
  },
  [16] = {
    [sym_function_arguments] = STATE(21),
    [ts_builtin_sym_end] = ACTIONS(149),
    [sym_identifier] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(151),
    [sym_break] = ACTIONS(151),
    [anon_sym_for] = ACTIONS(151),
    [anon_sym_do] = ACTIONS(151),
    [anon_sym_end] = ACTIONS(151),
    [anon_sym_function] = ACTIONS(151),
    [anon_sym_return] = ACTIONS(151),
    [anon_sym_let] = ACTIONS(151),
    [anon_sym_while] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(149),
    [anon_sym_LBRACE] = ACTIONS(149),
    [anon_sym_AT_LBRACK] = ACTIONS(149),
    [anon_sym_std] = ACTIONS(151),
    [anon_sym_DOT] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_then] = ACTIONS(151),
    [anon_sym_elseif] = ACTIONS(151),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_QMARK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_RPAREN] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(151),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(151),
    [anon_sym_or] = ACTIONS(151),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(151),
    [anon_sym_GT] = ACTIONS(151),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_PLUS_PLUS] = ACTIONS(149),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_SQUOTE] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(149),
    [sym_nil] = ACTIONS(151),
    [sym_number] = ACTIONS(151),
    [sym_self] = ACTIONS(151),
    [anon_sym_DQUOTE] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(151),
  },
  [17] = {
    [sym_function_arguments] = STATE(25),
    [sym_binary_operator] = STATE(56),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym_identifier] = ACTIONS(157),
    [sym_break] = ACTIONS(157),
    [anon_sym_for] = ACTIONS(157),
    [anon_sym_do] = ACTIONS(157),
    [anon_sym_end] = ACTIONS(157),
    [anon_sym_function] = ACTIONS(157),
    [anon_sym_return] = ACTIONS(157),
    [anon_sym_let] = ACTIONS(157),
    [anon_sym_while] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(155),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_AT_LBRACK] = ACTIONS(155),
    [anon_sym_std] = ACTIONS(157),
    [anon_sym_DOT] = ACTIONS(161),
    [anon_sym_if] = ACTIONS(157),
    [anon_sym_then] = ACTIONS(157),
    [anon_sym_elseif] = ACTIONS(157),
    [anon_sym_else] = ACTIONS(157),
    [anon_sym_QMARK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(153),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(155),
    [anon_sym_STAR] = ACTIONS(155),
    [anon_sym_SLASH] = ACTIONS(155),
    [anon_sym_PERCENT] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(157),
    [anon_sym_or] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(155),
    [anon_sym_BANG_EQ] = ACTIONS(155),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(155),
    [anon_sym_GT_EQ] = ACTIONS(155),
    [anon_sym_PLUS_PLUS] = ACTIONS(155),
    [anon_sym_true] = ACTIONS(157),
    [anon_sym_false] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(155),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(155),
    [sym_nil] = ACTIONS(157),
    [sym_number] = ACTIONS(157),
    [sym_self] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(155),
    [anon_sym_not] = ACTIONS(157),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_identifier] = ACTIONS(167),
    [anon_sym_EQ] = ACTIONS(167),
    [sym_break] = ACTIONS(167),
    [anon_sym_for] = ACTIONS(167),
    [anon_sym_do] = ACTIONS(167),
    [anon_sym_end] = ACTIONS(167),
    [anon_sym_function] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(167),
    [anon_sym_let] = ACTIONS(167),
    [anon_sym_while] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_AT_LBRACK] = ACTIONS(165),
    [anon_sym_std] = ACTIONS(167),
    [anon_sym_DOT] = ACTIONS(165),
    [anon_sym_if] = ACTIONS(167),
    [anon_sym_then] = ACTIONS(167),
    [anon_sym_elseif] = ACTIONS(167),
    [anon_sym_else] = ACTIONS(167),
    [anon_sym_QMARK] = ACTIONS(165),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(167),
    [anon_sym_or] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(167),
    [anon_sym_GT] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_PLUS_PLUS] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(165),
    [sym_nil] = ACTIONS(167),
    [sym_number] = ACTIONS(167),
    [sym_self] = ACTIONS(167),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [anon_sym_not] = ACTIONS(167),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym_identifier] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [sym_break] = ACTIONS(171),
    [anon_sym_for] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_function] = ACTIONS(171),
    [anon_sym_return] = ACTIONS(171),
    [anon_sym_let] = ACTIONS(171),
    [anon_sym_while] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(169),
    [anon_sym_LBRACE] = ACTIONS(169),
    [anon_sym_AT_LBRACK] = ACTIONS(169),
    [anon_sym_std] = ACTIONS(171),
    [anon_sym_DOT] = ACTIONS(169),
    [anon_sym_if] = ACTIONS(171),
    [anon_sym_then] = ACTIONS(171),
    [anon_sym_elseif] = ACTIONS(171),
    [anon_sym_else] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(169),
    [anon_sym_LPAREN] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_and] = ACTIONS(171),
    [anon_sym_or] = ACTIONS(171),
    [anon_sym_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_SQUOTE] = ACTIONS(169),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(169),
    [sym_nil] = ACTIONS(171),
    [sym_number] = ACTIONS(171),
    [sym_self] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(169),
    [anon_sym_not] = ACTIONS(171),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [anon_sym_EQ] = ACTIONS(175),
    [sym_break] = ACTIONS(175),
    [anon_sym_for] = ACTIONS(175),
    [anon_sym_do] = ACTIONS(175),
    [anon_sym_end] = ACTIONS(175),
    [anon_sym_function] = ACTIONS(175),
    [anon_sym_return] = ACTIONS(175),
    [anon_sym_let] = ACTIONS(175),
    [anon_sym_while] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_AT_LBRACK] = ACTIONS(173),
    [anon_sym_std] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_then] = ACTIONS(175),
    [anon_sym_elseif] = ACTIONS(175),
    [anon_sym_else] = ACTIONS(175),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(175),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_and] = ACTIONS(175),
    [anon_sym_or] = ACTIONS(175),
    [anon_sym_EQ_EQ] = ACTIONS(173),
    [anon_sym_BANG_EQ] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(175),
    [anon_sym_GT] = ACTIONS(175),
    [anon_sym_LT_EQ] = ACTIONS(173),
    [anon_sym_GT_EQ] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(173),
    [sym_nil] = ACTIONS(175),
    [sym_number] = ACTIONS(175),
    [sym_self] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_not] = ACTIONS(175),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [anon_sym_EQ] = ACTIONS(179),
    [sym_break] = ACTIONS(179),
    [anon_sym_for] = ACTIONS(179),
    [anon_sym_do] = ACTIONS(179),
    [anon_sym_end] = ACTIONS(179),
    [anon_sym_function] = ACTIONS(179),
    [anon_sym_return] = ACTIONS(179),
    [anon_sym_let] = ACTIONS(179),
    [anon_sym_while] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(177),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(177),
    [anon_sym_LBRACE] = ACTIONS(177),
    [anon_sym_AT_LBRACK] = ACTIONS(177),
    [anon_sym_std] = ACTIONS(179),
    [anon_sym_DOT] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(179),
    [anon_sym_then] = ACTIONS(179),
    [anon_sym_elseif] = ACTIONS(179),
    [anon_sym_else] = ACTIONS(179),
    [anon_sym_QMARK] = ACTIONS(177),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(177),
    [anon_sym_PERCENT] = ACTIONS(177),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [anon_sym_EQ_EQ] = ACTIONS(177),
    [anon_sym_BANG_EQ] = ACTIONS(177),
    [anon_sym_LT] = ACTIONS(179),
    [anon_sym_GT] = ACTIONS(179),
    [anon_sym_LT_EQ] = ACTIONS(177),
    [anon_sym_GT_EQ] = ACTIONS(177),
    [anon_sym_PLUS_PLUS] = ACTIONS(177),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(177),
    [sym_nil] = ACTIONS(179),
    [sym_number] = ACTIONS(179),
    [sym_self] = ACTIONS(179),
    [anon_sym_DQUOTE] = ACTIONS(177),
    [anon_sym_not] = ACTIONS(179),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [sym_identifier] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [sym_break] = ACTIONS(183),
    [anon_sym_for] = ACTIONS(183),
    [anon_sym_do] = ACTIONS(183),
    [anon_sym_end] = ACTIONS(183),
    [anon_sym_function] = ACTIONS(183),
    [anon_sym_return] = ACTIONS(183),
    [anon_sym_let] = ACTIONS(183),
    [anon_sym_while] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_RBRACK] = ACTIONS(181),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_AT_LBRACK] = ACTIONS(181),
    [anon_sym_std] = ACTIONS(183),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_if] = ACTIONS(183),
    [anon_sym_then] = ACTIONS(183),
    [anon_sym_elseif] = ACTIONS(183),
    [anon_sym_else] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(181),
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(181),
    [anon_sym_SLASH] = ACTIONS(181),
    [anon_sym_PERCENT] = ACTIONS(181),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [anon_sym_EQ_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_LT_EQ] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_PLUS_PLUS] = ACTIONS(181),
    [anon_sym_true] = ACTIONS(183),
    [anon_sym_false] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(181),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(181),
    [sym_nil] = ACTIONS(183),
    [sym_number] = ACTIONS(183),
    [sym_self] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(181),
    [anon_sym_not] = ACTIONS(183),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(185),
    [sym_identifier] = ACTIONS(187),
    [sym_break] = ACTIONS(187),
    [anon_sym_for] = ACTIONS(187),
    [anon_sym_do] = ACTIONS(187),
    [anon_sym_end] = ACTIONS(187),
    [anon_sym_function] = ACTIONS(187),
    [anon_sym_return] = ACTIONS(187),
    [anon_sym_let] = ACTIONS(187),
    [anon_sym_while] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_AT_LBRACK] = ACTIONS(185),
    [anon_sym_std] = ACTIONS(187),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_if] = ACTIONS(187),
    [anon_sym_then] = ACTIONS(187),
    [anon_sym_elseif] = ACTIONS(187),
    [anon_sym_else] = ACTIONS(187),
    [anon_sym_QMARK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(185),
    [anon_sym_STAR] = ACTIONS(185),
    [anon_sym_SLASH] = ACTIONS(185),
    [anon_sym_PERCENT] = ACTIONS(185),
    [anon_sym_and] = ACTIONS(187),
    [anon_sym_or] = ACTIONS(187),
    [anon_sym_EQ_EQ] = ACTIONS(185),
    [anon_sym_BANG_EQ] = ACTIONS(185),
    [anon_sym_LT] = ACTIONS(187),
    [anon_sym_GT] = ACTIONS(187),
    [anon_sym_LT_EQ] = ACTIONS(185),
    [anon_sym_GT_EQ] = ACTIONS(185),
    [anon_sym_PLUS_PLUS] = ACTIONS(185),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [anon_sym_SQUOTE] = ACTIONS(185),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(185),
    [sym_nil] = ACTIONS(187),
    [sym_number] = ACTIONS(187),
    [sym_self] = ACTIONS(187),
    [anon_sym_DQUOTE] = ACTIONS(185),
    [anon_sym_not] = ACTIONS(187),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(189),
    [sym_identifier] = ACTIONS(191),
    [sym_break] = ACTIONS(191),
    [anon_sym_for] = ACTIONS(191),
    [anon_sym_do] = ACTIONS(191),
    [anon_sym_end] = ACTIONS(191),
    [anon_sym_function] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(191),
    [anon_sym_let] = ACTIONS(191),
    [anon_sym_while] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_RBRACK] = ACTIONS(189),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_AT_LBRACK] = ACTIONS(189),
    [anon_sym_std] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_if] = ACTIONS(191),
    [anon_sym_then] = ACTIONS(191),
    [anon_sym_elseif] = ACTIONS(191),
    [anon_sym_else] = ACTIONS(191),
    [anon_sym_QMARK] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(189),
    [anon_sym_STAR] = ACTIONS(189),
    [anon_sym_SLASH] = ACTIONS(189),
    [anon_sym_PERCENT] = ACTIONS(189),
    [anon_sym_and] = ACTIONS(191),
    [anon_sym_or] = ACTIONS(191),
    [anon_sym_EQ_EQ] = ACTIONS(189),
    [anon_sym_BANG_EQ] = ACTIONS(189),
    [anon_sym_LT] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_LT_EQ] = ACTIONS(189),
    [anon_sym_GT_EQ] = ACTIONS(189),
    [anon_sym_PLUS_PLUS] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(191),
    [anon_sym_false] = ACTIONS(191),
    [anon_sym_SQUOTE] = ACTIONS(189),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(189),
    [sym_nil] = ACTIONS(191),
    [sym_number] = ACTIONS(191),
    [sym_self] = ACTIONS(191),
    [anon_sym_DQUOTE] = ACTIONS(189),
    [anon_sym_not] = ACTIONS(191),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym_identifier] = ACTIONS(195),
    [sym_break] = ACTIONS(195),
    [anon_sym_for] = ACTIONS(195),
    [anon_sym_do] = ACTIONS(195),
    [anon_sym_end] = ACTIONS(195),
    [anon_sym_function] = ACTIONS(195),
    [anon_sym_return] = ACTIONS(195),
    [anon_sym_let] = ACTIONS(195),
    [anon_sym_while] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(193),
    [anon_sym_LBRACE] = ACTIONS(193),
    [anon_sym_AT_LBRACK] = ACTIONS(193),
    [anon_sym_std] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(193),
    [anon_sym_if] = ACTIONS(195),
    [anon_sym_then] = ACTIONS(195),
    [anon_sym_elseif] = ACTIONS(195),
    [anon_sym_else] = ACTIONS(195),
    [anon_sym_QMARK] = ACTIONS(193),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_COMMA] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(193),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_DASH] = ACTIONS(193),
    [anon_sym_STAR] = ACTIONS(193),
    [anon_sym_SLASH] = ACTIONS(193),
    [anon_sym_PERCENT] = ACTIONS(193),
    [anon_sym_and] = ACTIONS(195),
    [anon_sym_or] = ACTIONS(195),
    [anon_sym_EQ_EQ] = ACTIONS(193),
    [anon_sym_BANG_EQ] = ACTIONS(193),
    [anon_sym_LT] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_LT_EQ] = ACTIONS(193),
    [anon_sym_GT_EQ] = ACTIONS(193),
    [anon_sym_PLUS_PLUS] = ACTIONS(193),
    [anon_sym_true] = ACTIONS(195),
    [anon_sym_false] = ACTIONS(195),
    [anon_sym_SQUOTE] = ACTIONS(193),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(193),
    [sym_nil] = ACTIONS(195),
    [sym_number] = ACTIONS(195),
    [sym_self] = ACTIONS(195),
    [anon_sym_DQUOTE] = ACTIONS(193),
    [anon_sym_not] = ACTIONS(195),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [sym_identifier] = ACTIONS(199),
    [sym_break] = ACTIONS(199),
    [anon_sym_for] = ACTIONS(199),
    [anon_sym_do] = ACTIONS(199),
    [anon_sym_end] = ACTIONS(199),
    [anon_sym_function] = ACTIONS(199),
    [anon_sym_return] = ACTIONS(199),
    [anon_sym_let] = ACTIONS(199),
    [anon_sym_while] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(197),
    [anon_sym_AT_LBRACK] = ACTIONS(197),
    [anon_sym_std] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(199),
    [anon_sym_then] = ACTIONS(199),
    [anon_sym_elseif] = ACTIONS(199),
    [anon_sym_else] = ACTIONS(199),
    [anon_sym_QMARK] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(197),
    [anon_sym_RPAREN] = ACTIONS(197),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_DASH] = ACTIONS(197),
    [anon_sym_STAR] = ACTIONS(197),
    [anon_sym_SLASH] = ACTIONS(197),
    [anon_sym_PERCENT] = ACTIONS(197),
    [anon_sym_and] = ACTIONS(199),
    [anon_sym_or] = ACTIONS(199),
    [anon_sym_EQ_EQ] = ACTIONS(197),
    [anon_sym_BANG_EQ] = ACTIONS(197),
    [anon_sym_LT] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_LT_EQ] = ACTIONS(197),
    [anon_sym_GT_EQ] = ACTIONS(197),
    [anon_sym_PLUS_PLUS] = ACTIONS(197),
    [anon_sym_true] = ACTIONS(199),
    [anon_sym_false] = ACTIONS(199),
    [anon_sym_SQUOTE] = ACTIONS(197),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(197),
    [sym_nil] = ACTIONS(199),
    [sym_number] = ACTIONS(199),
    [sym_self] = ACTIONS(199),
    [anon_sym_DQUOTE] = ACTIONS(197),
    [anon_sym_not] = ACTIONS(199),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [sym_identifier] = ACTIONS(203),
    [sym_break] = ACTIONS(203),
    [anon_sym_for] = ACTIONS(203),
    [anon_sym_do] = ACTIONS(203),
    [anon_sym_end] = ACTIONS(203),
    [anon_sym_function] = ACTIONS(203),
    [anon_sym_return] = ACTIONS(203),
    [anon_sym_let] = ACTIONS(203),
    [anon_sym_while] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_AT_LBRACK] = ACTIONS(201),
    [anon_sym_std] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(203),
    [anon_sym_then] = ACTIONS(203),
    [anon_sym_elseif] = ACTIONS(203),
    [anon_sym_else] = ACTIONS(203),
    [anon_sym_QMARK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(201),
    [anon_sym_STAR] = ACTIONS(201),
    [anon_sym_SLASH] = ACTIONS(201),
    [anon_sym_PERCENT] = ACTIONS(201),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_or] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(201),
    [anon_sym_BANG_EQ] = ACTIONS(201),
    [anon_sym_LT] = ACTIONS(203),
    [anon_sym_GT] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(201),
    [anon_sym_GT_EQ] = ACTIONS(201),
    [anon_sym_PLUS_PLUS] = ACTIONS(201),
    [anon_sym_true] = ACTIONS(203),
    [anon_sym_false] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(201),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(201),
    [sym_nil] = ACTIONS(203),
    [sym_number] = ACTIONS(203),
    [sym_self] = ACTIONS(203),
    [anon_sym_DQUOTE] = ACTIONS(201),
    [anon_sym_not] = ACTIONS(203),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [sym_identifier] = ACTIONS(207),
    [sym_break] = ACTIONS(207),
    [anon_sym_for] = ACTIONS(207),
    [anon_sym_do] = ACTIONS(207),
    [anon_sym_end] = ACTIONS(207),
    [anon_sym_function] = ACTIONS(207),
    [anon_sym_return] = ACTIONS(207),
    [anon_sym_let] = ACTIONS(207),
    [anon_sym_while] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_AT_LBRACK] = ACTIONS(205),
    [anon_sym_std] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_if] = ACTIONS(207),
    [anon_sym_then] = ACTIONS(207),
    [anon_sym_elseif] = ACTIONS(207),
    [anon_sym_else] = ACTIONS(207),
    [anon_sym_QMARK] = ACTIONS(205),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(207),
    [anon_sym_DASH] = ACTIONS(205),
    [anon_sym_STAR] = ACTIONS(205),
    [anon_sym_SLASH] = ACTIONS(205),
    [anon_sym_PERCENT] = ACTIONS(205),
    [anon_sym_and] = ACTIONS(207),
    [anon_sym_or] = ACTIONS(207),
    [anon_sym_EQ_EQ] = ACTIONS(205),
    [anon_sym_BANG_EQ] = ACTIONS(205),
    [anon_sym_LT] = ACTIONS(207),
    [anon_sym_GT] = ACTIONS(207),
    [anon_sym_LT_EQ] = ACTIONS(205),
    [anon_sym_GT_EQ] = ACTIONS(205),
    [anon_sym_PLUS_PLUS] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(207),
    [anon_sym_false] = ACTIONS(207),
    [anon_sym_SQUOTE] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(205),
    [sym_nil] = ACTIONS(207),
    [sym_number] = ACTIONS(207),
    [sym_self] = ACTIONS(207),
    [anon_sym_DQUOTE] = ACTIONS(205),
    [anon_sym_not] = ACTIONS(207),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym_identifier] = ACTIONS(211),
    [sym_break] = ACTIONS(211),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_do] = ACTIONS(211),
    [anon_sym_end] = ACTIONS(211),
    [anon_sym_function] = ACTIONS(211),
    [anon_sym_return] = ACTIONS(211),
    [anon_sym_let] = ACTIONS(211),
    [anon_sym_while] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(209),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_AT_LBRACK] = ACTIONS(209),
    [anon_sym_std] = ACTIONS(211),
    [anon_sym_DOT] = ACTIONS(209),
    [anon_sym_if] = ACTIONS(211),
    [anon_sym_then] = ACTIONS(211),
    [anon_sym_elseif] = ACTIONS(211),
    [anon_sym_else] = ACTIONS(211),
    [anon_sym_QMARK] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_COMMA] = ACTIONS(209),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [anon_sym_STAR] = ACTIONS(209),
    [anon_sym_SLASH] = ACTIONS(209),
    [anon_sym_PERCENT] = ACTIONS(209),
    [anon_sym_and] = ACTIONS(211),
    [anon_sym_or] = ACTIONS(211),
    [anon_sym_EQ_EQ] = ACTIONS(209),
    [anon_sym_BANG_EQ] = ACTIONS(209),
    [anon_sym_LT] = ACTIONS(211),
    [anon_sym_GT] = ACTIONS(211),
    [anon_sym_LT_EQ] = ACTIONS(209),
    [anon_sym_GT_EQ] = ACTIONS(209),
    [anon_sym_PLUS_PLUS] = ACTIONS(209),
    [anon_sym_true] = ACTIONS(211),
    [anon_sym_false] = ACTIONS(211),
    [anon_sym_SQUOTE] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(209),
    [sym_nil] = ACTIONS(211),
    [sym_number] = ACTIONS(211),
    [sym_self] = ACTIONS(211),
    [anon_sym_DQUOTE] = ACTIONS(209),
    [anon_sym_not] = ACTIONS(211),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_identifier] = ACTIONS(215),
    [sym_break] = ACTIONS(215),
    [anon_sym_for] = ACTIONS(215),
    [anon_sym_do] = ACTIONS(215),
    [anon_sym_end] = ACTIONS(215),
    [anon_sym_function] = ACTIONS(215),
    [anon_sym_return] = ACTIONS(215),
    [anon_sym_let] = ACTIONS(215),
    [anon_sym_while] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(213),
    [anon_sym_AT_LBRACK] = ACTIONS(213),
    [anon_sym_std] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_if] = ACTIONS(215),
    [anon_sym_then] = ACTIONS(215),
    [anon_sym_elseif] = ACTIONS(215),
    [anon_sym_else] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(213),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_SLASH] = ACTIONS(213),
    [anon_sym_PERCENT] = ACTIONS(213),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [anon_sym_EQ_EQ] = ACTIONS(213),
    [anon_sym_BANG_EQ] = ACTIONS(213),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_LT_EQ] = ACTIONS(213),
    [anon_sym_GT_EQ] = ACTIONS(213),
    [anon_sym_PLUS_PLUS] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(215),
    [anon_sym_false] = ACTIONS(215),
    [anon_sym_SQUOTE] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(213),
    [sym_nil] = ACTIONS(215),
    [sym_number] = ACTIONS(215),
    [sym_self] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(213),
    [anon_sym_not] = ACTIONS(215),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_identifier] = ACTIONS(219),
    [sym_break] = ACTIONS(219),
    [anon_sym_for] = ACTIONS(219),
    [anon_sym_do] = ACTIONS(219),
    [anon_sym_end] = ACTIONS(219),
    [anon_sym_function] = ACTIONS(219),
    [anon_sym_return] = ACTIONS(219),
    [anon_sym_let] = ACTIONS(219),
    [anon_sym_while] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_AT_LBRACK] = ACTIONS(217),
    [anon_sym_std] = ACTIONS(219),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(219),
    [anon_sym_then] = ACTIONS(219),
    [anon_sym_elseif] = ACTIONS(219),
    [anon_sym_else] = ACTIONS(219),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_and] = ACTIONS(219),
    [anon_sym_or] = ACTIONS(219),
    [anon_sym_EQ_EQ] = ACTIONS(217),
    [anon_sym_BANG_EQ] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(219),
    [anon_sym_GT] = ACTIONS(219),
    [anon_sym_LT_EQ] = ACTIONS(217),
    [anon_sym_GT_EQ] = ACTIONS(217),
    [anon_sym_PLUS_PLUS] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(217),
    [sym_nil] = ACTIONS(219),
    [sym_number] = ACTIONS(219),
    [sym_self] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_not] = ACTIONS(219),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym_identifier] = ACTIONS(223),
    [sym_break] = ACTIONS(223),
    [anon_sym_for] = ACTIONS(223),
    [anon_sym_do] = ACTIONS(223),
    [anon_sym_end] = ACTIONS(223),
    [anon_sym_function] = ACTIONS(223),
    [anon_sym_return] = ACTIONS(223),
    [anon_sym_let] = ACTIONS(223),
    [anon_sym_while] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(221),
    [anon_sym_LBRACE] = ACTIONS(221),
    [anon_sym_AT_LBRACK] = ACTIONS(221),
    [anon_sym_std] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(223),
    [anon_sym_then] = ACTIONS(223),
    [anon_sym_elseif] = ACTIONS(223),
    [anon_sym_else] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_and] = ACTIONS(223),
    [anon_sym_or] = ACTIONS(223),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_PLUS_PLUS] = ACTIONS(221),
    [anon_sym_true] = ACTIONS(223),
    [anon_sym_false] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(221),
    [sym_nil] = ACTIONS(223),
    [sym_number] = ACTIONS(223),
    [sym_self] = ACTIONS(223),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_not] = ACTIONS(223),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym_identifier] = ACTIONS(227),
    [sym_break] = ACTIONS(227),
    [anon_sym_for] = ACTIONS(227),
    [anon_sym_do] = ACTIONS(227),
    [anon_sym_end] = ACTIONS(227),
    [anon_sym_function] = ACTIONS(227),
    [anon_sym_return] = ACTIONS(227),
    [anon_sym_let] = ACTIONS(227),
    [anon_sym_while] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(225),
    [anon_sym_LBRACE] = ACTIONS(225),
    [anon_sym_AT_LBRACK] = ACTIONS(225),
    [anon_sym_std] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(225),
    [anon_sym_if] = ACTIONS(227),
    [anon_sym_then] = ACTIONS(227),
    [anon_sym_elseif] = ACTIONS(227),
    [anon_sym_else] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(225),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(225),
    [anon_sym_SLASH] = ACTIONS(225),
    [anon_sym_PERCENT] = ACTIONS(225),
    [anon_sym_and] = ACTIONS(227),
    [anon_sym_or] = ACTIONS(227),
    [anon_sym_EQ_EQ] = ACTIONS(225),
    [anon_sym_BANG_EQ] = ACTIONS(225),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_LT_EQ] = ACTIONS(225),
    [anon_sym_GT_EQ] = ACTIONS(225),
    [anon_sym_PLUS_PLUS] = ACTIONS(225),
    [anon_sym_true] = ACTIONS(227),
    [anon_sym_false] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(225),
    [sym_nil] = ACTIONS(227),
    [sym_number] = ACTIONS(227),
    [sym_self] = ACTIONS(227),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_not] = ACTIONS(227),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym_identifier] = ACTIONS(231),
    [sym_break] = ACTIONS(231),
    [anon_sym_for] = ACTIONS(231),
    [anon_sym_do] = ACTIONS(231),
    [anon_sym_end] = ACTIONS(231),
    [anon_sym_function] = ACTIONS(231),
    [anon_sym_return] = ACTIONS(231),
    [anon_sym_let] = ACTIONS(231),
    [anon_sym_while] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(229),
    [anon_sym_AT_LBRACK] = ACTIONS(229),
    [anon_sym_std] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_if] = ACTIONS(231),
    [anon_sym_then] = ACTIONS(231),
    [anon_sym_elseif] = ACTIONS(231),
    [anon_sym_else] = ACTIONS(231),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_STAR] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_and] = ACTIONS(231),
    [anon_sym_or] = ACTIONS(231),
    [anon_sym_EQ_EQ] = ACTIONS(229),
    [anon_sym_BANG_EQ] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(231),
    [anon_sym_GT] = ACTIONS(231),
    [anon_sym_LT_EQ] = ACTIONS(229),
    [anon_sym_GT_EQ] = ACTIONS(229),
    [anon_sym_PLUS_PLUS] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(231),
    [anon_sym_false] = ACTIONS(231),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(229),
    [sym_nil] = ACTIONS(231),
    [sym_number] = ACTIONS(231),
    [sym_self] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_not] = ACTIONS(231),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [sym_break] = ACTIONS(235),
    [anon_sym_for] = ACTIONS(235),
    [anon_sym_do] = ACTIONS(235),
    [anon_sym_end] = ACTIONS(235),
    [anon_sym_function] = ACTIONS(235),
    [anon_sym_return] = ACTIONS(235),
    [anon_sym_let] = ACTIONS(235),
    [anon_sym_while] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_AT_LBRACK] = ACTIONS(233),
    [anon_sym_std] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(233),
    [anon_sym_if] = ACTIONS(235),
    [anon_sym_then] = ACTIONS(235),
    [anon_sym_elseif] = ACTIONS(235),
    [anon_sym_else] = ACTIONS(235),
    [anon_sym_QMARK] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_PLUS] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(233),
    [anon_sym_SLASH] = ACTIONS(233),
    [anon_sym_PERCENT] = ACTIONS(233),
    [anon_sym_and] = ACTIONS(235),
    [anon_sym_or] = ACTIONS(235),
    [anon_sym_EQ_EQ] = ACTIONS(233),
    [anon_sym_BANG_EQ] = ACTIONS(233),
    [anon_sym_LT] = ACTIONS(235),
    [anon_sym_GT] = ACTIONS(235),
    [anon_sym_LT_EQ] = ACTIONS(233),
    [anon_sym_GT_EQ] = ACTIONS(233),
    [anon_sym_PLUS_PLUS] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(233),
    [sym_nil] = ACTIONS(235),
    [sym_number] = ACTIONS(235),
    [sym_self] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_not] = ACTIONS(235),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_identifier] = ACTIONS(239),
    [sym_break] = ACTIONS(239),
    [anon_sym_for] = ACTIONS(239),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_end] = ACTIONS(239),
    [anon_sym_function] = ACTIONS(239),
    [anon_sym_return] = ACTIONS(239),
    [anon_sym_let] = ACTIONS(239),
    [anon_sym_while] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_AT_LBRACK] = ACTIONS(237),
    [anon_sym_std] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_then] = ACTIONS(239),
    [anon_sym_elseif] = ACTIONS(239),
    [anon_sym_else] = ACTIONS(239),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_and] = ACTIONS(239),
    [anon_sym_or] = ACTIONS(239),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(237),
    [sym_nil] = ACTIONS(239),
    [sym_number] = ACTIONS(239),
    [sym_self] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_not] = ACTIONS(239),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [sym_break] = ACTIONS(243),
    [anon_sym_for] = ACTIONS(243),
    [anon_sym_do] = ACTIONS(243),
    [anon_sym_end] = ACTIONS(243),
    [anon_sym_function] = ACTIONS(243),
    [anon_sym_return] = ACTIONS(243),
    [anon_sym_let] = ACTIONS(243),
    [anon_sym_while] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_AT_LBRACK] = ACTIONS(241),
    [anon_sym_std] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(241),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_then] = ACTIONS(243),
    [anon_sym_elseif] = ACTIONS(243),
    [anon_sym_else] = ACTIONS(243),
    [anon_sym_QMARK] = ACTIONS(241),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_SLASH] = ACTIONS(241),
    [anon_sym_PERCENT] = ACTIONS(241),
    [anon_sym_and] = ACTIONS(243),
    [anon_sym_or] = ACTIONS(243),
    [anon_sym_EQ_EQ] = ACTIONS(241),
    [anon_sym_BANG_EQ] = ACTIONS(241),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(241),
    [anon_sym_GT_EQ] = ACTIONS(241),
    [anon_sym_PLUS_PLUS] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(243),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(241),
    [sym_nil] = ACTIONS(243),
    [sym_number] = ACTIONS(243),
    [sym_self] = ACTIONS(243),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_not] = ACTIONS(243),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [sym_identifier] = ACTIONS(247),
    [sym_break] = ACTIONS(247),
    [anon_sym_for] = ACTIONS(247),
    [anon_sym_do] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [anon_sym_function] = ACTIONS(247),
    [anon_sym_return] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_while] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(245),
    [anon_sym_LBRACE] = ACTIONS(245),
    [anon_sym_AT_LBRACK] = ACTIONS(245),
    [anon_sym_std] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_then] = ACTIONS(247),
    [anon_sym_elseif] = ACTIONS(247),
    [anon_sym_else] = ACTIONS(247),
    [anon_sym_QMARK] = ACTIONS(245),
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RPAREN] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(245),
    [anon_sym_PERCENT] = ACTIONS(245),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_PLUS_PLUS] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(247),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(245),
    [sym_nil] = ACTIONS(247),
    [sym_number] = ACTIONS(247),
    [sym_self] = ACTIONS(247),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [anon_sym_not] = ACTIONS(247),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [sym_identifier] = ACTIONS(251),
    [sym_break] = ACTIONS(251),
    [anon_sym_for] = ACTIONS(251),
    [anon_sym_do] = ACTIONS(251),
    [anon_sym_end] = ACTIONS(251),
    [anon_sym_function] = ACTIONS(251),
    [anon_sym_return] = ACTIONS(251),
    [anon_sym_let] = ACTIONS(251),
    [anon_sym_while] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(249),
    [anon_sym_LBRACE] = ACTIONS(249),
    [anon_sym_AT_LBRACK] = ACTIONS(249),
    [anon_sym_std] = ACTIONS(251),
    [anon_sym_DOT] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(251),
    [anon_sym_then] = ACTIONS(251),
    [anon_sym_elseif] = ACTIONS(251),
    [anon_sym_else] = ACTIONS(251),
    [anon_sym_QMARK] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(251),
    [anon_sym_DASH] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(251),
    [anon_sym_or] = ACTIONS(251),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(251),
    [anon_sym_GT] = ACTIONS(251),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_PLUS_PLUS] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(251),
    [anon_sym_false] = ACTIONS(251),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(249),
    [sym_nil] = ACTIONS(251),
    [sym_number] = ACTIONS(251),
    [sym_self] = ACTIONS(251),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(251),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym_identifier] = ACTIONS(255),
    [sym_break] = ACTIONS(255),
    [anon_sym_for] = ACTIONS(255),
    [anon_sym_do] = ACTIONS(255),
    [anon_sym_end] = ACTIONS(255),
    [anon_sym_function] = ACTIONS(255),
    [anon_sym_return] = ACTIONS(255),
    [anon_sym_let] = ACTIONS(255),
    [anon_sym_while] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(253),
    [anon_sym_LBRACE] = ACTIONS(253),
    [anon_sym_AT_LBRACK] = ACTIONS(253),
    [anon_sym_std] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(255),
    [anon_sym_then] = ACTIONS(255),
    [anon_sym_elseif] = ACTIONS(255),
    [anon_sym_else] = ACTIONS(255),
    [anon_sym_QMARK] = ACTIONS(253),
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(255),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(255),
    [anon_sym_or] = ACTIONS(255),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(255),
    [anon_sym_GT] = ACTIONS(255),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_PLUS_PLUS] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(255),
    [anon_sym_false] = ACTIONS(255),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(253),
    [sym_nil] = ACTIONS(255),
    [sym_number] = ACTIONS(255),
    [sym_self] = ACTIONS(255),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(255),
  },
  [41] = {
    [sym__expression] = STATE(44),
    [sym_array_declaration] = STATE(44),
    [sym_array_index] = STATE(44),
    [sym_binary_expression] = STATE(44),
    [sym_capture_block] = STATE(44),
    [sym_command_block] = STATE(44),
    [sym_dictionary_declaration] = STATE(44),
    [sym_dictionary_index] = STATE(44),
    [sym_function_call] = STATE(44),
    [sym_function_expression] = STATE(44),
    [sym_if] = STATE(44),
    [sym_try] = STATE(44),
    [sym_unary_expression] = STATE(44),
    [sym__literals] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_char] = STATE(44),
    [sym_string] = STATE(44),
    [sym_unary_operator] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(257),
    [sym_identifier] = ACTIONS(259),
    [sym_break] = ACTIONS(259),
    [anon_sym_for] = ACTIONS(259),
    [anon_sym_end] = ACTIONS(259),
    [anon_sym_function] = ACTIONS(259),
    [anon_sym_return] = ACTIONS(259),
    [anon_sym_let] = ACTIONS(259),
    [anon_sym_while] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(257),
    [anon_sym_LBRACE] = ACTIONS(257),
    [anon_sym_AT_LBRACK] = ACTIONS(257),
    [anon_sym_std] = ACTIONS(259),
    [anon_sym_if] = ACTIONS(259),
    [anon_sym_elseif] = ACTIONS(259),
    [anon_sym_else] = ACTIONS(259),
    [anon_sym_PLUS] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(259),
    [anon_sym_false] = ACTIONS(259),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [sym_float] = ACTIONS(257),
    [sym_nil] = ACTIONS(259),
    [sym_number] = ACTIONS(259),
    [sym_self] = ACTIONS(259),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_not] = ACTIONS(259),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(265), 8,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
    ACTIONS(263), 19,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [69] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 5,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(269), 7,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(265), 9,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
    ACTIONS(271), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [138] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 8,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
    ACTIONS(273), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(275), 19,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [207] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 8,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(279), 19,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_EQ,
    ACTIONS(281), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(283), 23,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [330] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    ACTIONS(293), 1,
      sym_float,
    STATE(49), 1,
      aux_sym_array_declaration_repeat1,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(53), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [409] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(293), 1,
      sym_float,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_array_declaration_repeat1,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(287), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(53), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [488] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_function,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    ACTIONS(308), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(314), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(317), 1,
      anon_sym_std,
    ACTIONS(320), 1,
      anon_sym_if,
    ACTIONS(329), 1,
      anon_sym_SQUOTE,
    ACTIONS(332), 1,
      sym_float,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_not,
    STATE(49), 1,
      aux_sym_array_declaration_repeat1,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(323), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(326), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(297), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(53), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [567] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(341), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(73), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [643] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(349), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(347), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(15), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [716] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(353), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(351), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(42), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [789] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 4,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 8,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
    ACTIONS(357), 8,
      anon_sym_RBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(355), 11,
      anon_sym_function,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_PLUS,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [850] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(361), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(359), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(78), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [923] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(365), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(363), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(77), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [996] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(369), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(367), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(17), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1069] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(373), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(371), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(76), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1142] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(377), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(375), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(75), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1215] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(381), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(80), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1288] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(385), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(383), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(74), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1361] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(389), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(387), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(45), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1434] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_AT_LBRACK,
    ACTIONS(29), 1,
      anon_sym_std,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(37), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(289), 1,
      anon_sym_function,
    ACTIONS(393), 1,
      sym_float,
    STATE(51), 1,
      sym_unary_operator,
    ACTIONS(33), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(391), 4,
      sym_identifier,
      sym_nil,
      sym_number,
      sym_self,
    STATE(79), 17,
      sym__expression,
      sym_array_declaration,
      sym_array_index,
      sym_binary_expression,
      sym_capture_block,
      sym_command_block,
      sym_dictionary_declaration,
      sym_dictionary_index,
      sym_function_call,
      sym_function_expression,
      sym_if,
      sym_try,
      sym_unary_expression,
      sym__literals,
      sym_boolean,
      sym_char,
      sym_string,
  [1507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_EQ,
    ACTIONS(395), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(397), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(403), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(407), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(411), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(415), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(419), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 10,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(423), 18,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 9,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(425), 16,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 9,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(429), 16,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 9,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(433), 16,
      sym_break,
      anon_sym_for,
      anon_sym_end,
      anon_sym_function,
      anon_sym_return,
      anon_sym_let,
      anon_sym_while,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [1861] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    STATE(91), 1,
      aux_sym_function_arguments_repeat1,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [1910] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(441), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 5,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 9,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [1956] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(445), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2000] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(447), 1,
      anon_sym_do,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2043] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(449), 1,
      anon_sym_then,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2086] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2129] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(453), 1,
      anon_sym_do,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2172] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_DOT,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    ACTIONS(455), 1,
      anon_sym_then,
    STATE(25), 1,
      sym_function_arguments,
    STATE(56), 1,
      sym_binary_operator,
    ACTIONS(267), 3,
      anon_sym_PLUS,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 11,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_and,
      anon_sym_or,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS_PLUS,
  [2215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 9,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(457), 10,
      anon_sym_function,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 9,
      anon_sym_LBRACK,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LBRACE,
      anon_sym_AT_LBRACK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SQUOTE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(461), 10,
      anon_sym_function,
      anon_sym_std,
      sym_identifier,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_nil,
      sym_number,
      sym_self,
      anon_sym_not,
  [2269] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_end,
    ACTIONS(467), 1,
      anon_sym_elseif,
    ACTIONS(470), 1,
      anon_sym_else,
    STATE(83), 1,
      aux_sym_if_repeat1,
  [2285] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_end,
    ACTIONS(474), 1,
      anon_sym_elseif,
    ACTIONS(476), 1,
      anon_sym_else,
    STATE(83), 1,
      aux_sym_if_repeat1,
  [2301] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_end,
    ACTIONS(474), 1,
      anon_sym_elseif,
    ACTIONS(476), 1,
      anon_sym_else,
    STATE(86), 1,
      aux_sym_if_repeat1,
  [2317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_elseif,
    ACTIONS(478), 1,
      anon_sym_end,
    ACTIONS(480), 1,
      anon_sym_else,
    STATE(83), 1,
      aux_sym_if_repeat1,
  [2333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_dictionary_declaration_repeat1,
  [2346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_function_arguments_repeat1,
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_dictionary_declaration_repeat1,
  [2372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_dictionary_declaration_repeat1,
  [2385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_function_arguments_repeat1,
  [2398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_function_parameters_repeat1,
  [2411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_function_parameters_repeat1,
  [2424] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_else,
    ACTIONS(504), 2,
      anon_sym_end,
      anon_sym_elseif,
  [2435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_function_parameters_repeat1,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_parameters,
  [2461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_function_parameters,
  [2471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_function_parameters,
  [2481] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
  [2491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON,
  [2506] = 2,
    ACTIONS(523), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym_string_token1,
  [2513] = 2,
    ACTIONS(523), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym_char_token1,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      ts_builtin_sym_end,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_DOT,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_end,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_end,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_in,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_identifier,
  [2569] = 2,
    ACTIONS(523), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_shell_command,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_end,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_end,
  [2597] = 2,
    ACTIONS(523), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_shell_command,
  [2604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
  [2611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_end,
  [2618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      sym_identifier,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_end,
  [2639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
  [2646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_end,
  [2653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(42)] = 0,
  [SMALL_STATE(43)] = 69,
  [SMALL_STATE(44)] = 138,
  [SMALL_STATE(45)] = 207,
  [SMALL_STATE(46)] = 276,
  [SMALL_STATE(47)] = 330,
  [SMALL_STATE(48)] = 409,
  [SMALL_STATE(49)] = 488,
  [SMALL_STATE(50)] = 567,
  [SMALL_STATE(51)] = 643,
  [SMALL_STATE(52)] = 716,
  [SMALL_STATE(53)] = 789,
  [SMALL_STATE(54)] = 850,
  [SMALL_STATE(55)] = 923,
  [SMALL_STATE(56)] = 996,
  [SMALL_STATE(57)] = 1069,
  [SMALL_STATE(58)] = 1142,
  [SMALL_STATE(59)] = 1215,
  [SMALL_STATE(60)] = 1288,
  [SMALL_STATE(61)] = 1361,
  [SMALL_STATE(62)] = 1434,
  [SMALL_STATE(63)] = 1507,
  [SMALL_STATE(64)] = 1546,
  [SMALL_STATE(65)] = 1582,
  [SMALL_STATE(66)] = 1618,
  [SMALL_STATE(67)] = 1654,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1726,
  [SMALL_STATE(70)] = 1762,
  [SMALL_STATE(71)] = 1795,
  [SMALL_STATE(72)] = 1828,
  [SMALL_STATE(73)] = 1861,
  [SMALL_STATE(74)] = 1910,
  [SMALL_STATE(75)] = 1956,
  [SMALL_STATE(76)] = 2000,
  [SMALL_STATE(77)] = 2043,
  [SMALL_STATE(78)] = 2086,
  [SMALL_STATE(79)] = 2129,
  [SMALL_STATE(80)] = 2172,
  [SMALL_STATE(81)] = 2215,
  [SMALL_STATE(82)] = 2242,
  [SMALL_STATE(83)] = 2269,
  [SMALL_STATE(84)] = 2285,
  [SMALL_STATE(85)] = 2301,
  [SMALL_STATE(86)] = 2317,
  [SMALL_STATE(87)] = 2333,
  [SMALL_STATE(88)] = 2346,
  [SMALL_STATE(89)] = 2359,
  [SMALL_STATE(90)] = 2372,
  [SMALL_STATE(91)] = 2385,
  [SMALL_STATE(92)] = 2398,
  [SMALL_STATE(93)] = 2411,
  [SMALL_STATE(94)] = 2424,
  [SMALL_STATE(95)] = 2435,
  [SMALL_STATE(96)] = 2448,
  [SMALL_STATE(97)] = 2461,
  [SMALL_STATE(98)] = 2471,
  [SMALL_STATE(99)] = 2481,
  [SMALL_STATE(100)] = 2491,
  [SMALL_STATE(101)] = 2499,
  [SMALL_STATE(102)] = 2506,
  [SMALL_STATE(103)] = 2513,
  [SMALL_STATE(104)] = 2520,
  [SMALL_STATE(105)] = 2527,
  [SMALL_STATE(106)] = 2534,
  [SMALL_STATE(107)] = 2541,
  [SMALL_STATE(108)] = 2548,
  [SMALL_STATE(109)] = 2555,
  [SMALL_STATE(110)] = 2562,
  [SMALL_STATE(111)] = 2569,
  [SMALL_STATE(112)] = 2576,
  [SMALL_STATE(113)] = 2583,
  [SMALL_STATE(114)] = 2590,
  [SMALL_STATE(115)] = 2597,
  [SMALL_STATE(116)] = 2604,
  [SMALL_STATE(117)] = 2611,
  [SMALL_STATE(118)] = 2618,
  [SMALL_STATE(119)] = 2625,
  [SMALL_STATE(120)] = 2632,
  [SMALL_STATE(121)] = 2639,
  [SMALL_STATE(122)] = 2646,
  [SMALL_STATE(123)] = 2653,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_index, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_index, 3, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_index, 4, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_index, 4, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_arguments, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_arguments, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_expression, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_try, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_block, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture_block, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_declaration, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_declaration, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary_declaration, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_declaration, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_block, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_block, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declaration, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_declaration, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(97),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(48),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(87),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(105),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(55),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(24),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(103),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(53),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(102),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 2), SHIFT_REPEAT(82),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_declaration_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 6),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 6),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 5, .production_id = 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 5, .production_id = 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_statement, 4, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_statement, 4, .production_id = 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_parameters, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_parameters, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_declaration_repeat1, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_declaration_repeat1, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operator, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 2), SHIFT_REPEAT(59),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_arguments_repeat1, 2), SHIFT_REPEAT(58),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dictionary_declaration_repeat1, 2), SHIFT_REPEAT(101),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dictionary_declaration_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_repeat1, 4),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_repeat1, 4),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2), SHIFT_REPEAT(110),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_parameters_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [529] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hush(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
