#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_print = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_EQ = 6,
  anon_sym_return = 7,
  anon_sym_rtrue = 8,
  anon_sym_rfalse = 9,
  anon_sym_if = 10,
  anon_sym_switch = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  sym_comment = 14,
  anon_sym_Constant = 15,
  anon_sym_Global = 16,
  anon_sym_Array = 17,
  anon_sym_DASH_DASH_GT = 18,
  anon_sym_table = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_SLASH = 24,
  anon_sym_STAR = 25,
  anon_sym_PERCENT = 26,
  anon_sym_PLUS_PLUS = 27,
  anon_sym_DASH_DASH = 28,
  sym_identifier = 29,
  aux_sym_number_token1 = 30,
  aux_sym_number_token2 = 31,
  aux_sym_number_token3 = 32,
  anon_sym_SQUOTE = 33,
  aux_sym_string_single_quoted_token1 = 34,
  anon_sym_DQUOTE = 35,
  sym_source_file = 36,
  sym__directive = 37,
  sym__statement = 38,
  sym_print = 39,
  sym_routine_message = 40,
  sym_local_var_decl = 41,
  sym_return = 42,
  sym_conditional = 43,
  sym_function_sig = 44,
  sym_constant = 45,
  sym_global = 46,
  sym_array = 47,
  sym_routine = 48,
  sym__expression = 49,
  sym_binary_expression = 50,
  sym_unary_expression = 51,
  sym_number = 52,
  sym_string_single_quoted = 53,
  sym_string_double_quoted = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_print_repeat1 = 56,
  aux_sym_conditional_repeat1 = 57,
  aux_sym_function_sig_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_print] = "print",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [anon_sym_rtrue] = "rtrue",
  [anon_sym_rfalse] = "rfalse",
  [anon_sym_if] = "if",
  [anon_sym_switch] = "switch",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_comment] = "comment",
  [anon_sym_Constant] = "Constant",
  [anon_sym_Global] = "Global",
  [anon_sym_Array] = "Array",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_table] = "table",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [sym_identifier] = "identifier",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_single_quoted_token1] = "string_single_quoted_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_source_file] = "source_file",
  [sym__directive] = "_directive",
  [sym__statement] = "_statement",
  [sym_print] = "print",
  [sym_routine_message] = "routine_message",
  [sym_local_var_decl] = "local_var_decl",
  [sym_return] = "return",
  [sym_conditional] = "conditional",
  [sym_function_sig] = "function_sig",
  [sym_constant] = "constant",
  [sym_global] = "global",
  [sym_array] = "array",
  [sym_routine] = "routine",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_number] = "number",
  [sym_string_single_quoted] = "string_single_quoted",
  [sym_string_double_quoted] = "string_double_quoted",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_print_repeat1] = "print_repeat1",
  [aux_sym_conditional_repeat1] = "conditional_repeat1",
  [aux_sym_function_sig_repeat1] = "function_sig_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_rtrue] = anon_sym_rtrue,
  [anon_sym_rfalse] = anon_sym_rfalse,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_comment] = sym_comment,
  [anon_sym_Constant] = anon_sym_Constant,
  [anon_sym_Global] = anon_sym_Global,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_identifier] = sym_identifier,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_single_quoted_token1] = aux_sym_string_single_quoted_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_source_file] = sym_source_file,
  [sym__directive] = sym__directive,
  [sym__statement] = sym__statement,
  [sym_print] = sym_print,
  [sym_routine_message] = sym_routine_message,
  [sym_local_var_decl] = sym_local_var_decl,
  [sym_return] = sym_return,
  [sym_conditional] = sym_conditional,
  [sym_function_sig] = sym_function_sig,
  [sym_constant] = sym_constant,
  [sym_global] = sym_global,
  [sym_array] = sym_array,
  [sym_routine] = sym_routine,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_number] = sym_number,
  [sym_string_single_quoted] = sym_string_single_quoted,
  [sym_string_double_quoted] = sym_string_double_quoted,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_print_repeat1] = aux_sym_print_repeat1,
  [aux_sym_conditional_repeat1] = aux_sym_conditional_repeat1,
  [aux_sym_function_sig_repeat1] = aux_sym_function_sig_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfalse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Constant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_single_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_routine_message] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_function_sig] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_global] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_routine] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_single_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_string_double_quoted] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conditional_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_sig_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [15] = 14,
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
  [39] = 37,
  [40] = 40,
  [41] = 41,
  [42] = 40,
  [43] = 43,
  [44] = 38,
  [45] = 36,
  [46] = 35,
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
  [90] = 73,
  [91] = 79,
  [92] = 83,
  [93] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      ADVANCE_MAP(
        '!', 1,
        '"', 119,
        '$', 4,
        '%', 86,
        '\'', 116,
        '(', 57,
        ')', 58,
        '*', 85,
        '+', 81,
        ',', 55,
        '-', 83,
        '/', 84,
        ';', 56,
        '=', 59,
        'A', 37,
        'C', 33,
        'G', 26,
        '[', 78,
        ']', 79,
        'i', 21,
        'p', 35,
        'r', 17,
        's', 49,
        't', 9,
        '{', 70,
        '}', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 1,
        '"', 119,
        '%', 86,
        ')', 58,
        '*', 85,
        '+', 80,
        ',', 55,
        '-', 82,
        '/', 84,
        ';', 56,
        ']', 79,
        'i', 94,
        'p', 101,
        'r', 91,
        's', 110,
        '}', 71,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == ';') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 't') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_print);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_rtrue);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_rtrue);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_rfalse);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_rfalse);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Constant);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Global);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_single_quoted_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_single_quoted_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 117},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 117},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 117},
  [93] = {.lex_state = 117},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_rtrue] = ACTIONS(1),
    [anon_sym_rfalse] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_Constant] = ACTIONS(1),
    [anon_sym_Global] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(86),
    [sym__directive] = STATE(22),
    [sym_constant] = STATE(22),
    [sym_global] = STATE(22),
    [sym_array] = STATE(22),
    [sym_routine] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_Constant] = ACTIONS(7),
    [anon_sym_Global] = ACTIONS(9),
    [anon_sym_Array] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      anon_sym_print,
    ACTIONS(18), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_string_double_quoted,
    ACTIONS(21), 2,
      anon_sym_rtrue,
      anon_sym_rfalse,
    ACTIONS(24), 2,
      anon_sym_if,
      anon_sym_switch,
    ACTIONS(27), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(2), 7,
      sym__statement,
      sym_print,
      sym_routine_message,
      sym_local_var_decl,
      sym_return,
      sym_conditional,
      aux_sym_conditional_repeat1,
  [40] = 10,
    ACTIONS(38), 1,
      anon_sym_print,
    ACTIONS(40), 1,
      anon_sym_return,
    ACTIONS(46), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_string_double_quoted,
    ACTIONS(42), 2,
      anon_sym_rtrue,
      anon_sym_rfalse,
    ACTIONS(44), 2,
      anon_sym_if,
      anon_sym_switch,
    STATE(5), 7,
      sym__statement,
      sym_print,
      sym_routine_message,
      sym_local_var_decl,
      sym_return,
      sym_conditional,
      aux_sym_conditional_repeat1,
  [79] = 10,
    ACTIONS(38), 1,
      anon_sym_print,
    ACTIONS(40), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_comment,
    STATE(76), 1,
      sym_string_double_quoted,
    ACTIONS(42), 2,
      anon_sym_rtrue,
      anon_sym_rfalse,
    ACTIONS(44), 2,
      anon_sym_if,
      anon_sym_switch,
    STATE(6), 7,
      sym__statement,
      sym_print,
      sym_routine_message,
      sym_local_var_decl,
      sym_return,
      sym_conditional,
      aux_sym_conditional_repeat1,
  [118] = 10,
    ACTIONS(38), 1,
      anon_sym_print,
    ACTIONS(40), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym_string_double_quoted,
    ACTIONS(42), 2,
      anon_sym_rtrue,
      anon_sym_rfalse,
    ACTIONS(44), 2,
      anon_sym_if,
      anon_sym_switch,
    STATE(2), 7,
      sym__statement,
      sym_print,
      sym_routine_message,
      sym_local_var_decl,
      sym_return,
      sym_conditional,
      aux_sym_conditional_repeat1,
  [157] = 10,
    ACTIONS(38), 1,
      anon_sym_print,
    ACTIONS(40), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_string_double_quoted,
    ACTIONS(42), 2,
      anon_sym_rtrue,
      anon_sym_rfalse,
    ACTIONS(44), 2,
      anon_sym_if,
      anon_sym_switch,
    STATE(2), 7,
      sym__statement,
      sym_print,
      sym_routine_message,
      sym_local_var_decl,
      sym_return,
      sym_conditional,
      aux_sym_conditional_repeat1,
  [196] = 9,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      anon_sym_DASH,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_print_repeat1,
    ACTIONS(69), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(51), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [232] = 9,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_print_repeat1,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(48), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [268] = 9,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_print_repeat1,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [304] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(100), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_print_repeat1,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(50), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [337] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_print_repeat1,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(47), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [370] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(57), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [403] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(54), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [433] = 7,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(116), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [463] = 7,
    ACTIONS(110), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(112), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(116), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [493] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(61), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [523] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(56), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [553] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(60), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [583] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(59), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [613] = 7,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_DASH,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(88), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(92), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(45), 6,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_number,
      sym_string_single_quoted,
      sym_string_double_quoted,
  [643] = 7,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_Constant,
    ACTIONS(142), 1,
      anon_sym_Global,
    ACTIONS(145), 1,
      anon_sym_Array,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(21), 6,
      sym__directive,
      sym_constant,
      sym_global,
      sym_array,
      sym_routine,
      aux_sym_source_file_repeat1,
  [670] = 7,
    ACTIONS(7), 1,
      anon_sym_Constant,
    ACTIONS(9), 1,
      anon_sym_Global,
    ACTIONS(11), 1,
      anon_sym_Array,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      sym_comment,
    STATE(21), 6,
      sym__directive,
      sym_constant,
      sym_global,
      sym_array,
      sym_routine,
      aux_sym_source_file_repeat1,
  [697] = 2,
    ACTIONS(157), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(155), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [713] = 2,
    ACTIONS(161), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(159), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [729] = 2,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(163), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [745] = 2,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(167), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [761] = 2,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(171), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [777] = 2,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(175), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [793] = 2,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(179), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [809] = 2,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(183), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [825] = 2,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(187), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [841] = 2,
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(191), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [857] = 2,
    ACTIONS(197), 3,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(195), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [872] = 2,
    ACTIONS(201), 3,
      sym_comment,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(199), 7,
      anon_sym_print,
      anon_sym_return,
      anon_sym_rtrue,
      anon_sym_rfalse,
      anon_sym_if,
      anon_sym_switch,
      sym_identifier,
  [887] = 2,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [902] = 2,
    ACTIONS(209), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [917] = 2,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(211), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [932] = 2,
    ACTIONS(217), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [947] = 3,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(219), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
    ACTIONS(211), 6,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [964] = 2,
    ACTIONS(223), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [979] = 2,
    ACTIONS(225), 1,
      anon_sym_DASH,
    ACTIONS(64), 9,
      anon_sym_RPAREN,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_identifier,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [994] = 1,
    ACTIONS(221), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1005] = 1,
    ACTIONS(227), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1016] = 1,
    ACTIONS(215), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1027] = 1,
    ACTIONS(207), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1038] = 1,
    ACTIONS(203), 8,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1049] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1063] = 3,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1077] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1091] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1105] = 2,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1116] = 1,
    ACTIONS(239), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1125] = 1,
    ACTIONS(241), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1134] = 2,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1145] = 1,
    ACTIONS(245), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1154] = 2,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1165] = 2,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1176] = 1,
    ACTIONS(251), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1185] = 2,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1196] = 2,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1207] = 2,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(233), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1218] = 1,
    ACTIONS(259), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1227] = 1,
    ACTIONS(261), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1236] = 1,
    ACTIONS(263), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_Constant,
      anon_sym_Global,
      anon_sym_Array,
      anon_sym_LBRACK,
  [1245] = 4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      sym_identifier,
    STATE(3), 1,
      sym_function_sig,
    STATE(66), 1,
      aux_sym_function_sig_repeat1,
  [1258] = 3,
    ACTIONS(269), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_function_sig_repeat1,
  [1268] = 3,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(67), 1,
      aux_sym_function_sig_repeat1,
  [1278] = 2,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      anon_sym_EQ,
  [1285] = 2,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_EQ,
  [1292] = 2,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    ACTIONS(288), 1,
      anon_sym_EQ,
  [1299] = 1,
    ACTIONS(290), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_table,
  [1304] = 1,
    ACTIONS(292), 1,
      anon_sym_SEMI,
  [1308] = 1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
  [1312] = 1,
    ACTIONS(296), 1,
      anon_sym_SEMI,
  [1316] = 1,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
  [1320] = 1,
    ACTIONS(104), 1,
      anon_sym_SEMI,
  [1324] = 1,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1328] = 1,
    ACTIONS(302), 1,
      anon_sym_SEMI,
  [1332] = 1,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
  [1336] = 1,
    ACTIONS(306), 1,
      anon_sym_LBRACE,
  [1340] = 1,
    ACTIONS(308), 1,
      aux_sym_string_single_quoted_token1,
  [1344] = 1,
    ACTIONS(310), 1,
      anon_sym_SEMI,
  [1348] = 1,
    ACTIONS(312), 1,
      aux_sym_string_single_quoted_token1,
  [1352] = 1,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [1356] = 1,
    ACTIONS(316), 1,
      anon_sym_SEMI,
  [1360] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [1364] = 1,
    ACTIONS(320), 1,
      sym_identifier,
  [1368] = 1,
    ACTIONS(322), 1,
      sym_identifier,
  [1372] = 1,
    ACTIONS(324), 1,
      sym_identifier,
  [1376] = 1,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
  [1380] = 1,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
  [1384] = 1,
    ACTIONS(330), 1,
      aux_sym_string_single_quoted_token1,
  [1388] = 1,
    ACTIONS(332), 1,
      aux_sym_string_single_quoted_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 196,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 268,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 403,
  [SMALL_STATE(14)] = 433,
  [SMALL_STATE(15)] = 463,
  [SMALL_STATE(16)] = 493,
  [SMALL_STATE(17)] = 523,
  [SMALL_STATE(18)] = 553,
  [SMALL_STATE(19)] = 583,
  [SMALL_STATE(20)] = 613,
  [SMALL_STATE(21)] = 643,
  [SMALL_STATE(22)] = 670,
  [SMALL_STATE(23)] = 697,
  [SMALL_STATE(24)] = 713,
  [SMALL_STATE(25)] = 729,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 761,
  [SMALL_STATE(28)] = 777,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 872,
  [SMALL_STATE(35)] = 887,
  [SMALL_STATE(36)] = 902,
  [SMALL_STATE(37)] = 917,
  [SMALL_STATE(38)] = 932,
  [SMALL_STATE(39)] = 947,
  [SMALL_STATE(40)] = 964,
  [SMALL_STATE(41)] = 979,
  [SMALL_STATE(42)] = 994,
  [SMALL_STATE(43)] = 1005,
  [SMALL_STATE(44)] = 1016,
  [SMALL_STATE(45)] = 1027,
  [SMALL_STATE(46)] = 1038,
  [SMALL_STATE(47)] = 1049,
  [SMALL_STATE(48)] = 1063,
  [SMALL_STATE(49)] = 1077,
  [SMALL_STATE(50)] = 1091,
  [SMALL_STATE(51)] = 1105,
  [SMALL_STATE(52)] = 1116,
  [SMALL_STATE(53)] = 1125,
  [SMALL_STATE(54)] = 1134,
  [SMALL_STATE(55)] = 1145,
  [SMALL_STATE(56)] = 1154,
  [SMALL_STATE(57)] = 1165,
  [SMALL_STATE(58)] = 1176,
  [SMALL_STATE(59)] = 1185,
  [SMALL_STATE(60)] = 1196,
  [SMALL_STATE(61)] = 1207,
  [SMALL_STATE(62)] = 1218,
  [SMALL_STATE(63)] = 1227,
  [SMALL_STATE(64)] = 1236,
  [SMALL_STATE(65)] = 1245,
  [SMALL_STATE(66)] = 1258,
  [SMALL_STATE(67)] = 1268,
  [SMALL_STATE(68)] = 1278,
  [SMALL_STATE(69)] = 1285,
  [SMALL_STATE(70)] = 1292,
  [SMALL_STATE(71)] = 1299,
  [SMALL_STATE(72)] = 1304,
  [SMALL_STATE(73)] = 1308,
  [SMALL_STATE(74)] = 1312,
  [SMALL_STATE(75)] = 1316,
  [SMALL_STATE(76)] = 1320,
  [SMALL_STATE(77)] = 1324,
  [SMALL_STATE(78)] = 1328,
  [SMALL_STATE(79)] = 1332,
  [SMALL_STATE(80)] = 1336,
  [SMALL_STATE(81)] = 1340,
  [SMALL_STATE(82)] = 1344,
  [SMALL_STATE(83)] = 1348,
  [SMALL_STATE(84)] = 1352,
  [SMALL_STATE(85)] = 1356,
  [SMALL_STATE(86)] = 1360,
  [SMALL_STATE(87)] = 1364,
  [SMALL_STATE(88)] = 1368,
  [SMALL_STATE(89)] = 1372,
  [SMALL_STATE(90)] = 1376,
  [SMALL_STATE(91)] = 1380,
  [SMALL_STATE(92)] = 1384,
  [SMALL_STATE(93)] = 1388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conditional_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_message, 4, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine_message, 4, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 8, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 8, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var_decl, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var_decl, 4, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 7, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 7, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_message, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine_message, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_routine_message, 6, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine_message, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sig, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sig, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_sig, 2, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_sig, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_double_quoted, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_double_quoted, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_single_quoted, 3, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_single_quoted, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 3, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 5, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 4, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_routine, 5, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_sig_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_sig_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
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

TS_PUBLIC const TSLanguage *tree_sitter_Inform6(void) {
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
