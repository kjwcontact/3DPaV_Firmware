#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   1500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  128
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[1024] PROGMEM = {
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFD,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ######.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#############################################################################
  0xFE,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // #######...........................................##############################################################################
  0xFD,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ######.#.....................###################################################################################################
  0xFE,0x07,0xC0,0x05,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // #######......#####...........#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#####################################################
  0xFC,0x0A,0x20,0x06,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ######......#.#...#..........##...........................................######################################################
  0xFE,0x14,0x10,0x05,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // #######....#.#.....#.........#.#.....................###########################################################################
  0xFC,0x28,0x08,0x06,0x07,0xC0,0x05,0x55,0x55,0x55,0x55,0x55,0x5F,0xFF,0xFF,0xFF, // ######....#.#.......#........##......#####...........#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#############################
  0xFE,0x54,0x04,0x04,0x0A,0x20,0x06,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0xFF,0xFF, // #######..#.#.#.......#.......#......#.#...#..........##...........................................##############################
  0xFC,0x60,0x04,0x06,0x14,0x10,0x05,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ######...##..........#.......##....#.#.....#.........#.#.....................###################################################
  0xFE,0x50,0x04,0x04,0x28,0x08,0x06,0x07,0xC0,0x05,0x55,0x55,0x55,0x55,0x55,0x5F, // #######..#.#.........#.......#....#.#.......#........##......#####...........#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#####
  0xFC,0x60,0x04,0x06,0x54,0x04,0x04,0x0A,0x20,0x06,0x00,0x00,0x00,0x00,0x00,0x3F, // ######...##..........#.......##..#.#.#.......#.......#......#.#...#..........##...........................................######
  0xFE,0x54,0x04,0x1C,0x60,0x04,0x06,0x14,0x10,0x05,0x00,0x00,0x00,0x00,0x00,0x1F, // #######..#.#.#.......#.....###...##..........#.......##....#.#.....#.........#.#...........................................#####
  0xFC,0x28,0x08,0x2E,0x50,0x04,0x04,0x28,0x08,0x06,0x07,0xC0,0x00,0x01,0xF0,0x3F, // ######....#.#.......#.....#.###..#.#.........#.......#....#.#.......#........##......#####.....................#####......######
  0xFE,0x14,0x10,0x54,0x60,0x04,0x06,0x54,0x04,0x04,0x0A,0x20,0x00,0x02,0x08,0x1F, // #######....#.#.....#.....#.#.#...##..........#.......##..#.#.#.......#.......#......#.#...#...................#.....#......#####
  0xFC,0x0A,0x20,0x66,0x54,0x04,0x1C,0x60,0x04,0x06,0x14,0x10,0x00,0x05,0x04,0x3F, // ######......#.#...#......##..##..#.#.#.......#.....###...##..........#.......##....#.#.....#.................#.#.....#....######
  0xFE,0x07,0xC0,0x54,0x28,0x08,0x2E,0x50,0x04,0x04,0x28,0x08,0x00,0x0A,0x02,0x1F, // #######......#####.......#.#.#....#.#.......#.....#.###..#.#.........#.......#....#.#.......#...............#.#.......#....#####
  0xFC,0x00,0x00,0x2E,0x14,0x10,0x54,0x60,0x04,0x06,0x54,0x04,0x00,0x15,0x01,0x3F, // ######....................#.###....#.#.....#.....#.#.#...##..........#.......##..#.#.#.......#.............#.#.#.......#..######
  0xFE,0x00,0x00,0x1C,0x0A,0x20,0x66,0x54,0x04,0x1C,0x60,0x04,0x00,0x18,0x01,0x1F, // #######....................###......#.#...#......##..##..#.#.#.......#.....###...##..........#.............##..........#...#####
  0xFC,0x00,0x00,0x06,0x07,0xC0,0x54,0x28,0x08,0x2E,0x50,0x04,0x00,0x14,0x01,0x3F, // ######.......................##......#####.......#.#.#....#.#.......#.....#.###..#.#.........#.............#.#.........#..######
  0xFE,0x00,0x00,0x04,0x00,0x00,0x2E,0x14,0x10,0x54,0x60,0x04,0x00,0x18,0x01,0x1F, // #######......................#....................#.###....#.#.....#.....#.#.#...##..........#.............##..........#...#####
  0xFC,0xFF,0xFF,0xFE,0x00,0x00,0x1C,0x0A,0x20,0x66,0x54,0x04,0x1C,0x15,0x01,0x3F, // ######..#######################....................###......#.#...#......##..##..#.#.#.......#.....###.....#.#.#.......#..######
  0xFE,0xD5,0x55,0x54,0x00,0x00,0x06,0x07,0xC0,0x54,0x28,0x08,0x2A,0x0A,0x02,0x1F, // #######.##.#.#.#.#.#.#.#.#.#.#.......................##......#####.......#.#.#....#.#.......#.....#.#.#.....#.#.......#....#####
  0xFC,0x84,0x10,0x46,0x00,0x00,0x04,0x00,0x00,0x2E,0x14,0x10,0x51,0x05,0x04,0x3F, // ######..#....#.....#.....#...##......................#....................#.###....#.#.....#.....#.#...#.....#.#.....#....######
  0xFE,0xC4,0x10,0x44,0xFF,0xFF,0xFE,0x00,0x00,0x1C,0x0A,0x20,0x61,0x02,0x88,0x1F, // #######.##...#.....#.....#...#..#######################....................###......#.#...#......##....#......#.#...#......#####
  0xFC,0x84,0x10,0x46,0xD5,0x55,0x54,0x00,0x00,0x06,0x07,0xC0,0x51,0x01,0xF0,0x3F, // ######..#....#.....#.....#...##.##.#.#.#.#.#.#.#.#.#.#.......................##......#####.......#.#...#.......#####......######
  0xFE,0x84,0x10,0x44,0x84,0x10,0x46,0x00,0x00,0x04,0x00,0x00,0x2A,0x00,0x00,0x1F, // #######.#....#.....#.....#...#..#....#.....#.....#...##......................#....................#.#.#....................#####
  0xFC,0xC4,0x10,0x46,0xC4,0x10,0x44,0xFF,0xFF,0xFE,0x00,0x00,0x1C,0x00,0x00,0x3F, // ######..##...#.....#.....#...##.##...#.....#.....#...#..#######################....................###....................######
  0xFE,0x84,0x10,0x44,0x84,0x10,0x46,0xD5,0x55,0x54,0x00,0x00,0x00,0x00,0x00,0x1F, // #######.#....#.....#.....#...#..#....#.....#.....#...##.##.#.#.#.#.#.#.#.#.#.#.............................................#####
  0xFC,0xD5,0x55,0x56,0x84,0x10,0x44,0x84,0x10,0x46,0x00,0x00,0x00,0x00,0x00,0x3F, // ######..##.#.#.#.#.#.#.#.#.#.##.#....#.....#.....#...#..#....#.....#.....#...##...........................................######
  0xFC,0xFF,0xFF,0xFC,0xC4,0x10,0x46,0xC4,0x10,0x44,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F, // ######..######################..##...#.....#.....#...##.##...#.....#.....#...#..#########################################..#####
  0xFE,0x00,0x00,0x06,0x84,0x10,0x44,0x84,0x10,0x46,0xD5,0x55,0x55,0x55,0x55,0xBF, // #######......................##.#....#.....#.....#...#..#....#.....#.....#...##.##.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.######
  0xFD,0x55,0x55,0x54,0xD5,0x55,0x56,0x84,0x10,0x44,0x84,0x10,0x41,0x04,0x10,0x9F, // ######.#.#.#.#.#.#.#.#.#.#.#.#..##.#.#.#.#.#.#.#.#.#.##.#....#.....#.....#...#..#....#.....#.....#.....#.....#.....#....#..#####
  0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFC,0xC4,0x10,0x46,0xC4,0x10,0x41,0x04,0x11,0xBF, // ##############################..######################..##...#.....#.....#...##.##...#.....#.....#.....#.....#.....#...##.######
  0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x06,0x84,0x10,0x44,0x84,0x10,0x41,0x04,0x10,0x9F, // ###############################......................##.#....#.....#.....#...#..#....#.....#.....#.....#.....#.....#....#..#####
  0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x54,0xD5,0x55,0x56,0x84,0x10,0x41,0x04,0x10,0x9F, // ##############################.#.#.#.#.#.#.#.#.#.#.#.#..##.#.#.#.#.#.#.#.#.#.##.#....#.....#.....#.....#.....#.....#....#..#####
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFC,0xC4,0x10,0x41,0x04,0x11,0xBF, // ######################################################..######################..##...#.....#.....#.....#.....#.....#...##.######
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x06,0x84,0x10,0x41,0x04,0x10,0x9F, // #######################################################......................##.#....#.....#.....#.....#.....#.....#....#..#####
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x54,0xD5,0x55,0x55,0x55,0x55,0xBF, // ######################################################.#.#.#.#.#.#.#.#.#.#.#.#..##.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.##.######
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F, // ##############################################################################..#########################################..#####
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x3F, // ###############################################################################...........................................######
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFD,0x55,0x55,0x55,0x55,0x55,0x5F, // ##############################################################################.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#.#####
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xE0,0x2E,0xFB,0x7D,0xFB,0xFB,0xCF,0xC1,0xDF,0xBB,0x3E,0xC0,0xE1,0xFE,0x3C,0x1F, // ###.......#.###.#####.##.#####.######.#######.####..######.....###.######.###.##..#####.##......###....########...####.....#####
  0xFD,0xEE,0x7B,0x39,0xF9,0xF3,0xCF,0x9E,0xDF,0xBB,0x3E,0xDF,0xDE,0xFC,0xDD,0xE7, // ######.####.###..####.##..###..######..#####..####..#####..####.##.######.###.##..#####.##.#######.####.######..##.###.####..###
  0xFD,0xEE,0x3B,0xBB,0xF9,0xEB,0xD7,0xBF,0x5F,0xBB,0x5E,0xDF,0xDE,0xFD,0xED,0xF7, // ######.####.###...###.###.###.#######..####.#.####.#.####.######.#.######.###.##.#.####.##.#######.####.######.####.##.#####.###
  0xFD,0xEE,0xBB,0xD3,0xFA,0xEB,0xB7,0x3F,0xDF,0xBB,0x4E,0xDF,0xDF,0xFF,0xCD,0xF3, // ######.####.###.#.###.####.#..#######.#.###.#.###.##.###..########.######.###.##.#..###.##.#######.###############..##.#####..##
  0xFD,0xEE,0xDB,0xC7,0xFA,0xEB,0xBB,0x7F,0xC0,0x3B,0x6E,0xC0,0xE3,0xFF,0x1D,0xF3, // ######.####.###.##.##.####...########.#.###.#.###.###.##.#########........###.##.##.###.##......###...##########...###.#####..##
  0xFD,0xEE,0xCB,0xEF,0xFA,0xDB,0xBB,0x7F,0xDF,0xBB,0x66,0xDF,0xF8,0xFF,0xCD,0xF3, // ######.####.###.##..#.#####.#########.#.##.##.###.###.##.#########.######.###.##.##..##.##.##########...##########..##.#####..##
  0xFD,0xEE,0xEB,0xEF,0xFB,0x5B,0x03,0x3F,0x5F,0xBB,0x76,0xDF,0xFE,0x7F,0xED,0xF3, // ######.####.###.###.#.#####.#########.##.#.##.##......##..######.#.######.###.##.###.##.##.############..##########.##.#####..##
  0xFD,0xEE,0xF3,0xEF,0xFB,0x5B,0x79,0xBE,0xDF,0xBB,0x7A,0xDF,0xDE,0x7D,0xED,0xF7, // ######.####.###.####..#####.#########.##.#.##.##.####..##.#####.##.######.###.##.####.#.##.#######.####..#####.####.##.#####.###
  0xFD,0xEE,0xF3,0xEF,0xFB,0xBA,0xFD,0x9E,0xDF,0xBB,0x7C,0xDF,0xDE,0xFD,0xCD,0xE7, // ######.####.###.####..#####.#########.###.###.#.######.##..####.##.######.###.##.#####..##.#######.####.######.###..##.####..###
  0xFD,0xEE,0xFB,0xEF,0xFB,0xBA,0xFD,0xC1,0xDF,0xBB,0x7E,0xC0,0xE0,0xFE,0x1C,0x1F, // ######.####.###.#####.#####.#########.###.###.#.######.###.....###.######.###.##.######.##......###.....#######....###.....#####
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // ################################################################################################################################
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF  // ################################################################################################################################
};
