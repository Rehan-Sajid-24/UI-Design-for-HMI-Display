/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:/Users/Rehan/Desktop/Revive Medical Technonologies/SquareLine Studio/TEST_Project/assets/Open 24 Display St.ttf -o C:/Users/Rehan/Desktop/Revive Medical Technonologies/SquareLine Studio/TEST_Project/assets\ui_font_Displaysmaller.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DISPLAYSMALLER
#define UI_FONT_DISPLAYSMALLER 1
#endif

#if UI_FONT_DISPLAYSMALLER

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xbf, 0xef, 0xfc, 0xbc,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x0, 0x61, 0x80, 0x18, 0x20, 0x2, 0xc, 0x0,
    0xc3, 0x3, 0xd7, 0x5e, 0x6, 0x18, 0x1, 0x83,
    0x0, 0x30, 0xc0, 0x4, 0x18, 0x1d, 0xba, 0xf0,
    0x30, 0xc0, 0xc, 0x18, 0x1, 0x6, 0x0, 0x20,
    0xc0, 0x0,

    /* U+0024 "$" */
    0x10, 0x18, 0x18, 0xfe, 0xc0, 0xd8, 0xd8, 0xd8,
    0xc0, 0x7e, 0x1, 0x3, 0x1b, 0x1b, 0x1b, 0x3,
    0x7f, 0x18, 0x18, 0x8,

    /* U+0025 "%" */
    0xc3, 0xa3, 0x66, 0x4, 0xc, 0x8, 0x18, 0x10,
    0x30, 0x20, 0x60, 0x66, 0xc5, 0x83,

    /* U+0026 "&" */
    0x7a, 0x6, 0x60, 0x66, 0x6, 0x60, 0x1c, 0x0,
    0x0, 0xff, 0xc, 0x30, 0xc3, 0xc, 0x3f, 0xc3,
    0xc, 0x3f, 0x81, 0x7, 0xe0,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x7e, 0x31, 0x8c, 0x63, 0x0, 0x86, 0x31, 0x8c,
    0x3c,

    /* U+0029 ")" */
    0xf0, 0xc6, 0x31, 0x8c, 0x61, 0x8, 0xc6, 0x31,
    0xf8,

    /* U+002A "*" */
    0x0, 0xf8, 0x7, 0xe7, 0x8a, 0x84, 0x0,

    /* U+002B "+" */
    0x10, 0x18, 0x18, 0x18, 0x0, 0x7e, 0x18, 0x18,
    0x18, 0x8,

    /* U+002C "," */
    0x7a,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0x70,

    /* U+002F "/" */
    0x2, 0x6, 0x4, 0xc, 0x8, 0x18, 0x10, 0x30,
    0x20, 0x60, 0x40, 0xc0, 0x80, 0x80,

    /* U+0030 "0" */
    0xff, 0xc3, 0xc3, 0xcb, 0xcb, 0xcb, 0x99, 0x99,
    0xd3, 0xd3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0031 "1" */
    0x1b, 0xff, 0xb1, 0x8c, 0x41, 0x18, 0xc6, 0x31,
    0x84,

    /* U+0032 "2" */
    0x7f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0xfe,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+0033 "3" */
    0x7f, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7f, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7f,

    /* U+0034 "4" */
    0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7e, 0x1,
    0x3, 0x3, 0x3, 0x3, 0x1,

    /* U+0035 "5" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x7e, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7f,

    /* U+0036 "6" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0037 "7" */
    0x7f, 0x3, 0x3, 0x3, 0x3, 0x1, 0x0, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3,

    /* U+0038 "8" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0039 "9" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x7f,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7f,

    /* U+003A ":" */
    0x30, 0x0, 0x7,

    /* U+003B ";" */
    0x30, 0x0, 0x7, 0xa0,

    /* U+003C "<" */
    0x8, 0xe7, 0x30, 0x41, 0xc3, 0x82,

    /* U+003D "=" */
    0xfc, 0x0, 0x0, 0xfc,

    /* U+003E ">" */
    0xc3, 0x83, 0x82, 0x18, 0xee, 0x30,

    /* U+003F "?" */
    0xfe, 0xc, 0x18, 0x30, 0x60, 0xff, 0x0, 0xc1,
    0x83, 0x0, 0xc, 0x0,

    /* U+0040 "@" */
    0xff, 0xc3, 0xc3, 0xc3, 0xf3, 0xcb, 0x89, 0x30,
    0xeb, 0xd3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0041 "A" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+0042 "B" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0043 "C" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+0044 "D" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0045 "E" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+0046 "F" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80,

    /* U+0047 "G" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x8e, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0048 "H" */
    0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+0049 "I" */
    0xbf, 0xf9, 0xff, 0xd0,

    /* U+004A "J" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x0, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+004B "K" */
    0x80, 0xc0, 0xc3, 0xc6, 0xcc, 0xd8, 0xc0, 0xff,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+004C "L" */
    0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x0, 0x80,
    0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+004D "M" */
    0xff, 0xff, 0x86, 0xf, 0xc, 0x1e, 0x18, 0x3c,
    0x30, 0x70, 0x20, 0x40, 0x0, 0x61, 0x83, 0xc3,
    0x7, 0x86, 0xf, 0xc, 0x1e, 0x18, 0x3c, 0x30,
    0x60,

    /* U+004E "N" */
    0x81, 0xc3, 0xf3, 0xf3, 0xdb, 0xcf, 0x85, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81,

    /* U+004F "O" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0050 "P" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80,

    /* U+0051 "Q" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xd3, 0xdb, 0xff, 0x18, 0x18,

    /* U+0052 "R" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc8,
    0xc4, 0xc4, 0xc6, 0xc2, 0xc3,

    /* U+0053 "S" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x7e, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7f,

    /* U+0054 "T" */
    0xff, 0x0, 0x18, 0x18, 0x18, 0x18, 0x10, 0x0,
    0x8, 0x18, 0x18, 0x18, 0x18,

    /* U+0055 "U" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x0, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0056 "V" */
    0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81,
    0x0, 0xc3, 0x66, 0x64, 0x3c, 0x18,

    /* U+0057 "W" */
    0xc3, 0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xe0, 0x81, 0x0, 0x3,
    0x8, 0x36, 0x79, 0x99, 0x34, 0x3c, 0xf0, 0x61,
    0x80,

    /* U+0058 "X" */
    0xc3, 0x46, 0x6c, 0x3c, 0x28, 0x0, 0x7e, 0x0,
    0x38, 0x3c, 0x66, 0x46, 0xc3,

    /* U+0059 "Y" */
    0x81, 0xc3, 0xc3, 0x81, 0x0, 0xc3, 0x66, 0x64,
    0x3c, 0x18, 0x8, 0x18, 0x18, 0x18,

    /* U+005A "Z" */
    0x7c, 0x2, 0x2, 0x6, 0x4, 0x4, 0x0, 0x10,
    0x10, 0x30, 0x30, 0x60, 0x40, 0x3f,

    /* U+005B "[" */
    0x7e, 0x31, 0x8c, 0x63, 0x0, 0x86, 0x31, 0x8c,
    0x3c,

    /* U+005C "\\" */
    0xc0, 0xc0, 0x60, 0x20, 0x30, 0x30, 0x18, 0x8,
    0xc, 0x6, 0x6, 0x2, 0x3, 0x1,

    /* U+005D "]" */
    0xf0, 0xc6, 0x31, 0x8c, 0x61, 0x8, 0xc6, 0x31,
    0xf8,

    /* U+005E "^" */
    0x0, 0x3c, 0x2c, 0x66, 0x42, 0xc3,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xcd, 0x0,

    /* U+0061 "a" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+0062 "b" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0063 "c" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x80, 0x80,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+0064 "d" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0065 "e" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+0066 "f" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80,

    /* U+0067 "g" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x8e, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0068 "h" */
    0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+0069 "i" */
    0xbf, 0xf9, 0xff, 0xd0,

    /* U+006A "j" */
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x0, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+006B "k" */
    0x80, 0xc0, 0xc3, 0xc6, 0xcc, 0xd8, 0xc0, 0xff,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x83,

    /* U+006C "l" */
    0x80, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x0, 0x80,
    0xc0, 0xc0, 0xc0, 0xc0, 0xfe,

    /* U+006D "m" */
    0xff, 0xff, 0x86, 0xf, 0xc, 0x1e, 0x18, 0x3c,
    0x30, 0x70, 0x20, 0x40, 0x0, 0x61, 0x83, 0xc3,
    0x7, 0x86, 0xf, 0xc, 0x1e, 0x18, 0x3c, 0x30,
    0x60,

    /* U+006E "n" */
    0x81, 0xc3, 0xf3, 0xf3, 0xdb, 0xcf, 0x85, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81,

    /* U+006F "o" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0070 "p" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0x80,

    /* U+0071 "q" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81, 0x81,
    0xc3, 0xc3, 0xc3, 0xd3, 0xdb, 0xff, 0x18, 0x18,

    /* U+0072 "r" */
    0xff, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xfe, 0xc8,
    0xc4, 0xc4, 0xc6, 0xc2, 0xc3,

    /* U+0073 "s" */
    0xfe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0x7e, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7f,

    /* U+0074 "t" */
    0xff, 0x0, 0x18, 0x18, 0x18, 0x18, 0x10, 0x0,
    0x8, 0x18, 0x18, 0x18, 0x18,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x0, 0x81,
    0xc3, 0xc3, 0xc3, 0xc3, 0xff,

    /* U+0076 "v" */
    0x81, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0x81,
    0x0, 0xc3, 0x66, 0x64, 0x3c, 0x18,

    /* U+0077 "w" */
    0xc3, 0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xe0, 0x81, 0x0, 0x3,
    0x8, 0x36, 0x79, 0x99, 0x34, 0x3c, 0xf0, 0x61,
    0x80,

    /* U+0078 "x" */
    0xc3, 0x46, 0x6c, 0x3c, 0x28, 0x0, 0x7e, 0x0,
    0x38, 0x3c, 0x66, 0x46, 0xc3,

    /* U+0079 "y" */
    0x81, 0xc3, 0xc3, 0x81, 0x0, 0xc3, 0x66, 0x64,
    0x3c, 0x18, 0x8, 0x18, 0x18, 0x18,

    /* U+007A "z" */
    0x7c, 0x2, 0x2, 0x6, 0x4, 0x4, 0x0, 0x10,
    0x10, 0x30, 0x30, 0x60, 0x40, 0x3f,

    /* U+007B "{" */
    0x8, 0xc6, 0x31, 0x8c, 0x3e, 0x8, 0xc6, 0x31,
    0x84,

    /* U+007C "|" */
    0x7f, 0xf5, 0xff, 0xd7, 0xff,

    /* U+007D "}" */
    0x86, 0x31, 0x8c, 0x62, 0xf, 0x86, 0x31, 0x8c,
    0x40,

    /* U+007E "~" */
    0x21, 0x52, 0x8c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 141, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 49, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 63, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 17},
    {.bitmap_index = 7, .adv_w = 329, .box_w = 19, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 142, .box_w = 8, .box_h = 20, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 61, .adv_w = 142, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 75, .adv_w = 198, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 32, .box_w = 1, .box_h = 4, .ofs_x = 0, .ofs_y = 17},
    {.bitmap_index = 97, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 106, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 116, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 122, .adv_w = 126, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 132, .adv_w = 48, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 133, .adv_w = 105, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 134, .adv_w = 46, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 163, .adv_w = 95, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 172, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 200, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 241, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 254, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 46, .box_w = 2, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 87, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 289, .adv_w = 108, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 295, .adv_w = 110, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 299, .adv_w = 109, .box_w = 6, .box_h = 8, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 305, .adv_w = 141, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 317, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 344, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 386, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 413, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 427, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 440, .adv_w = 44, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 471, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 484, .adv_w = 255, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 509, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 523, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 550, .adv_w = 141, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 566, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 579, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 606, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 633, .adv_w = 241, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 685, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 708, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 722, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 731, .adv_w = 164, .box_w = 8, .box_h = 6, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 737, .adv_w = 101, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 160, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 12},
    {.bitmap_index = 740, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 753, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 767, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 781, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 822, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 836, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 849, .adv_w = 44, .box_w = 2, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 853, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 880, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 893, .adv_w = 255, .box_w = 15, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 918, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 932, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 946, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 959, .adv_w = 141, .box_w = 8, .box_h = 16, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 975, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 988, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1015, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 241, .box_w = 14, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1067, .adv_w = 141, .box_w = 8, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1094, .adv_w = 141, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1108, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 46, .box_w = 2, .box_h = 20, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 1122, .adv_w = 94, .box_w = 5, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 157, .box_w = 8, .box_h = 3, .ofs_x = 0, .ofs_y = 10}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Displaysmaller = {
#else
lv_font_t ui_font_Displaysmaller = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_DISPLAYSMALLER*/

