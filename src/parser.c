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
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

enum {
  sym_line_comment = 1,
  anon_sym_SLASH_STAR_BANG = 2,
  anon_sym_STAR_SLASH = 3,
  anon_sym_BSLASH = 4,
  anon_sym_list = 5,
  anon_sym_endlist = 6,
  anon_sym_table = 7,
  anon_sym_endtable = 8,
  anon_sym_raw = 9,
  anon_sym_endraw = 10,
  anon_sym_legalese = 11,
  anon_sym_endlegalese = 12,
  anon_sym_quotation = 13,
  anon_sym_endquotation = 14,
  anon_sym_omit = 15,
  anon_sym_endomit = 16,
  anon_sym_div = 17,
  anon_sym_enddiv = 18,
  anon_sym_details = 19,
  anon_sym_enddetails = 20,
  anon_sym_if = 21,
  anon_sym_else = 22,
  anon_sym_endif = 23,
  sym_raw_content_chunk = 24,
  anon_sym_l = 25,
  sym_link_hints = 26,
  aux_sym_link_alias_token1 = 27,
  sym_command_name = 28,
  sym_inline_command_name = 29,
  sym_macro_name = 30,
  anon_sym_image = 31,
  anon_sym_inlineimage = 32,
  sym_block_argument = 33,
  sym_cell_span = 34,
  sym_command_argument = 35,
  sym_inline_text = 36,
  sym_text = 37,
  sym_brace_group = 38,
  sym_image_filename = 39,
  sym_image_alt_text = 40,
  sym_source_file = 41,
  sym_comment = 42,
  sym_block_comment = 43,
  sym_markup = 44,
  sym_block_command = 45,
  sym_list_block = 46,
  sym_table_block = 47,
  sym_raw_block = 48,
  sym_legalese_block = 49,
  sym_quotation_block = 50,
  sym_omit_block = 51,
  sym_div_block = 52,
  sym_details_block = 53,
  sym_if_block = 54,
  sym_command = 55,
  sym_inline_command = 56,
  sym_link_command = 57,
  sym_link_alias = 58,
  sym_image_command = 59,
  sym_inlineimage_command = 60,
  sym_image_alt = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_block_comment_repeat1 = 63,
  aux_sym_raw_block_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_line_comment] = "line_comment",
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
  [anon_sym_l] = "l",
  [sym_link_hints] = "link_hints",
  [aux_sym_link_alias_token1] = "link_alias_token1",
  [sym_command_name] = "command_name",
  [sym_inline_command_name] = "inline_command_name",
  [sym_macro_name] = "macro_name",
  [anon_sym_image] = "image",
  [anon_sym_inlineimage] = "inlineimage",
  [sym_block_argument] = "block_argument",
  [sym_cell_span] = "cell_span",
  [sym_command_argument] = "command_argument",
  [sym_inline_text] = "inline_text",
  [sym_text] = "text",
  [sym_brace_group] = "brace_group",
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
  [sym_link_command] = "link_command",
  [sym_link_alias] = "link_alias",
  [sym_image_command] = "image_command",
  [sym_inlineimage_command] = "inlineimage_command",
  [sym_image_alt] = "image_alt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_raw_block_repeat1] = "raw_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_line_comment] = sym_line_comment,
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
  [anon_sym_l] = anon_sym_l,
  [sym_link_hints] = sym_link_hints,
  [aux_sym_link_alias_token1] = aux_sym_link_alias_token1,
  [sym_command_name] = sym_command_name,
  [sym_inline_command_name] = sym_inline_command_name,
  [sym_macro_name] = sym_macro_name,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_inlineimage] = anon_sym_inlineimage,
  [sym_block_argument] = sym_block_argument,
  [sym_cell_span] = sym_cell_span,
  [sym_command_argument] = sym_command_argument,
  [sym_inline_text] = sym_inline_text,
  [sym_text] = sym_text,
  [sym_brace_group] = sym_brace_group,
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
  [sym_link_command] = sym_link_command,
  [sym_link_alias] = sym_link_alias,
  [sym_image_command] = sym_image_command,
  [sym_inlineimage_command] = sym_inlineimage_command,
  [sym_image_alt] = sym_image_alt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_raw_block_repeat1] = aux_sym_raw_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
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
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [sym_link_hints] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_alias_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
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
  [sym_brace_group] = {
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
  [sym_link_command] = {
    .visible = true,
    .named = true,
  },
  [sym_link_alias] = {
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
  [sym_image_alt] = {
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
  field_alias = 1,
  field_alt = 2,
  field_arg = 3,
  field_condition = 4,
  field_else = 5,
  field_filename = 6,
  field_hints = 7,
  field_span = 8,
  field_target = 9,
  field_then = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_alt] = "alt",
  [field_arg] = "arg",
  [field_condition] = "condition",
  [field_else] = "else",
  [field_filename] = "filename",
  [field_hints] = "hints",
  [field_span] = "span",
  [field_target] = "target",
  [field_then] = "then",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 1},
  [8] = {.index = 10, .length = 1},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_target, 2},
  [1] =
    {field_span, 2},
  [2] =
    {field_filename, 2},
  [3] =
    {field_hints, 2},
    {field_target, 3},
  [5] =
    {field_alias, 3},
    {field_target, 2},
  [7] =
    {field_alt, 3},
    {field_filename, 2},
  [9] =
    {field_arg, 2},
  [10] =
    {field_condition, 2},
  [11] =
    {field_alias, 4},
    {field_hints, 2},
    {field_target, 3},
  [14] =
    {field_condition, 2},
    {field_then, 3},
  [16] =
    {field_condition, 2},
    {field_else, 5},
  [18] =
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
  [65] = 65,
  [66] = 66,
  [67] = 64,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0) ADVANCE(572);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(1);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(569);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(564);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(569);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '}') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '[') ADVANCE(566);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(567);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == ']') ADVANCE(70);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(221);
      if (lookahead == 'h') ADVANCE(224);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 'r') ADVANCE(107);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(290);
      if (lookahead == 'v') ADVANCE(109);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 29:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(555);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(567);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(573);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == '}') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(553);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(72);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(565);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_endlist);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_table);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_endtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_raw);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_legalese);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_endlegalese);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_quotation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_endquotation);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_omit);
      if (lookahead == 'v') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_endomit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_div);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_enddiv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_details);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_enddetails);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_endif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead == '}') ADVANCE(553);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(555);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_raw_content_chunk);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_link_hints);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_link_hints);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(567);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_link_alias_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'c') ADVANCE(325);
      if (lookahead == 'd') ADVANCE(223);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(548);
      if (lookahead == 'v') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'v') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'w') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_command_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead == 't') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'l') ADVANCE(471);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(525);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (lookahead == 't') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_inline_command_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'k') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(543);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(460);
      if (lookahead == 'i') ADVANCE(513);
      if (lookahead == 'm' ||
          lookahead == 't') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'y') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(444);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(532);
      if (lookahead == 'n') ADVANCE(453);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == 'i') ADVANCE(360);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'q') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'a') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == 't') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(338);
      if (lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'b') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead == 'g') ADVANCE(438);
      if (lookahead == 'h') ADVANCE(222);
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == 'm') ADVANCE(419);
      if (lookahead == 'q') ADVANCE(357);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 't') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'c') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'l') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == 'q') ADVANCE(538);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(346);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(502);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(375);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(516);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'f') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'h') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'k') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'k') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 't') ADVANCE(394);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(226);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'n') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'p') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'q') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 's') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'u') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'v') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'v') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'v') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'w') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'w') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'w') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'x') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'y') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == 'y') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_name);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_image);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_inlineimage);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(550);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_block_argument);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_block_argument);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_block_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_cell_span);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == ',') ADVANCE(561);
      if (lookahead == '}') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '}') ADVANCE(556);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '}') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '}') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '}') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead == '*' ||
          lookahead == '\\' ||
          lookahead == '{') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead != 0) ADVANCE(563);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_command_argument);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_inline_text);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '\\' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(13);
      if (lookahead != 0) ADVANCE(566);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(554);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(563);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(572);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_brace_group);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 19},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 15},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 2, .external_lex_state = 2},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 26},
  [119] = {.lex_state = 31},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 31},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 30},
  [124] = {.lex_state = 31},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 26},
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
    [sym_line_comment] = ACTIONS(1),
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
    [anon_sym_l] = ACTIONS(1),
    [sym_link_hints] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_inline_command_name] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_inlineimage] = ACTIONS(1),
    [sym_cell_span] = ACTIONS(1),
    [sym_brace_group] = ACTIONS(1),
    [sym_image_filename] = ACTIONS(1),
    [sym_image_alt_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(125),
    [sym_comment] = STATE(63),
    [sym_block_comment] = STATE(116),
    [aux_sym_source_file_repeat1] = STATE(63),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
    [anon_sym_SLASH_STAR_BANG] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym_block_argument,
    ACTIONS(13), 2,
      sym_text,
      sym_brace_group,
    STATE(31), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [34] = 7,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(15), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_text,
    STATE(7), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [70] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(26), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_brace_group,
    STATE(4), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [106] = 6,
    ACTIONS(32), 1,
      anon_sym_BSLASH,
    ACTIONS(34), 1,
      sym_block_argument,
    ACTIONS(13), 2,
      sym_text,
      sym_brace_group,
    STATE(20), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [140] = 6,
    ACTIONS(36), 1,
      anon_sym_BSLASH,
    ACTIONS(38), 1,
      sym_block_argument,
    ACTIONS(13), 2,
      sym_text,
      sym_brace_group,
    STATE(30), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [174] = 7,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(40), 1,
      anon_sym_STAR_SLASH,
    STATE(4), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [210] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(42), 1,
      anon_sym_BSLASH,
    STATE(25), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [243] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(44), 1,
      anon_sym_BSLASH,
    STATE(14), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [276] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(46), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [309] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(48), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [342] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [375] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(52), 1,
      anon_sym_BSLASH,
    STATE(11), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [408] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(54), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [441] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(56), 1,
      anon_sym_BSLASH,
    STATE(28), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [474] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    STATE(27), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [507] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    STATE(24), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [540] = 6,
    ACTIONS(26), 1,
      sym_text,
    ACTIONS(29), 1,
      sym_brace_group,
    ACTIONS(62), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [573] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(65), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [606] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(67), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [639] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    STATE(12), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [672] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(71), 1,
      anon_sym_BSLASH,
    STATE(19), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [705] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(73), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [738] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(75), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [771] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(77), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [804] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(79), 1,
      anon_sym_BSLASH,
    STATE(23), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [837] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(81), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [870] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [903] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    STATE(10), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [936] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(87), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [969] = 6,
    ACTIONS(13), 1,
      sym_brace_group,
    ACTIONS(19), 1,
      sym_text,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    STATE(18), 2,
      sym_markup,
      aux_sym_block_comment_repeat1,
    STATE(70), 6,
      sym_block_command,
      sym_command,
      sym_inline_command,
      sym_link_command,
      sym_image_command,
      sym_inlineimage_command,
    STATE(74), 9,
      sym_list_block,
      sym_table_block,
      sym_raw_block,
      sym_legalese_block,
      sym_quotation_block,
      sym_omit_block,
      sym_div_block,
      sym_details_block,
      sym_if_block,
  [1002] = 16,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_else,
    ACTIONS(111), 1,
      anon_sym_endif,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1052] = 16,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(125), 1,
      anon_sym_endif,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1102] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(127), 1,
      anon_sym_endlist,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1149] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(129), 1,
      anon_sym_enddetails,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1196] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(131), 1,
      anon_sym_endlist,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1243] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(133), 1,
      anon_sym_endlegalese,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1290] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(135), 1,
      anon_sym_endomit,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1337] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(137), 1,
      anon_sym_endquotation,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1384] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(139), 1,
      anon_sym_endlist,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1431] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(141), 1,
      anon_sym_endquotation,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1478] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(143), 1,
      anon_sym_enddiv,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1525] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(145), 1,
      anon_sym_enddiv,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1572] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(147), 1,
      anon_sym_enddiv,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1619] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(149), 1,
      anon_sym_endlegalese,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1666] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(151), 1,
      anon_sym_enddetails,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1713] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(153), 1,
      anon_sym_endif,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1760] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(155), 1,
      anon_sym_endif,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1807] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(157), 1,
      anon_sym_endtable,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1854] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(159), 1,
      anon_sym_endomit,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1901] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(161), 1,
      anon_sym_endtable,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1948] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(163), 1,
      anon_sym_endif,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [1995] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(165), 1,
      anon_sym_endtable,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2042] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(167), 1,
      anon_sym_endlist,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2089] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(169), 1,
      anon_sym_endif,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2136] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(171), 1,
      anon_sym_enddiv,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2183] = 15,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(173), 1,
      anon_sym_endtable,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2230] = 14,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(175), 2,
      sym_command_name,
      sym_macro_name,
  [2274] = 14,
    ACTIONS(91), 1,
      anon_sym_list,
    ACTIONS(93), 1,
      anon_sym_table,
    ACTIONS(95), 1,
      anon_sym_raw,
    ACTIONS(97), 1,
      anon_sym_legalese,
    ACTIONS(99), 1,
      anon_sym_quotation,
    ACTIONS(101), 1,
      anon_sym_omit,
    ACTIONS(103), 1,
      anon_sym_div,
    ACTIONS(105), 1,
      anon_sym_details,
    ACTIONS(107), 1,
      anon_sym_if,
    ACTIONS(113), 1,
      anon_sym_l,
    ACTIONS(117), 1,
      sym_inline_command_name,
    ACTIONS(119), 1,
      anon_sym_image,
    ACTIONS(121), 1,
      anon_sym_inlineimage,
    ACTIONS(115), 2,
      sym_command_name,
      sym_macro_name,
  [2318] = 3,
    ACTIONS(179), 1,
      aux_sym_link_alias_token1,
    STATE(88), 1,
      sym_image_alt,
    ACTIONS(177), 4,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
      sym_brace_group,
  [2331] = 5,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      sym_line_comment,
    ACTIONS(186), 1,
      anon_sym_SLASH_STAR_BANG,
    STATE(116), 1,
      sym_block_comment,
    STATE(61), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2348] = 3,
    ACTIONS(191), 1,
      aux_sym_link_alias_token1,
    STATE(108), 1,
      sym_link_alias,
    ACTIONS(189), 4,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
      sym_brace_group,
  [2361] = 5,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_BANG,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_line_comment,
    STATE(116), 1,
      sym_block_comment,
    STATE(61), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [2378] = 3,
    ACTIONS(199), 1,
      sym_cell_span,
    ACTIONS(201), 1,
      sym_command_argument,
    ACTIONS(197), 4,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
      sym_brace_group,
  [2391] = 3,
    ACTIONS(191), 1,
      aux_sym_link_alias_token1,
    STATE(85), 1,
      sym_link_alias,
    ACTIONS(203), 4,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_text,
      sym_brace_group,
  [2404] = 3,
    ACTIONS(207), 1,
      sym_text,
    ACTIONS(209), 1,
      sym_image_alt_text,
    ACTIONS(205), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2416] = 3,
    ACTIONS(199), 1,
      sym_cell_span,
    ACTIONS(201), 1,
      sym_command_argument,
    ACTIONS(197), 3,
      anon_sym_BSLASH,
      sym_text,
      sym_brace_group,
  [2428] = 2,
    ACTIONS(213), 1,
      sym_text,
    ACTIONS(211), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2437] = 2,
    ACTIONS(217), 1,
      sym_text,
    ACTIONS(215), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2446] = 2,
    ACTIONS(221), 1,
      sym_text,
    ACTIONS(219), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2455] = 2,
    ACTIONS(225), 1,
      sym_text,
    ACTIONS(223), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2464] = 2,
    ACTIONS(229), 1,
      sym_text,
    ACTIONS(227), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2473] = 2,
    ACTIONS(233), 1,
      sym_text,
    ACTIONS(231), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2482] = 2,
    ACTIONS(237), 1,
      sym_text,
    ACTIONS(235), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2491] = 2,
    ACTIONS(241), 1,
      sym_text,
    ACTIONS(239), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2500] = 2,
    ACTIONS(245), 1,
      sym_text,
    ACTIONS(243), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2509] = 2,
    ACTIONS(249), 1,
      sym_text,
    ACTIONS(247), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2518] = 2,
    ACTIONS(253), 1,
      sym_text,
    ACTIONS(251), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2527] = 2,
    ACTIONS(257), 1,
      sym_text,
    ACTIONS(255), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2536] = 2,
    ACTIONS(261), 1,
      sym_text,
    ACTIONS(259), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2545] = 2,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(263), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2554] = 2,
    ACTIONS(269), 1,
      sym_text,
    ACTIONS(267), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2563] = 2,
    ACTIONS(273), 1,
      sym_text,
    ACTIONS(271), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2572] = 2,
    ACTIONS(277), 1,
      sym_text,
    ACTIONS(275), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2581] = 2,
    ACTIONS(281), 1,
      sym_text,
    ACTIONS(279), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2590] = 2,
    ACTIONS(285), 1,
      sym_text,
    ACTIONS(283), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2599] = 2,
    ACTIONS(289), 1,
      sym_text,
    ACTIONS(287), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2608] = 2,
    ACTIONS(293), 1,
      sym_text,
    ACTIONS(291), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2617] = 2,
    ACTIONS(297), 1,
      sym_text,
    ACTIONS(295), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2626] = 4,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      sym_raw_content_chunk,
    ACTIONS(303), 1,
      sym_block_argument,
    STATE(112), 1,
      aux_sym_raw_block_repeat1,
  [2639] = 2,
    ACTIONS(307), 1,
      sym_text,
    ACTIONS(305), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2648] = 2,
    ACTIONS(311), 1,
      sym_text,
    ACTIONS(309), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2657] = 2,
    ACTIONS(315), 1,
      sym_text,
    ACTIONS(313), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2666] = 2,
    ACTIONS(319), 1,
      sym_text,
    ACTIONS(317), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2675] = 2,
    ACTIONS(323), 1,
      sym_text,
    ACTIONS(321), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2684] = 2,
    ACTIONS(327), 1,
      sym_text,
    ACTIONS(325), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2693] = 2,
    ACTIONS(331), 1,
      sym_text,
    ACTIONS(329), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2702] = 2,
    ACTIONS(335), 1,
      sym_text,
    ACTIONS(333), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2711] = 2,
    ACTIONS(339), 1,
      sym_text,
    ACTIONS(337), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2720] = 2,
    ACTIONS(343), 1,
      sym_text,
    ACTIONS(341), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2729] = 2,
    ACTIONS(347), 1,
      sym_text,
    ACTIONS(345), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2738] = 2,
    ACTIONS(351), 1,
      sym_text,
    ACTIONS(349), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2747] = 2,
    ACTIONS(355), 1,
      sym_text,
    ACTIONS(353), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2756] = 2,
    ACTIONS(359), 1,
      sym_text,
    ACTIONS(357), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2765] = 2,
    ACTIONS(363), 1,
      sym_text,
    ACTIONS(361), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2774] = 2,
    ACTIONS(367), 1,
      sym_text,
    ACTIONS(365), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2783] = 2,
    ACTIONS(371), 1,
      sym_text,
    ACTIONS(369), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2792] = 2,
    ACTIONS(375), 1,
      sym_text,
    ACTIONS(373), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2801] = 2,
    ACTIONS(379), 1,
      sym_text,
    ACTIONS(377), 3,
      anon_sym_STAR_SLASH,
      anon_sym_BSLASH,
      sym_brace_group,
  [2810] = 1,
    ACTIONS(381), 3,
      ts_builtin_sym_end,
      sym_line_comment,
      anon_sym_SLASH_STAR_BANG,
  [2816] = 3,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      sym_raw_content_chunk,
    STATE(114), 1,
      aux_sym_raw_block_repeat1,
  [2826] = 3,
    ACTIONS(387), 1,
      anon_sym_BSLASH,
    ACTIONS(389), 1,
      sym_raw_content_chunk,
    STATE(113), 1,
      aux_sym_raw_block_repeat1,
  [2836] = 3,
    ACTIONS(391), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      sym_raw_content_chunk,
    STATE(113), 1,
      aux_sym_raw_block_repeat1,
  [2846] = 3,
    ACTIONS(389), 1,
      sym_raw_content_chunk,
    ACTIONS(396), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      aux_sym_raw_block_repeat1,
  [2856] = 1,
    ACTIONS(398), 3,
      ts_builtin_sym_end,
      sym_line_comment,
      anon_sym_SLASH_STAR_BANG,
  [2862] = 1,
    ACTIONS(400), 3,
      ts_builtin_sym_end,
      sym_line_comment,
      anon_sym_SLASH_STAR_BANG,
  [2868] = 2,
    ACTIONS(402), 1,
      sym_link_hints,
    ACTIONS(404), 1,
      sym_inline_text,
  [2875] = 1,
    ACTIONS(406), 1,
      anon_sym_endraw,
  [2879] = 1,
    ACTIONS(408), 1,
      sym_inline_text,
  [2883] = 1,
    ACTIONS(410), 1,
      sym_image_filename,
  [2887] = 1,
    ACTIONS(412), 1,
      sym_inline_text,
  [2891] = 1,
    ACTIONS(414), 1,
      anon_sym_endraw,
  [2895] = 1,
    ACTIONS(416), 1,
      sym_block_argument,
  [2899] = 1,
    ACTIONS(418), 1,
      sym_inline_text,
  [2903] = 1,
    ACTIONS(420), 1,
      ts_builtin_sym_end,
  [2907] = 1,
    ACTIONS(422), 1,
      anon_sym_endraw,
  [2911] = 1,
    ACTIONS(424), 1,
      anon_sym_endraw,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 106,
  [SMALL_STATE(6)] = 140,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 276,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 342,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 408,
  [SMALL_STATE(15)] = 441,
  [SMALL_STATE(16)] = 474,
  [SMALL_STATE(17)] = 507,
  [SMALL_STATE(18)] = 540,
  [SMALL_STATE(19)] = 573,
  [SMALL_STATE(20)] = 606,
  [SMALL_STATE(21)] = 639,
  [SMALL_STATE(22)] = 672,
  [SMALL_STATE(23)] = 705,
  [SMALL_STATE(24)] = 738,
  [SMALL_STATE(25)] = 771,
  [SMALL_STATE(26)] = 804,
  [SMALL_STATE(27)] = 837,
  [SMALL_STATE(28)] = 870,
  [SMALL_STATE(29)] = 903,
  [SMALL_STATE(30)] = 936,
  [SMALL_STATE(31)] = 969,
  [SMALL_STATE(32)] = 1002,
  [SMALL_STATE(33)] = 1052,
  [SMALL_STATE(34)] = 1102,
  [SMALL_STATE(35)] = 1149,
  [SMALL_STATE(36)] = 1196,
  [SMALL_STATE(37)] = 1243,
  [SMALL_STATE(38)] = 1290,
  [SMALL_STATE(39)] = 1337,
  [SMALL_STATE(40)] = 1384,
  [SMALL_STATE(41)] = 1431,
  [SMALL_STATE(42)] = 1478,
  [SMALL_STATE(43)] = 1525,
  [SMALL_STATE(44)] = 1572,
  [SMALL_STATE(45)] = 1619,
  [SMALL_STATE(46)] = 1666,
  [SMALL_STATE(47)] = 1713,
  [SMALL_STATE(48)] = 1760,
  [SMALL_STATE(49)] = 1807,
  [SMALL_STATE(50)] = 1854,
  [SMALL_STATE(51)] = 1901,
  [SMALL_STATE(52)] = 1948,
  [SMALL_STATE(53)] = 1995,
  [SMALL_STATE(54)] = 2042,
  [SMALL_STATE(55)] = 2089,
  [SMALL_STATE(56)] = 2136,
  [SMALL_STATE(57)] = 2183,
  [SMALL_STATE(58)] = 2230,
  [SMALL_STATE(59)] = 2274,
  [SMALL_STATE(60)] = 2318,
  [SMALL_STATE(61)] = 2331,
  [SMALL_STATE(62)] = 2348,
  [SMALL_STATE(63)] = 2361,
  [SMALL_STATE(64)] = 2378,
  [SMALL_STATE(65)] = 2391,
  [SMALL_STATE(66)] = 2404,
  [SMALL_STATE(67)] = 2416,
  [SMALL_STATE(68)] = 2428,
  [SMALL_STATE(69)] = 2437,
  [SMALL_STATE(70)] = 2446,
  [SMALL_STATE(71)] = 2455,
  [SMALL_STATE(72)] = 2464,
  [SMALL_STATE(73)] = 2473,
  [SMALL_STATE(74)] = 2482,
  [SMALL_STATE(75)] = 2491,
  [SMALL_STATE(76)] = 2500,
  [SMALL_STATE(77)] = 2509,
  [SMALL_STATE(78)] = 2518,
  [SMALL_STATE(79)] = 2527,
  [SMALL_STATE(80)] = 2536,
  [SMALL_STATE(81)] = 2545,
  [SMALL_STATE(82)] = 2554,
  [SMALL_STATE(83)] = 2563,
  [SMALL_STATE(84)] = 2572,
  [SMALL_STATE(85)] = 2581,
  [SMALL_STATE(86)] = 2590,
  [SMALL_STATE(87)] = 2599,
  [SMALL_STATE(88)] = 2608,
  [SMALL_STATE(89)] = 2617,
  [SMALL_STATE(90)] = 2626,
  [SMALL_STATE(91)] = 2639,
  [SMALL_STATE(92)] = 2648,
  [SMALL_STATE(93)] = 2657,
  [SMALL_STATE(94)] = 2666,
  [SMALL_STATE(95)] = 2675,
  [SMALL_STATE(96)] = 2684,
  [SMALL_STATE(97)] = 2693,
  [SMALL_STATE(98)] = 2702,
  [SMALL_STATE(99)] = 2711,
  [SMALL_STATE(100)] = 2720,
  [SMALL_STATE(101)] = 2729,
  [SMALL_STATE(102)] = 2738,
  [SMALL_STATE(103)] = 2747,
  [SMALL_STATE(104)] = 2756,
  [SMALL_STATE(105)] = 2765,
  [SMALL_STATE(106)] = 2774,
  [SMALL_STATE(107)] = 2783,
  [SMALL_STATE(108)] = 2792,
  [SMALL_STATE(109)] = 2801,
  [SMALL_STATE(110)] = 2810,
  [SMALL_STATE(111)] = 2816,
  [SMALL_STATE(112)] = 2826,
  [SMALL_STATE(113)] = 2836,
  [SMALL_STATE(114)] = 2846,
  [SMALL_STATE(115)] = 2856,
  [SMALL_STATE(116)] = 2862,
  [SMALL_STATE(117)] = 2868,
  [SMALL_STATE(118)] = 2875,
  [SMALL_STATE(119)] = 2879,
  [SMALL_STATE(120)] = 2883,
  [SMALL_STATE(121)] = 2887,
  [SMALL_STATE(122)] = 2891,
  [SMALL_STATE(123)] = 2895,
  [SMALL_STATE(124)] = 2899,
  [SMALL_STATE(125)] = 2903,
  [SMALL_STATE(126)] = 2907,
  [SMALL_STATE(127)] = 2911,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(58),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(70),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(70),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineimage_command, 3, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_command, 4, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_command, 3, .production_id = 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_command, 3, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_command, 3, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 4),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legalese_block, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legalese_block, 5),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markup, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotation_block, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotation_block, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 9, .production_id = 12),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 9, .production_id = 12),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_block, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_block, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_command, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_command, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 8, .production_id = 10),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 8, .production_id = 10),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 8, .production_id = 11),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 8, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 4),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_details_block, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_details_block, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_command, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_command, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_alias, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_alias, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_command, 4, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_command, 4, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_command, 4, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_command, 4, .production_id = 6),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_image_alt, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_image_alt, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inlineimage_command, 4, .production_id = 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inlineimage_command, 4, .production_id = 6),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 5, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 5, .production_id = 7),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 5),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 5, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 5, .production_id = 7),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 7, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 7, .production_id = 8),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 5, .production_id = 7),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 5, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 6, .production_id = 10),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 6, .production_id = 10),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 5),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legalese_block, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legalese_block, 4),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quotation_block, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quotation_block, 5),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_omit_block, 5),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_omit_block, 5),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 5, .production_id = 7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 5, .production_id = 7),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 6, .production_id = 7),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 6, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_div_block, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_block, 5),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_details_block, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_details_block, 5),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_block, 6, .production_id = 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_block, 6, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 5, .production_id = 8),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5, .production_id = 8),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_block, 6, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_block, 6, .production_id = 7),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link_command, 5, .production_id = 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_command, 5, .production_id = 9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_block, 6, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_block, 6, .production_id = 7),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_block_repeat1, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_block_repeat1, 2), SHIFT_REPEAT(113),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [420] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
