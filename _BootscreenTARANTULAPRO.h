#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[] PROGMEM = {
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X01,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X12,0X00,0X98,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X24,0X00,0XC8,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X6C,0X00,0X4C,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC8,0X00,0X64,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X98,0X00,0X26,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X90,0X00,0X33,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X30,0X00,0X1B,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X30,0X00,0X19,0X80,0X00,0X00,0X00,
0X00,0X02,0X00,0X08,0X00,0X00,0X00,0X02,0X03,0X30,0X00,0X19,0X80,0X00,0X01,0X00,
0X03,0XE2,0X3E,0X0C,0X67,0X7D,0X99,0X83,0X03,0X70,0X00,0X09,0X83,0XC7,0XC7,0X80,
0X03,0XE6,0X3F,0X1C,0X67,0X7D,0X99,0X87,0X06,0X70,0X00,0X1C,0XC3,0XE7,0XCE,0XC0,
0X01,0X87,0X3B,0X9C,0X63,0X31,0X99,0X87,0X86,0X70,0X00,0X1C,0XC3,0X76,0XEC,0XC0,
0X01,0X8F,0X39,0X9E,0X73,0X31,0X99,0X87,0X86,0X7C,0X00,0X7C,0XC3,0X36,0X6C,0XC0,
0X01,0X8F,0X39,0X9E,0X7F,0X31,0X99,0X87,0X86,0X4F,0X01,0XE0,0XC3,0X36,0X6C,0XE0,
0X01,0X8F,0XBB,0X36,0X7F,0X31,0X99,0X87,0X87,0X03,0X01,0X81,0XC3,0X66,0XEC,0XE0,
0X01,0X99,0XBF,0X36,0X7F,0X31,0X99,0X8C,0X87,0XFD,0XFF,0X7F,0XC3,0XE7,0XCC,0XE0,
0X01,0X99,0XBE,0X36,0X6F,0X31,0X99,0X8C,0XC6,0X3E,0XFF,0XF9,0XC3,0XC7,0XCC,0XE0,
0X01,0X9F,0XBB,0X3F,0X67,0X31,0X99,0X8F,0XC4,0X01,0XFF,0X00,0X43,0X06,0XCC,0XC0,
0X01,0X9F,0XBB,0X3F,0X67,0X31,0X99,0X8F,0XC0,0XF1,0XFF,0X1E,0X03,0X06,0XCC,0XC0,
0X01,0X99,0XBB,0XB3,0X63,0X31,0XFB,0XCC,0XC0,0XFF,0XFF,0XFE,0X03,0X06,0XEF,0XC0,
0X01,0X99,0XBB,0XE3,0X61,0X30,0XF3,0XFC,0XC1,0XFB,0XFF,0XBF,0X03,0X06,0XE7,0X80,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0X9F,0XFF,0XF3,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0E,0X3C,0XFE,0X78,0XE0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X3C,0X39,0XFF,0X38,0X78,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0X31,0XFF,0X18,0X3E,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF0,0X33,0XFF,0X18,0X1E,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XE0,0X33,0XFF,0X98,0X1C,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0X73,0XFF,0X0C,0X0C,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X60,0XE1,0XFF,0X0E,0X1C,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X70,0XF1,0XFF,0X0E,0X18,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X30,0X71,0XFF,0X1C,0X18,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X30,0X71,0XFF,0X1C,0X18,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X10,0X30,0XFE,0X18,0X10,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X30,0XFE,0X18,0X10,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X18,0X30,0X7C,0X18,0X30,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X30,0X7C,0X18,0X20,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0C,0X10,0X78,0X10,0X20,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X10,0X38,0X30,0X40,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X18,0X10,0X30,0X40,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X18,0X00,0X30,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X18,0X00,0X30,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X08,0X00,0X20,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X20,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X20,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X20,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X00,0X40,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,};
