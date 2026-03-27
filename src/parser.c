#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
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
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_SLASH_STAR_BANG = 1,
  anon_sym_STAR_SLASH = 2,
  anon_sym_BSLASH = 3,
  anon_sym_list = 4,
  anon_sym_endlist = 5,
  anon_sym_table = 6,
  anon_sym_endtable = 7,
  anon_sym_raw = 8,
  anon_sym_endraw = 9,
  anon_sym_legalese = 10,
  anon_sym_endlegalese = 11,
  anon_sym_quotation = 12,
  anon_sym_endquotation = 13,
  anon_sym_omit = 14,
  anon_sym_endomit = 15,
  anon_sym_div = 16,
  anon_sym_enddiv = 17,
  anon_sym_details = 18,
  anon_sym_enddetails = 19,
  anon_sym_if = 20,
  anon_sym_else = 21,
  anon_sym_endif = 22,
  sym_raw_content_chunk = 23,
  sym_command_name = 24,
  sym_inline_command_name = 25,
  anon_sym_image = 26,
  anon_sym_inlineimage = 27,
  sym_image_alt = 28,
  sym_block_argument = 29,
  sym_cell_span = 30,
  sym_command_argument = 31,
  sym_inline_text = 32,
  sym_text = 33,
  sym_image_filename = 34,
  sym_image_alt_text = 35,
  sym_source_file = 36,
  sym_comment = 37,
  sym_block_comment = 38,
  sym_markup = 39,
  sym_block_command = 40,
  sym_list_block = 41,
  sym_table_block = 42,
  sym_raw_block = 43,
  sym_legalese_block = 44,
  sym_quotation_block = 45,
  sym_omit_block = 46,
  sym_div_block = 47,
  sym_details_block = 48,
  sym_if_block = 49,
  sym_command = 50,
  sym_inline_command = 51,
  sym_image_command = 52,
  sym_inlineimage_command = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_block_comment_repeat1 = 55,
  aux_sym_raw_block_repeat1 = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_STAR_BANG] = "/*!",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_list] = "list",
  [anon_sym_endlist] = "endlist",
  [anon_sym_table] = "table",
  [anon_sym_endtable] = "endtable",
  [anon_sym_raw] = "raw",
  [anon_sym_endraw] = "endraw",
  [anon_sym_legalese] = "legalese",
  [anon_sym_endlegalese] = "endlegalese",
  [anon_sym_quotation] = "quotation",
  [anon_sym_endquotation] = "endquotation",
  [anon_sym_omit] = "omit",
  [anon_sym_endomit] = "endomit",
  [anon_sym_div] = "div",
  [anon_sym_enddiv] = "enddiv",
  [anon_sym_details] = "details",
  [anon_sym_enddetails] = "enddetails",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_endif] = "endif",
  [sym_raw_content_chunk] = "raw_content_chunk",
  [sym_command_name] = "command_name",
  [sym_inline_command_name] = "inline_command_name",
  [anon_sym_image] = "image",
  [anon_sym_inlineimage] = "inlineimage",
  [sym_image_alt] = "image_alt",
  [sym_block_argument] = "block_argument",
  [sym_cell_span] = "cell_span",
  [sym_command_argument] = "command_argument",
  [sym_inline_text] = "inline_text",
  [sym_text] = "text",
  [sym_image_filename] = "image_filename",
  [sym_image_alt_text] = "image_alt_text",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_block_comment] = "block_comment",
  [sym_markup] = "markup",
  [sym_block_command] = "block_command",
  [sym_list_block] = "list_block",
  [sym_table_block] = "table_block",
  [sym_raw_block] = "raw_block",
  [sym_legalese_block] = "legalese_block",
  [sym_quotation_block] = "quotation_block",
  [sym_omit_block] = "omit_block",
  [sym_div_block] = "div_block",
  [sym_details_block] = "details_block",
  [sym_if_block] = "if_block",
  [sym_command] = "command",
  [sym_inline_command] = "inline_command",
  [sym_image_command] = "image_command",
  [sym_inlineimage_command] = "inlineimage_command",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_raw_block_repeat1] = "raw_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_STAR_BANG] = anon_sym_SLASH_STAR_BANG,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_endlist] = anon_sym_endlist,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_endtable] = anon_sym_endtable,
  [anon_sym_raw] = anon_sym_raw,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_legalese] = anon_sym_legalese,
  [anon_sym_endlegalese] = anon_sym_endlegalese,
  [anon_sym_quotation] = anon_sym_quotation,
  [anon_sym_endquotation] = anon_sym_endquotation,
  [anon_sym_omit] = anon_sym_omit,
  [anon_sym_endomit] = anon_sym_endomit,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_enddiv] = anon_sym_enddiv,
  [anon_sym_details] = anon_sym_details,
  [anon_sym_enddetails] = anon_sym_enddetails,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_endif] = anon_sym_endif,
  [sym_raw_content_chunk] = sym_raw_content_chunk,
  [sym_command_name] = sym_command_name,
  [sym_inline_command_name] = sym_inline_command_name,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_inlineimage] = anon_sym_inlineimage,
  [sym_image_alt] = sym_image_alt,
  [sym_block_argument] = sym_block_argument,
  [sym_cell_span] = sym_cell_span,
  [sym_command_argument] = sym_command_argument,
  [sym_inline_text] = sym_inline_text,
  [sym_text] = sym_text,
  [sym_image_filename] = sym_image_filename,
  [sym_image_alt_text] = sym_image_alt_text,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_markup] = sym_markup,
  [sym_block_command] = sym_block_command,
  [sym_list_block] = sym_list_block,
  [sym_table_block] = sym_table_block,
  [sym_raw_block] = sym_raw_block,
  [sym_legalese_block] = sym_legalese_block,
  [sym_quotation_block] = sym_quotation_block,
  [sym_omit_block] = sym_omit_block,
  [sym_div_block] = sym_div_block,
  [sym_details_block] = sym_details_block,
  [sym_if_block] = sym_if_block,
  [sym_command] = sym_command,
  [sym_inline_command] = sym_inline_command,
  [sym_image_command] = sym_image_command,
  [sym_inlineimage_command] = sym_inlineimage_command,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_raw_block_repeat1] = aux_sym_raw_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_STAR_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_legalese] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endlegalese] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endquotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_omit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endomit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enddiv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_details] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enddetails] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_content_chunk] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_command_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inlineimage] = {
    .visible = true,
    .named = false,
  },
  [sym_image_alt] = {
    .visible = true,
    .named = true,
  },
  [sym_block_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_cell_span] = {
    .visible = true,
    .named = true,
  },
  [sym_command_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_image_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_image_alt_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_markup] = {
    .visible = true,
    .named = true,
  },
  [sym_block_command] = {
    .visible = true,
    .named = true,
  },
  [sym_list_block] = {
    .visible = true,
    .named = true,
  },
  [sym_table_block] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_block] = {
    .visible = true,
    .named = true,
  },
  [sym_legalese_block] = {
    .visible = true,
    .named = true,
  },
  [sym_quotation_block] = {
    .visible = true,
    .named = true,
  },
  [sym_omit_block] = {
    .visible = true,
    .named = true,
  },
  [sym_div_block] = {
    .visible = true,
    .named = true,
  },
  [sym_details_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_command] = {
    .visible = true,
    .named = true,
  },
  [sym_image_command] = {
    .visible = true,
    .named = true,
  },
  [sym_inlineimage_command] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alt = 1,
  field_arg = 2,
  field_condition = 3,
  field_else = 4,
  field_filename = 5,
  field_span = 6,
  field_then = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alt] = "alt",
  [field_arg] = "arg",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_filename] = "filename",
  [field_span] = "span",
  [field_then] = "then",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_span, 2},
  [1] =
    {field_filename, 2},
  [2] =
    {field_alt, 3},
    {field_filename, 2},
  [4] =
    {field_arg, 2},
  [5] =
    {field_condition, 2},
  [6] =
    {field_condition, 2},
    {field_then, 3},
  [8] =
    {field_condition, 2},
    {field_else, 5},
  [10] =
    {field_condition, 2},
    {field_else, 6},
    {field_then, 3},
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
  [18] = 4,
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
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 62,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(484);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '{') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(485);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == '{') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0) ADVANCE(565);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(548);
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '}') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0) ADVANCE(547);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(551);
      if (lookahead == '\\') ADVANCE(489);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '\\') ADVANCE(489);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(486);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == '{') ADVANCE(509);
      if (lookahead == '}') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(510);
      if (lookahead != 0) ADVANCE(548);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(511);
      if (lookahead != 0) ADVANCE(512);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(538);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(539);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'c') ADVANCE(527);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(530);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(32);
      if (lookahead == 'q') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(24);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(213);
      if (lookahead == 'v') ADVANCE(29);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(513);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(294);
      if (lookahead == 'k') ADVANCE(212);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(467);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'h') ADVANCE(385);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'm' ||
          lookahead == 't') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(348);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(391);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'q') ADVANCE(458);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(429);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(245);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(364);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(432);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(381);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(301);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(434);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(359);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(449);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 80:
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == 'p') ADVANCE(525);
      END_STATE();
    case 81:
      if (lookahead == 'b') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == 'b') ADVANCE(451);
      END_STATE();
    case 83:
      if (lookahead == 'b') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'b') ADVANCE(266);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(516);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(255);
      if (lookahead == 'g') ADVANCE(362);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(343);
      if (lookahead == 'q') ADVANCE(280);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(342);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(322);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(171);
      END_STATE();
    case 96:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(513);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(287);
      if (lookahead == 'q') ADVANCE(463);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(360);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(401);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(126);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(179);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(327);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 116:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 117:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 118:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 119:
      if (lookahead == 'd') ADVANCE(384);
      END_STATE();
    case 120:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 121:
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(460);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(520);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(507);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(163)
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(523);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(513);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(508);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(376);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 188:
      if (lookahead == 'f') ADVANCE(126);
      END_STATE();
    case 189:
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 190:
      if (lookahead == 'f') ADVANCE(378);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(513);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(168);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 198:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 199:
      if (lookahead == 'g') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 201:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 202:
      if (lookahead == 'h') ADVANCE(513);
      END_STATE();
    case 203:
      if (lookahead == 'h') ADVANCE(155);
      END_STATE();
    case 204:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(345);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(317);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(288);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(313);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 226:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 227:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 228:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 229:
      if (lookahead == 'i') ADVANCE(326);
      END_STATE();
    case 230:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 231:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 232:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 233:
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 234:
      if (lookahead == 'i') ADVANCE(398);
      END_STATE();
    case 235:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 236:
      if (lookahead == 'i') ADVANCE(329);
      END_STATE();
    case 237:
      if (lookahead == 'i') ADVANCE(307);
      END_STATE();
    case 238:
      if (lookahead == 'i') ADVANCE(330);
      END_STATE();
    case 239:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 240:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 241:
      if (lookahead == 'i') ADVANCE(436);
      END_STATE();
    case 242:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 243:
      if (lookahead == 'k') ADVANCE(136);
      END_STATE();
    case 244:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(513);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(525);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 249:
      if (lookahead == 'l') ADVANCE(472);
      END_STATE();
    case 250:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 251:
      if (lookahead == 'l') ADVANCE(279);
      END_STATE();
    case 252:
      if (lookahead == 'l') ADVANCE(456);
      END_STATE();
    case 253:
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 254:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 255:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 256:
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(229);
      END_STATE();
    case 257:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 258:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 259:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 260:
      if (lookahead == 'l') ADVANCE(407);
      END_STATE();
    case 261:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 262:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 263:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 264:
      if (lookahead == 'l') ADVANCE(172);
      END_STATE();
    case 265:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 266:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 267:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 268:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 269:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 270:
      if (lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 271:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 272:
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 273:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 274:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 275:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 276:
      if (lookahead == 'm') ADVANCE(513);
      END_STATE();
    case 277:
      if (lookahead == 'm') ADVANCE(247);
      if (lookahead == 'u') ADVANCE(324);
      END_STATE();
    case 278:
      if (lookahead == 'm') ADVANCE(515);
      END_STATE();
    case 279:
      if (lookahead == 'm') ADVANCE(343);
      END_STATE();
    case 280:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 282:
      if (lookahead == 'm') ADVANCE(353);
      END_STATE();
    case 283:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 284:
      if (lookahead == 'm') ADVANCE(350);
      END_STATE();
    case 285:
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 286:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 287:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 288:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 289:
      if (lookahead == 'n') ADVANCE(513);
      END_STATE();
    case 290:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 291:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 292:
      if (lookahead == 'n') ADVANCE(499);
      END_STATE();
    case 293:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 294:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 295:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 296:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 297:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 298:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 299:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 300:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 301:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 302:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 303:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 304:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 305:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 306:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 307:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 308:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 309:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 310:
      if (lookahead == 'n') ADVANCE(174);
      END_STATE();
    case 311:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 312:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 313:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 314:
      if (lookahead == 'n') ADVANCE(426);
      END_STATE();
    case 315:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 316:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 317:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 318:
      if (lookahead == 'o') ADVANCE(513);
      END_STATE();
    case 319:
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 320:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 321:
      if (lookahead == 'o') ADVANCE(287);
      END_STATE();
    case 322:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 323:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 324:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 325:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 326:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 327:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 328:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 329:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 330:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 331:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 332:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 333:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 334:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 335:
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 340:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 341:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 342:
      if (lookahead == 'o') ADVANCE(316);
      END_STATE();
    case 343:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 344:
      if (lookahead == 'p') ADVANCE(513);
      END_STATE();
    case 345:
      if (lookahead == 'p') ADVANCE(272);
      END_STATE();
    case 346:
      if (lookahead == 'p') ADVANCE(420);
      END_STATE();
    case 347:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 348:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 349:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 350:
      if (lookahead == 'p') ADVANCE(340);
      END_STATE();
    case 351:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 352:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 353:
      if (lookahead == 'p') ADVANCE(257);
      END_STATE();
    case 354:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 355:
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 356:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 357:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 358:
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 359:
      if (lookahead == 'p') ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == 'q') ADVANCE(463);
      END_STATE();
    case 361:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 362:
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 363:
      if (lookahead == 'r') ADVANCE(517);
      END_STATE();
    case 364:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 365:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 366:
      if (lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 367:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 368:
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 369:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 370:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 371:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 372:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 373:
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 374:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 375:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 376:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 377:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 378:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 379:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 380:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 381:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 382:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 383:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 384:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 385:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 386:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 387:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 388:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 389:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 390:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 391:
      if (lookahead == 's') ADVANCE(513);
      END_STATE();
    case 392:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 393:
      if (lookahead == 's') ADVANCE(524);
      END_STATE();
    case 394:
      if (lookahead == 's') ADVANCE(505);
      END_STATE();
    case 395:
      if (lookahead == 's') ADVANCE(391);
      END_STATE();
    case 396:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 397:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 398:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 399:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 400:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 401:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 402:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 403:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 404:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 405:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 406:
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 407:
      if (lookahead == 't') ADVANCE(513);
      END_STATE();
    case 408:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 409:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 410:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 411:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 412:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 413:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 414:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 415:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 416:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 417:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 418:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 419:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 420:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 421:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 422:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 423:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 424:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 425:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 426:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 427:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 428:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 429:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 430:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 431:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 432:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 433:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 434:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 435:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 436:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 437:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 438:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 439:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 440:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 441:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 442:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 443:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 444:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 445:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 446:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 447:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 448:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 449:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 450:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 451:
      if (lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 452:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 453:
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 454:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 455:
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 456:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 457:
      if (lookahead == 'u') ADVANCE(421);
      END_STATE();
    case 458:
      if (lookahead == 'u') ADVANCE(239);
      END_STATE();
    case 459:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 460:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 461:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 462:
      if (lookahead == 'u') ADVANCE(405);
      END_STATE();
    case 463:
      if (lookahead == 'u') ADVANCE(341);
      END_STATE();
    case 464:
      if (lookahead == 'v') ADVANCE(502);
      END_STATE();
    case 465:
      if (lookahead == 'v') ADVANCE(503);
      END_STATE();
    case 466:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 467:
      if (lookahead == 'w') ADVANCE(513);
      END_STATE();
    case 468:
      if (lookahead == 'w') ADVANCE(494);
      END_STATE();
    case 469:
      if (lookahead == 'w') ADVANCE(495);
      END_STATE();
    case 470:
      if (lookahead == 'w') ADVANCE(328);
      END_STATE();
    case 471:
      if (lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 472:
      if (lookahead == 'y') ADVANCE(513);
      END_STATE();
    case 473:
      if (lookahead == 'y') ADVANCE(470);
      END_STATE();
    case 474:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 475:
      if (lookahead == '{') ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(475)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(548);
      END_STATE();
    case 476:
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(476)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(558);
      END_STATE();
    case 477:
      if (lookahead == '}') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      if (lookahead == '}') ADVANCE(546);
      if (lookahead != 0) ADVANCE(478);
      END_STATE();
    case 479:
      if (lookahead == '}') ADVANCE(545);
      if (lookahead != 0) ADVANCE(479);
      END_STATE();
    case 480:
      if (lookahead == '}') ADVANCE(557);
      if (lookahead != 0) ADVANCE(480);
      END_STATE();
    case 481:
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(513);
      END_STATE();
    case 482:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 483:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_BANG);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_endlist);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_endtable);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_raw);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_legalese);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_endlegalese);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_quotation);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_endquotation);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_omit);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_endomit);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_enddiv);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_details);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_enddetails);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '\\') ADVANCE(478);
      if (lookahead == '}') ADVANCE(546);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '{') ADVANCE(509);
      if (lookahead == '}') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(512);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_command_name);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(158);
      if (lookahead == 'p') ADVANCE(375);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == 'v') ADVANCE(61);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(232);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'w') ADVANCE(227);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_inline_command_name);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'a') ADVANCE(346);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'b') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'f') ADVANCE(506);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'l') ADVANCE(396);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(450);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_inlineimage);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_image_alt);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_block_argument);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_block_argument);
      if (lookahead == '*') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(547);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_block_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_cell_span);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == ',') ADVANCE(554);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '/') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '}') ADVANCE(549);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(565);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(556);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_inline_text);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(558);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(548);
      if (lookahead == '{') ADVANCE(562);
      if (lookahead == '}') ADVANCE(565);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(547);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(555);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(563);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(546);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(478);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '}') ADVANCE(545);
      if (lookahead == '*' ||
          lookahead == '\\') ADVANCE(479);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(565);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
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
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 19},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 18},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 3, .external_lex_state = 2},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 163},
  [112] = {.lex_state = 476},
  [113] = {.lex_state = 163},
  [114] = {.lex_state = 475},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 476},
  [117] = {.lex_state = 163},
  [118] = {.lex_state = 163},
  [119] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token_image_filename = 0,
  ts_external_token_image_alt_text = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_image_filename] = sym_image_filename,
  [ts_external_token_image_alt_text] = sym_image_alt_text,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_image_filename] = true,
    [ts_external_token_image_alt_text] = true,
  },
  [2] = {
    [ts_external_token_image_alt_text] = true,
  },
  [3] = {
    [ts_external_token_image_filename] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_STAR_BANG] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_endlist] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_endtable] = ACTIONS(1),
    [anon_sym_raw] = ACTIONS(1),
    [anon_sym_legalese] = ACTIONS(1),
    [anon_sym_endlegalese] = ACTIONS(1),
    [anon_sym_quotation] = ACTIONS(1),
    [anon_sym_endquotation] = ACTIONS(1),
    [anon_sym_omit] = ACTIONS(1),
    [anon_sym_endomit] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_enddiv] = ACTIONS(1),
    [anon_sym_details] = ACTIONS(1),
    [anon_sym_enddetails] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_inline_command_name] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_inlineimage] = ACTIONS(1),
    [sym_cell_span] = ACTIONS(1),
    [sym_image_filename] = ACTIONS(1),
    [sym_image_alt_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(115),
    [sym_comment] = STATE(61),
    [sym_block_comment] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_STAR_BANG] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym_block_argument,
    ACTIONS(11), 1,
      sym_text,
    STATE(13), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [32] = 6,
    ACTIONS(13), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_text,
    STATE(7), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [64] = 6,
    ACTIONS(19), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(21), 1,
      anon_sym_BSLASH,
    ACTIONS(24), 1,
      sym_text,
    STATE(4), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [96] = 6,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(27), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 1,
      sym_block_argument,
    STATE(16), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [128] = 6,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_block_argument,
    STATE(29), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [160] = 6,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(35), 1,
      anon_sym_STAR_SLASH,
    STATE(4), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [192] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    STATE(24), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [221] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(39), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [250] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [279] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    STATE(21), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [308] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(45), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [337] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [366] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(49), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [395] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(51), 1,
      anon_sym_BSLASH,
    STATE(22), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [424] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [453] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(55), 1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [482] = 5,
    ACTIONS(24), 1,
      sym_text,
    ACTIONS(57), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [511] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    STATE(9), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [540] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(62), 1,
      anon_sym_BSLASH,
    STATE(26), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [569] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(64), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [598] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [627] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    STATE(12), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [656] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [685] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(72), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [714] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [743] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [772] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_BSLASH,
    STATE(30), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [801] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [830] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [859] = 5,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(100), 5,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(98), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [888] = 15,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_else,
    ACTIONS(106), 1,
      anon_sym_endif,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
  [934] = 15,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(116), 1,
      anon_sym_else,
    ACTIONS(118), 1,
      anon_sym_endif,
  [980] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(120), 1,
      anon_sym_endtable,
  [1023] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(122), 1,
      anon_sym_enddiv,
  [1066] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(124), 1,
      anon_sym_enddiv,
  [1109] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(126), 1,
      anon_sym_endlegalese,
  [1152] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(128), 1,
      anon_sym_endif,
  [1195] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(130), 1,
      anon_sym_endtable,
  [1238] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(132), 1,
      anon_sym_endif,
  [1281] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(134), 1,
      anon_sym_endlist,
  [1324] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(136), 1,
      anon_sym_endtable,
  [1367] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(138), 1,
      anon_sym_endif,
  [1410] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(140), 1,
      anon_sym_enddiv,
  [1453] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(142), 1,
      anon_sym_endif,
  [1496] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(144), 1,
      anon_sym_endlegalese,
  [1539] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(146), 1,
      anon_sym_endquotation,
  [1582] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(148), 1,
      anon_sym_endomit,
  [1625] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(150), 1,
      anon_sym_endquotation,
  [1668] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(152), 1,
      anon_sym_enddetails,
  [1711] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(154), 1,
      anon_sym_enddiv,
  [1754] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(156), 1,
      anon_sym_endtable,
  [1797] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(158), 1,
      anon_sym_endlist,
  [1840] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(160), 1,
      anon_sym_endlist,
  [1883] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(162), 1,
      anon_sym_enddetails,
  [1926] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(164), 1,
      anon_sym_endomit,
  [1969] = 14,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(166), 1,
      anon_sym_endlist,
  [2012] = 13,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
    ACTIONS(168), 1,
      sym_command_name,
  [2052] = 13,
    ACTIONS(86), 1,
      anon_sym_list,
    ACTIONS(88), 1,
      anon_sym_table,
    ACTIONS(90), 1,
      anon_sym_raw,
    ACTIONS(92), 1,
      anon_sym_legalese,
    ACTIONS(94), 1,
      anon_sym_quotation,
    ACTIONS(96), 1,
      anon_sym_omit,
    ACTIONS(98), 1,
      anon_sym_div,
    ACTIONS(100), 1,
      anon_sym_details,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(108), 1,
      sym_command_name,
    ACTIONS(110), 1,
      sym_inline_command_name,
    ACTIONS(112), 1,
      anon_sym_image,
    ACTIONS(114), 1,
      anon_sym_inlineimage,
  [2092] = 4,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      anon_sym_SLASH_STAR_BANG,
    STATE(110), 1,
      sym_block_comment,
    STATE(60), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2106] = 4,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR_BANG,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_block_comment,
    STATE(60), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2120] = 3,
    ACTIONS(179), 1,
      sym_cell_span,
    ACTIONS(181), 1,
      sym_command_argument,
    ACTIONS(177), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
  [2132] = 4,
    ACTIONS(183), 1,
      anon_sym_BSLASH,
    ACTIONS(185), 1,
      sym_raw_content_chunk,
    ACTIONS(187), 1,
      sym_block_argument,
    STATE(67), 1,
      aux_sym_raw_block_repeat1,
  [2145] = 3,
    ACTIONS(191), 1,
      sym_text,
    ACTIONS(193), 1,
      sym_image_alt_text,
    ACTIONS(189), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2156] = 3,
    ACTIONS(179), 1,
      sym_cell_span,
    ACTIONS(181), 1,
      sym_command_argument,
    ACTIONS(177), 2,
      anon_sym_BSLASH,
      sym_text,
  [2167] = 2,
    ACTIONS(197), 1,
      sym_image_alt,
    ACTIONS(195), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
  [2176] = 3,
    ACTIONS(199), 1,
      anon_sym_BSLASH,
    ACTIONS(201), 1,
      sym_raw_content_chunk,
    STATE(72), 1,
      aux_sym_raw_block_repeat1,
  [2186] = 3,
    ACTIONS(203), 1,
      anon_sym_BSLASH,
    ACTIONS(205), 1,
      sym_raw_content_chunk,
    STATE(70), 1,
      aux_sym_raw_block_repeat1,
  [2196] = 2,
    ACTIONS(209), 1,
      sym_text,
    ACTIONS(207), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2204] = 3,
    ACTIONS(201), 1,
      sym_raw_content_chunk,
    ACTIONS(211), 1,
      anon_sym_BSLASH,
    STATE(72), 1,
      aux_sym_raw_block_repeat1,
  [2214] = 2,
    ACTIONS(215), 1,
      sym_text,
    ACTIONS(213), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2222] = 3,
    ACTIONS(217), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      sym_raw_content_chunk,
    STATE(72), 1,
      aux_sym_raw_block_repeat1,
  [2232] = 2,
    ACTIONS(224), 1,
      sym_text,
    ACTIONS(222), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2240] = 2,
    ACTIONS(228), 1,
      sym_text,
    ACTIONS(226), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2248] = 2,
    ACTIONS(232), 1,
      sym_text,
    ACTIONS(230), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2256] = 2,
    ACTIONS(236), 1,
      sym_text,
    ACTIONS(234), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2264] = 2,
    ACTIONS(240), 1,
      sym_text,
    ACTIONS(238), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2272] = 2,
    ACTIONS(244), 1,
      sym_text,
    ACTIONS(242), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2280] = 2,
    ACTIONS(248), 1,
      sym_text,
    ACTIONS(246), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2288] = 2,
    ACTIONS(252), 1,
      sym_text,
    ACTIONS(250), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2296] = 2,
    ACTIONS(256), 1,
      sym_text,
    ACTIONS(254), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2304] = 2,
    ACTIONS(260), 1,
      sym_text,
    ACTIONS(258), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2312] = 2,
    ACTIONS(264), 1,
      sym_text,
    ACTIONS(262), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2320] = 2,
    ACTIONS(268), 1,
      sym_text,
    ACTIONS(266), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2328] = 2,
    ACTIONS(272), 1,
      sym_text,
    ACTIONS(270), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2336] = 2,
    ACTIONS(276), 1,
      sym_text,
    ACTIONS(274), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2344] = 2,
    ACTIONS(280), 1,
      sym_text,
    ACTIONS(278), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2352] = 2,
    ACTIONS(284), 1,
      sym_text,
    ACTIONS(282), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2360] = 2,
    ACTIONS(288), 1,
      sym_text,
    ACTIONS(286), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2368] = 2,
    ACTIONS(292), 1,
      sym_text,
    ACTIONS(290), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2376] = 2,
    ACTIONS(296), 1,
      sym_text,
    ACTIONS(294), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2384] = 2,
    ACTIONS(300), 1,
      sym_text,
    ACTIONS(298), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2392] = 2,
    ACTIONS(304), 1,
      sym_text,
    ACTIONS(302), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2400] = 2,
    ACTIONS(308), 1,
      sym_text,
    ACTIONS(306), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2408] = 2,
    ACTIONS(312), 1,
      sym_text,
    ACTIONS(310), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2416] = 2,
    ACTIONS(316), 1,
      sym_text,
    ACTIONS(314), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2424] = 2,
    ACTIONS(320), 1,
      sym_text,
    ACTIONS(318), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2432] = 2,
    ACTIONS(324), 1,
      sym_text,
    ACTIONS(322), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2440] = 2,
    ACTIONS(328), 1,
      sym_text,
    ACTIONS(326), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2448] = 2,
    ACTIONS(332), 1,
      sym_text,
    ACTIONS(330), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2456] = 2,
    ACTIONS(336), 1,
      sym_text,
    ACTIONS(334), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2464] = 2,
    ACTIONS(340), 1,
      sym_text,
    ACTIONS(338), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2472] = 2,
    ACTIONS(344), 1,
      sym_text,
    ACTIONS(342), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2480] = 2,
    ACTIONS(348), 1,
      sym_text,
    ACTIONS(346), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2488] = 2,
    ACTIONS(352), 1,
      sym_text,
    ACTIONS(350), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2496] = 2,
    ACTIONS(356), 1,
      sym_text,
    ACTIONS(354), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2504] = 2,
    ACTIONS(360), 1,
      sym_text,
    ACTIONS(358), 2,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
  [2512] = 1,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_STAR_BANG,
  [2517] = 1,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_STAR_BANG,
  [2522] = 1,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      anon_sym_SLASH_STAR_BANG,
  [2527] = 1,
    ACTIONS(368), 1,
      anon_sym_endraw,
  [2531] = 1,
    ACTIONS(370), 1,
      sym_inline_text,
  [2535] = 1,
    ACTIONS(372), 1,
      anon_sym_endraw,
  [2539] = 1,
    ACTIONS(374), 1,
      sym_block_argument,
  [2543] = 1,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
  [2547] = 1,
    ACTIONS(378), 1,
      sym_inline_text,
  [2551] = 1,
    ACTIONS(380), 1,
      anon_sym_endraw,
  [2555] = 1,
    ACTIONS(382), 1,
      anon_sym_endraw,
  [2559] = 1,
    ACTIONS(384), 1,
      sym_image_filename,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 128,
  [SMALL_STATE(7)] = 160,
  [SMALL_STATE(8)] = 192,
  [SMALL_STATE(9)] = 221,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 279,
  [SMALL_STATE(12)] = 308,
  [SMALL_STATE(13)] = 337,
  [SMALL_STATE(14)] = 366,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 424,
  [SMALL_STATE(17)] = 453,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 511,
  [SMALL_STATE(20)] = 540,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 598,
  [SMALL_STATE(23)] = 627,
  [SMALL_STATE(24)] = 656,
  [SMALL_STATE(25)] = 685,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 772,
  [SMALL_STATE(29)] = 801,
  [SMALL_STATE(30)] = 830,
  [SMALL_STATE(31)] = 859,
  [SMALL_STATE(32)] = 888,
  [SMALL_STATE(33)] = 934,
  [SMALL_STATE(34)] = 980,
  [SMALL_STATE(35)] = 1023,
  [SMALL_STATE(36)] = 1066,
  [SMALL_STATE(37)] = 1109,
  [SMALL_STATE(38)] = 1152,
  [SMALL_STATE(39)] = 1195,
  [SMALL_STATE(40)] = 1238,
  [SMALL_STATE(41)] = 1281,
  [SMALL_STATE(42)] = 1324,
  [SMALL_STATE(43)] = 1367,
  [SMALL_STATE(44)] = 1410,
  [SMALL_STATE(45)] = 1453,
  [SMALL_STATE(46)] = 1496,
  [SMALL_STATE(47)] = 1539,
  [SMALL_STATE(48)] = 1582,
  [SMALL_STATE(49)] = 1625,
  [SMALL_STATE(50)] = 1668,
  [SMALL_STATE(51)] = 1711,
  [SMALL_STATE(52)] = 1754,
  [SMALL_STATE(53)] = 1797,
  [SMALL_STATE(54)] = 1840,
  [SMALL_STATE(55)] = 1883,
  [SMALL_STATE(56)] = 1926,
  [SMALL_STATE(57)] = 1969,
  [SMALL_STATE(58)] = 2012,
  [SMALL_STATE(59)] = 2052,
  [SMALL_STATE(60)] = 2092,
  [SMALL_STATE(61)] = 2106,
  [SMALL_STATE(62)] = 2120,
  [SMALL_STATE(63)] = 2132,
  [SMALL_STATE(64)] = 2145,
  [SMALL_STATE(65)] = 2156,
  [SMALL_STATE(66)] = 2167,
  [SMALL_STATE(67)] = 2176,
  [SMALL_STATE(68)] = 2186,
  [SMALL_STATE(69)] = 2196,
  [SMALL_STATE(70)] = 2204,
  [SMALL_STATE(71)] = 2214,
  [SMALL_STATE(72)] = 2222,
  [SMALL_STATE(73)] = 2232,
  [SMALL_STATE(74)] = 2240,
  [SMALL_STATE(75)] = 2248,
  [SMALL_STATE(76)] = 2256,
  [SMALL_STATE(77)] = 2264,
  [SMALL_STATE(78)] = 2272,
  [SMALL_STATE(79)] = 2280,
  [SMALL_STATE(80)] = 2288,
  [SMALL_STATE(81)] = 2296,
  [SMALL_STATE(82)] = 2304,
  [SMALL_STATE(83)] = 2312,
  [SMALL_STATE(84)] = 2320,
  [SMALL_STATE(85)] = 2328,
  [SMALL_STATE(86)] = 2336,
  [SMALL_STATE(87)] = 2344,
  [SMALL_STATE(88)] = 2352,
  [SMALL_STATE(89)] = 2360,
  [SMALL_STATE(90)] = 2368,
  [SMALL_STATE(91)] = 2376,
  [SMALL_STATE(92)] = 2384,
  [SMALL_STATE(93)] = 2392,
  [SMALL_STATE(94)] = 2400,
  [SMALL_STATE(95)] = 2408,
  [SMALL_STATE(96)] = 2416,
  [SMALL_STATE(97)] = 2424,
  [SMALL_STATE(98)] = 2432,
  [SMALL_STATE(99)] = 2440,
  [SMALL_STATE(100)] = 2448,
  [SMALL_STATE(101)] = 2456,
  [SMALL_STATE(102)] = 2464,
  [SMALL_STATE(103)] = 2472,
  [SMALL_STATE(104)] = 2480,
  [SMALL_STATE(105)] = 2488,
  [SMALL_STATE(106)] = 2496,
  [SMALL_STATE(107)] = 2504,
  [SMALL_STATE(108)] = 2512,
  [SMALL_STATE(109)] = 2517,
  [SMALL_STATE(110)] = 2522,
  [SMALL_STATE(111)] = 2527,
  [SMALL_STATE(112)] = 2531,
  [SMALL_STATE(113)] = 2535,
  [SMALL_STATE(114)] = 2539,
  [SMALL_STATE(115)] = 2543,
  [SMALL_STATE(116)] = 2547,
  [SMALL_STATE(117)] = 2551,
  [SMALL_STATE(118)] = 2555,
  [SMALL_STATE(119)] = 2559,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(58),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(100),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(59),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_command, 3, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_command, 3, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineimage_command, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_block, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_block, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 9, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 9, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_block_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2), SHIFT_REPEAT(72),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legalese_block, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legalese_block, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_block, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_block, 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 8, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 8, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_details_block, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_details_block, 4),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 8, .production_id = 7),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 8, .production_id = 7),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 5, .production_id = 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 5, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_command, 4, .production_id = 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_command, 4, .production_id = 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineimage_command, 4, .production_id = 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineimage_command, 4, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 5, .production_id = 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 5, .production_id = 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 5),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 5, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 5, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_command, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_command, 3),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 5),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 5, .production_id = 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 5, .production_id = 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 7, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 7, .production_id = 5),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legalese_block, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legalese_block, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotation_block, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotation_block, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 4),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 4),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotation_block, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotation_block, 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 5),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_details_block, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_details_block, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_command, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_command, 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 5, .production_id = 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5, .production_id = 5),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markup, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 6, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 6, .production_id = 4),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 6, .production_id = 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 6, .production_id = 4),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 6, .production_id = 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 6, .production_id = 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 6, .production_id = 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 6, .production_id = 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 6, .production_id = 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 6, .production_id = 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [376] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_qdoc_external_scanner_create(void);
void tree_sitter_qdoc_external_scanner_destroy(void *);
bool tree_sitter_qdoc_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_qdoc_external_scanner_serialize(void *, char *);
void tree_sitter_qdoc_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qdoc(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_qdoc_external_scanner_create,
      tree_sitter_qdoc_external_scanner_destroy,
      tree_sitter_qdoc_external_scanner_scan,
      tree_sitter_qdoc_external_scanner_serialize,
      tree_sitter_qdoc_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
