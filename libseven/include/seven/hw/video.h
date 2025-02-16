/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at https://mozilla.org/MPL/2.0/.
 */

#pragma once

#include <seven/base.h>

_LIBSEVEN_EXTERN_C

#define REG_DISPCNT     VOLADDR(0x04000000, uint16_t)
#define REG_DISPSTAT    VOLADDR(0x04000004, uint16_t)
#define REG_VCOUNT      VOLADDR(0x04000006, const uint16_t)
#define REG_BGCNT       VOLARRAY(0x04000008, uint16_t, 4)
#define REG_BG0CNT      VOLADDR(0x04000008, uint16_t)
#define REG_BG1CNT      VOLADDR(0x0400000A, uint16_t)
#define REG_BG2CNT      VOLADDR(0x0400000C, uint16_t)
#define REG_BG3CNT      VOLADDR(0x0400000E, uint16_t)

enum LCDDimensions
{
    LCD_WIDTH     = 240,
    LCD_HEIGHT    = 160,
    LCD_SCANLINES = 228,
};

enum DisplayControl
{

    #define BF_VIDEO_MODE_OFFSET 0
    #define BF_VIDEO_MODE_LENGTH 3

    #define VIDEO_MODE(n) BITFIELD(VIDEO_MODE, (n))

    VIDEO_MODE_REGULAR        = VIDEO_MODE(0),
    VIDEO_MODE_MIXED          = VIDEO_MODE(1),
    VIDEO_MODE_AFFINE         = VIDEO_MODE(2),
    VIDEO_MODE_BITMAP         = VIDEO_MODE(3),
    VIDEO_MODE_BITMAP_INDEXED = VIDEO_MODE(4),
    VIDEO_MODE_BITMAP_SMALL   = VIDEO_MODE(5),

    VIDEO_FRAME_SELECT        = BIT(4),

    VIDEO_OBJ_LAYOUT_1D       = BIT(6),
    VIDEO_OBJ_LAYOUT_2D       = !VIDEO_OBJ_LAYOUT_1D,

    VIDEO_FORCE_BLANK         = BIT(7),

    VIDEO_BG0_ENABLE          = BIT(8),
    VIDEO_BG1_ENABLE          = BIT(9),
    VIDEO_BG2_ENABLE          = BIT(10),
    VIDEO_BG3_ENABLE          = BIT(11),
    VIDEO_OBJ_ENABLE          = BIT(12),
    VIDEO_WIN0_ENABLE         = BIT(13),
    VIDEO_WIN1_ENABLE         = BIT(14),
    VIDEO_OBJ_WIN_ENABLE      = BIT(15),
};

enum DisplayStatus
{
    LCD_IN_VBLANK         = BIT(0),
    LCD_IN_HBLANK         = BIT(1),
    LCD_VCOUNT_MATCH      = BIT(2),

    LCD_VBLANK_IRQ_ENABLE = BIT(3),
    LCD_HBLANK_IRQ_ENABLE = BIT(4),
    LCD_VCOUNT_IRQ_ENABLE = BIT(5),

    #define BF_LCD_TARGET_VCOUNT_OFFSET 8
    #define BF_LCD_TARGET_VCOUNT_LENGTH 8

    #define LCD_TARGET_VCOUNT(n) BITFIELD(LCD_TARGET_VCOUNT, (n))
};

enum VerticalCount
{
    VCOUNT_DRAW_START    = 0,
    VCOUNT_DRAW_END      = 160,
    VCOUNT_BLANK_START   = 160,
    VCOUNT_BLANK_END     = 0,
};

enum BackgroundControl
{
    #define BF_BG_PRIORITY_OFFSET 0
    #define BF_BG_PRIORITY_LENGTH 2

    #define BG_PRIORITY(n) BITFIELD(BG_PRIORITY, (n))

    BG_PRIORITY_MIN          = BG_PRIORITY(3),
    BG_PRIORITY_MAX          = BG_PRIORITY(0),

    #define BF_BG_GFX_BASE_OFFSET 2
    #define BF_BG_GFX_BASE_LENGTH 2

    #define BG_GFX_BASE(n) BITFIELD(BG_GFX_BASE, (n))

    BG_MOSAIC_ENABLE         = BIT(6),

    BG_TILE_8BPP             = BIT(7),
    BG_TILE_4BPP             = !BG_TILE_8BPP,

    #define BF_BG_MAP_BASE_OFFSET 8
    #define BF_BG_MAP_BASE_LENGTH 5

    #define BG_MAP_BASE(n) BITFIELD(BG_MAP_BASE, (n))

    BG_AFFINE_WRAP           = BIT(13),

    #define BF_BG_SIZE_OFFSET 14
    #define BF_BG_SIZE_LENGTH 2

    #define BG_SIZE(n) BITFIELD(BG_SIZE, (n))

    BG_SIZE_256X256          = BG_SIZE(0),
    BG_SIZE_512X256          = BG_SIZE(1),
    BG_SIZE_256X512          = BG_SIZE(2),
    BG_SIZE_512X512          = BG_SIZE(3),

    #define BF_BG_AFFINE_SIZE_OFFSET 14
    #define BF_BG_AFFINE_SIZE_LENGTH 2

    #define BG_AFFINE_SIZE(n) BITFIELD(BG_AFFINE_SIZE, (n))

    BG_AFFINE_SIZE_128X128   = BG_AFFINE_SIZE(0),
    BG_AFFINE_SIZE_256X256   = BG_AFFINE_SIZE(1),
    BG_AFFINE_SIZE_512X512   = BG_AFFINE_SIZE(2),
    BG_AFFINE_SIZE_1024X1024 = BG_AFFINE_SIZE(3),
};

_LIBSEVEN_EXTERN_C_END
