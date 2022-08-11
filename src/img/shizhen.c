/*
 * @Author: BlueBoxChamil 283040422@qq.com
 * @Date: 2022-08-11 14:16:33
 * @LastEditors: BlueBoxChamil 283040422@qq.com
 * @LastEditTime: 2022-08-11 14:18:56
 * @FilePath: \20220810\src\img\shizhen.c
 * @Description: 
 * 
 * Copyright (c) 2022 by BlueBoxChamil 283040422@qq.com, All Rights Reserved. 
 */
#define LV_LVGL_H_INCLUDE_SIMPLE 1


#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_SHIZHEN
#define LV_ATTRIBUTE_IMG_SHIZHEN
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_SHIZHEN uint8_t shizhen_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xb7, 0xff, 0xb7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x6d, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x25, 0xff, 0x49, 0xff, 0x92, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x49, 0xff, 0x24, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x49, 0xff, 0x92, 0xff, 0xdb, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x6d, 0xff, 0x24, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x49, 0xff, 0x92, 0xff, 0xb7, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x49, 0xff, 0x49, 0xff, 0x6e, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 
  0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x6e, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0x92, 0xff, 0xb2, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0xb6, 0xff, 0x92, 0xff, 0x92, 0xff, 0x49, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x25, 0xff, 0x6d, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xb7, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0x24, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x25, 0xff, 0x24, 0xff, 0x25, 0xff, 0x69, 0xff, 0xb6, 0xff, 0xdb, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xb7, 0xff, 0x25, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x24, 0xff, 0x49, 0xff, 0x6d, 0xff, 0xdb, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xb6, 0xff, 0x6e, 0xff, 0x92, 0xff, 0xb6, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x5d, 0xef, 0xff, 0x55, 0xad, 0xff, 0x76, 0xb5, 0xff, 0x3d, 0xef, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9e, 0xf7, 0xff, 0x0c, 0x63, 0xff, 0x24, 0x29, 0xff, 0xe3, 0x20, 0xff, 0xe3, 0x20, 0xff, 0x24, 0x29, 0xff, 0x48, 0x4a, 0xff, 0xef, 0x83, 0xff, 0xba, 0xd6, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xff, 0x28, 0x42, 0xff, 0x04, 0x21, 0xff, 0x24, 0x29, 0xff, 0x24, 0x29, 0xff, 0x45, 0x29, 0xff, 0x24, 0x29, 0xff, 0x24, 0x21, 0xff, 0x03, 0x21, 0xff, 0x04, 0x21, 0xff, 0x49, 0x4a, 0xff, 0x30, 0x8c, 0xff, 0x9a, 0xd6, 0xff, 0xbf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x50, 0x8c, 0xff, 0x10, 0x84, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x51, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x0f, 0x84, 0xff, 0x10, 0x8c, 0xff, 0x0f, 0x84, 0xff, 0xef, 0x83, 0xff, 0x30, 0x84, 0xff, 0x0f, 0x84, 0xff, 0x0f, 0x84, 0xff, 0x0f, 0x84, 0xff, 0x0f, 0x84, 0xff, 0x10, 0x84, 0xff, 0xef, 0x83, 0xff, 0x0f, 0x84, 0xff, 0x30, 0x8c, 0xff, 0xeb, 0x62, 0xff, 0x04, 0x21, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x25, 0x29, 0xff, 0x45, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x24, 0x29, 0xff, 0x04, 0x29, 0xff, 0xe3, 0x20, 0xff, 0xe3, 0x20, 0xff, 0xc6, 0x39, 0xff, 0x10, 0x84, 0xff, 0x55, 0xad, 0xff, 0xd7, 0xbd, 0xff, 0xbb, 0xde, 0xff, 0x9e, 0xf7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xc3, 0x18, 0xff, 0xe3, 0x20, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x20, 0xff, 0xc3, 0x20, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x20, 0xff, 0xe3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc2, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc2, 0x18, 0xff, 0xc2, 0x18, 0xff, 0xc3, 0x18, 0xff, 0xc2, 0x18, 0xff, 0xa2, 0x18, 0xff, 0xc2, 0x18, 0xff, 0x03, 0x21, 0xff, 0x45, 0x29, 0xff, 0x44, 0x29, 0xff, 0x45, 0x29, 0xff, 0x45, 0x29, 0xff, 0x45, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x45, 0x29, 0xff, 0x45, 0x29, 0xff, 0x24, 0x29, 0xff, 0xc3, 0x20, 0xff, 0xa2, 0x18, 0xff, 0xc2, 0x18, 0xff, 0xa2, 0x18, 0xff, 0x04, 0x21, 0xff, 0xa6, 0x39, 0xff, 0x69, 0x52, 0xff, 0x6d, 0x73, 0xff, 0x50, 0x8c, 0xff, 0xf3, 0xa4, 0xff, 0xb6, 0xb5, 0xff, 0x18, 0xc6, 0xff, 0x79, 0xce, 0xff, 
  0x2d, 0x6b, 0xff, 0x4d, 0x73, 0xff, 0x6d, 0x73, 0xff, 0x6d, 0x73, 0xff, 0x8e, 0x73, 0xff, 0xae, 0x7b, 0xff, 0xcf, 0x7b, 0xff, 0xef, 0x83, 0xff, 0xef, 0x83, 0xff, 0x30, 0x8c, 0xff, 0x30, 0x8c, 0xff, 0x51, 0x8c, 0xff, 0x51, 0x8c, 0xff, 0x71, 0x94, 0xff, 0x92, 0x94, 0xff, 0x71, 0x94, 0xff, 0x92, 0x94, 0xff, 0xb2, 0x9c, 0xff, 0xd3, 0x9c, 0xff, 0x92, 0x94, 0xff, 0xb2, 0x94, 0xff, 0x51, 0x8c, 0xff, 0x10, 0x84, 0xff, 0xc7, 0x41, 0xff, 0x24, 0x29, 0xff, 0x44, 0x29, 0xff, 0x45, 0x29, 0xff, 0x44, 0x29, 0xff, 0x45, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x24, 0x29, 0xff, 0x04, 0x21, 0xff, 0x04, 0x21, 0xff, 0x86, 0x31, 0xff, 0x2c, 0x63, 0xff, 0xef, 0x83, 0xff, 0x92, 0x94, 0xff, 0x55, 0xad, 0xff, 0xd7, 0xbd, 0xff, 0x18, 0xc6, 0xff, 0x59, 0xce, 0xff, 0xdb, 0xde, 0xff, 0x3c, 0xe7, 0xff, 0x7d, 0xef, 0xff, 0x7d, 0xf7, 0xff, 0xbf, 0xff, 0xff, 0xbe, 0xf7, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0xce, 0xff, 0x24, 0x29, 0xff, 0x24, 0x29, 0xff, 0x44, 0x29, 0xff, 0x44, 0x29, 0xff, 0x45, 0x29, 0xff, 0x45, 0x29, 0xff, 0x24, 0x29, 0xff, 0x24, 0x21, 0xff, 0x24, 0x29, 0xff, 0x8a, 0x52, 0xff, 0xd2, 0x9c, 0xff, 0x79, 0xd6, 0xff, 0x5d, 0xef, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x14, 0xa5, 0xff, 0x65, 0x31, 0xff, 0x03, 0x21, 0xff, 0x04, 0x21, 0xff, 0x24, 0x21, 0xff, 0x04, 0x21, 0xff, 0x86, 0x39, 0xff, 0x0c, 0x63, 0xff, 0xd7, 0xbd, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0xe7, 0xff, 0xf3, 0xa4, 0xff, 0x8e, 0x73, 0xff, 0x8e, 0x73, 0xff, 0x14, 0xa5, 0xff, 0x5d, 0xef, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xef, 0x5d, 0xff, 0xad, 0x55, 0xff, 0xb5, 0x76, 0xff, 0xef, 0x3d, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf7, 0x9e, 0xff, 0x63, 0x0c, 0xff, 0x29, 0x24, 0xff, 0x20, 0xe3, 0xff, 0x20, 0xe3, 0xff, 0x29, 0x24, 0xff, 0x4a, 0x48, 0xff, 0x83, 0xef, 0xff, 0xd6, 0xba, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xdf, 0xff, 0x42, 0x28, 0xff, 0x21, 0x04, 0xff, 0x29, 0x24, 0xff, 0x29, 0x24, 0xff, 0x29, 0x45, 0xff, 0x29, 0x24, 0xff, 0x21, 0x24, 0xff, 0x21, 0x03, 0xff, 0x21, 0x04, 0xff, 0x4a, 0x49, 0xff, 0x8c, 0x30, 0xff, 0xd6, 0x9a, 0xff, 0xff, 0xbf, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x8c, 0x50, 0xff, 0x84, 0x10, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x51, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x84, 0x0f, 0xff, 0x8c, 0x10, 0xff, 0x84, 0x0f, 0xff, 0x83, 0xef, 0xff, 0x84, 0x30, 0xff, 0x84, 0x0f, 0xff, 0x84, 0x0f, 0xff, 0x84, 0x0f, 0xff, 0x84, 0x0f, 0xff, 0x84, 0x10, 0xff, 0x83, 0xef, 0xff, 0x84, 0x0f, 0xff, 0x8c, 0x30, 0xff, 0x62, 0xeb, 0xff, 0x21, 0x04, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x25, 0xff, 0x29, 0x45, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x24, 0xff, 0x29, 0x04, 0xff, 0x20, 0xe3, 0xff, 0x20, 0xe3, 0xff, 0x39, 0xc6, 0xff, 0x84, 0x10, 0xff, 0xad, 0x55, 0xff, 0xbd, 0xd7, 0xff, 0xde, 0xbb, 0xff, 0xf7, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0xc3, 0xff, 0x20, 0xe3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x20, 0xc3, 0xff, 0x20, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x20, 0xc3, 0xff, 0x18, 0xe3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc2, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc2, 0xff, 0x18, 0xc2, 0xff, 0x18, 0xc3, 0xff, 0x18, 0xc2, 0xff, 0x18, 0xa2, 0xff, 0x18, 0xc2, 0xff, 0x21, 0x03, 0xff, 0x29, 0x45, 0xff, 0x29, 0x44, 0xff, 0x29, 0x45, 0xff, 0x29, 0x45, 0xff, 0x29, 0x45, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x45, 0xff, 0x29, 0x45, 0xff, 0x29, 0x24, 0xff, 0x20, 0xc3, 0xff, 0x18, 0xa2, 0xff, 0x18, 0xc2, 0xff, 0x18, 0xa2, 0xff, 0x21, 0x04, 0xff, 0x39, 0xa6, 0xff, 0x52, 0x69, 0xff, 0x73, 0x6d, 0xff, 0x8c, 0x50, 0xff, 0xa4, 0xf3, 0xff, 0xb5, 0xb6, 0xff, 0xc6, 0x18, 0xff, 0xce, 0x79, 0xff, 
  0x6b, 0x2d, 0xff, 0x73, 0x4d, 0xff, 0x73, 0x6d, 0xff, 0x73, 0x6d, 0xff, 0x73, 0x8e, 0xff, 0x7b, 0xae, 0xff, 0x7b, 0xcf, 0xff, 0x83, 0xef, 0xff, 0x83, 0xef, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x30, 0xff, 0x8c, 0x51, 0xff, 0x8c, 0x51, 0xff, 0x94, 0x71, 0xff, 0x94, 0x92, 0xff, 0x94, 0x71, 0xff, 0x94, 0x92, 0xff, 0x9c, 0xb2, 0xff, 0x9c, 0xd3, 0xff, 0x94, 0x92, 0xff, 0x94, 0xb2, 0xff, 0x8c, 0x51, 0xff, 0x84, 0x10, 0xff, 0x41, 0xc7, 0xff, 0x29, 0x24, 0xff, 0x29, 0x44, 0xff, 0x29, 0x45, 0xff, 0x29, 0x44, 0xff, 0x29, 0x45, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x24, 0xff, 0x21, 0x04, 0xff, 0x21, 0x04, 0xff, 0x31, 0x86, 0xff, 0x63, 0x2c, 0xff, 0x83, 0xef, 0xff, 0x94, 0x92, 0xff, 0xad, 0x55, 0xff, 0xbd, 0xd7, 0xff, 0xc6, 0x18, 0xff, 0xce, 0x59, 0xff, 0xde, 0xdb, 0xff, 0xe7, 0x3c, 0xff, 0xef, 0x7d, 0xff, 0xf7, 0x7d, 0xff, 0xff, 0xbf, 0xff, 0xf7, 0xbe, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xce, 0x39, 0xff, 0x29, 0x24, 0xff, 0x29, 0x24, 0xff, 0x29, 0x44, 0xff, 0x29, 0x44, 0xff, 0x29, 0x45, 0xff, 0x29, 0x45, 0xff, 0x29, 0x24, 0xff, 0x21, 0x24, 0xff, 0x29, 0x24, 0xff, 0x52, 0x8a, 0xff, 0x9c, 0xd2, 0xff, 0xd6, 0x79, 0xff, 0xef, 0x5d, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xa5, 0x14, 0xff, 0x31, 0x65, 0xff, 0x21, 0x03, 0xff, 0x21, 0x04, 0xff, 0x21, 0x24, 0xff, 0x21, 0x04, 0xff, 0x39, 0x86, 0xff, 0x63, 0x0c, 0xff, 0xbd, 0xd7, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x3c, 0xff, 0xa4, 0xf3, 0xff, 0x73, 0x8e, 0xff, 0x73, 0x8e, 0xff, 0xa5, 0x14, 0xff, 0xef, 0x5d, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfb, 0xfb, 0xfb, 0xff, 0xe7, 0xe7, 0xe7, 0xff, 0xa7, 0xa8, 0xa8, 0xff, 0xad, 0xad, 0xad, 0xff, 0xe4, 0xe4, 0xe4, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0xef, 0xef, 0xff, 0x5c, 0x5e, 0x5e, 0xff, 0x22, 0x24, 0x25, 0xff, 0x1a, 0x1c, 0x1d, 0xff, 0x1b, 0x1d, 0x1d, 0xff, 0x20, 0x23, 0x24, 0xff, 0x43, 0x47, 0x47, 0xff, 0x79, 0x7b, 0x7c, 0xff, 0xd3, 0xd3, 0xd3, 0xff, 0xfb, 0xfb, 0xfb, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0xf6, 0xf6, 0xff, 0x40, 0x43, 0x43, 0xff, 0x1d, 0x1f, 0x20, 0xff, 0x22, 0x24, 0x25, 0xff, 0x22, 0x25, 0x24, 0xff, 0x25, 0x26, 0x28, 0xff, 0x23, 0x25, 0x26, 0xff, 0x1f, 0x22, 0x23, 0xff, 0x1a, 0x1e, 0x1f, 0xff, 0x1c, 0x20, 0x21, 0xff, 0x44, 0x47, 0x47, 0xff, 0x82, 0x83, 0x86, 0xff, 0xcc, 0xce, 0xce, 0xff, 0xf4, 0xf5, 0xf5, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x82, 0x86, 0x86, 0xff, 0x7d, 0x81, 0x81, 0xff, 0x81, 0x84, 0x86, 0xff, 0x82, 0x85, 0x86, 0xff, 0x80, 0x84, 0x84, 0xff, 0x85, 0x89, 0x8b, 0xff, 0x7f, 0x84, 0x86, 0xff, 0x7d, 0x82, 0x85, 0xff, 0x7f, 0x84, 0x84, 0xff, 0x7f, 0x84, 0x86, 0xff, 0x7a, 0x7f, 0x82, 0xff, 0x7c, 0x81, 0x84, 0xff, 0x7b, 0x81, 0x83, 0xff, 0x78, 0x7d, 0x7f, 0xff, 0x7d, 0x82, 0x83, 0xff, 0x7a, 0x80, 0x80, 0xff, 0x7b, 0x80, 0x80, 0xff, 0x7a, 0x7e, 0x80, 0xff, 0x7a, 0x7f, 0x80, 0xff, 0x7d, 0x80, 0x81, 0xff, 0x79, 0x7d, 0x7e, 0xff, 0x7b, 0x7f, 0x81, 0xff, 0x82, 0x85, 0x85, 0xff, 0x59, 0x5d, 0x5d, 0xff, 0x1d, 0x21, 0x22, 0xff, 0x23, 0x27, 0x26, 0xff, 0x23, 0x26, 0x24, 0xff, 0x24, 0x25, 0x25, 0xff, 0x24, 0x26, 0x28, 0xff, 0x23, 0x27, 0x28, 0xff, 0x23, 0x27, 0x27, 0xff, 0x23, 0x27, 0x27, 0xff, 0x21, 0x25, 0x27, 0xff, 0x1e, 0x21, 0x25, 0xff, 0x1a, 0x1d, 0x22, 0xff, 0x19, 0x1d, 0x20, 0xff, 0x33, 0x36, 0x37, 0xff, 0x7e, 0x80, 0x82, 0xff, 0xa6, 0xa6, 0xa8, 0xff, 0xb9, 0xb9, 0xb9, 0xff, 0xd5, 0xd5, 0xd5, 0xff, 0xf0, 0xf0, 0xf0, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0xfc, 0xfc, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x17, 0x19, 0x19, 0xff, 0x17, 0x1a, 0x1d, 0xff, 0x15, 0x18, 0x1b, 0xff, 0x16, 0x17, 0x1a, 0xff, 0x16, 0x18, 0x1a, 0xff, 0x14, 0x18, 0x1b, 0xff, 0x15, 0x18, 0x1c, 0xff, 0x16, 0x19, 0x1d, 0xff, 0x16, 0x18, 0x1b, 0xff, 0x15, 0x18, 0x1c, 0xff, 0x17, 0x1a, 0x1b, 0xff, 0x17, 0x19, 0x1a, 0xff, 0x16, 0x18, 0x18, 0xff, 0x17, 0x18, 0x19, 0xff, 0x12, 0x16, 0x17, 0xff, 0x14, 0x18, 0x1a, 0xff, 0x15, 0x18, 0x18, 0xff, 0x13, 0x17, 0x18, 0xff, 0x13, 0x17, 0x18, 0xff, 0x15, 0x18, 0x19, 0xff, 0x13, 0x17, 0x17, 0xff, 0x12, 0x15, 0x16, 0xff, 0x13, 0x16, 0x17, 0xff, 0x1a, 0x1e, 0x21, 0xff, 0x24, 0x28, 0x29, 0xff, 0x22, 0x26, 0x27, 0xff, 0x24, 0x26, 0x28, 0xff, 0x25, 0x26, 0x27, 0xff, 0x24, 0x27, 0x28, 0xff, 0x23, 0x27, 0x28, 0xff, 0x23, 0x27, 0x28, 0xff, 0x23, 0x26, 0x29, 0xff, 0x23, 0x26, 0x2a, 0xff, 0x23, 0x26, 0x2b, 0xff, 0x24, 0x27, 0x29, 0xff, 0x24, 0x26, 0x28, 0xff, 0x20, 0x22, 0x24, 0xff, 0x16, 0x19, 0x1d, 0xff, 0x11, 0x15, 0x17, 0xff, 0x12, 0x16, 0x16, 0xff, 0x12, 0x15, 0x18, 0xff, 0x1d, 0x20, 0x23, 0xff, 0x2f, 0x33, 0x35, 0xff, 0x49, 0x4c, 0x4d, 0xff, 0x67, 0x6b, 0x6c, 0xff, 0x82, 0x86, 0x87, 0xff, 0x9b, 0x9d, 0x9f, 0xff, 0xb1, 0xb3, 0xb3, 0xff, 0xbc, 0xbe, 0xbe, 0xff, 0xcb, 0xcb, 0xcb, 0xff, 
  0x64, 0x65, 0x68, 0xff, 0x67, 0x69, 0x6c, 0xff, 0x68, 0x6b, 0x6e, 0xff, 0x6b, 0x6d, 0x6e, 0xff, 0x70, 0x71, 0x73, 0xff, 0x71, 0x74, 0x75, 0xff, 0x75, 0x77, 0x79, 0xff, 0x79, 0x7b, 0x7e, 0xff, 0x7b, 0x7d, 0x80, 0xff, 0x7f, 0x82, 0x85, 0xff, 0x80, 0x82, 0x84, 0xff, 0x85, 0x86, 0x86, 0xff, 0x88, 0x89, 0x89, 0xff, 0x8a, 0x8b, 0x8c, 0xff, 0x8d, 0x8f, 0x90, 0xff, 0x8a, 0x8c, 0x8e, 0xff, 0x8e, 0x91, 0x91, 0xff, 0x91, 0x93, 0x94, 0xff, 0x94, 0x96, 0x96, 0xff, 0x8f, 0x90, 0x91, 0xff, 0x90, 0x92, 0x93, 0xff, 0x86, 0x89, 0x89, 0xff, 0x7c, 0x7e, 0x80, 0xff, 0x36, 0x39, 0x3e, 0xff, 0x20, 0x23, 0x26, 0xff, 0x22, 0x26, 0x26, 0xff, 0x24, 0x27, 0x28, 0xff, 0x23, 0x26, 0x27, 0xff, 0x24, 0x26, 0x27, 0xff, 0x23, 0x26, 0x27, 0xff, 0x23, 0x27, 0x29, 0xff, 0x23, 0x27, 0x28, 0xff, 0x22, 0x26, 0x28, 0xff, 0x1f, 0x23, 0x25, 0xff, 0x1c, 0x20, 0x21, 0xff, 0x1d, 0x20, 0x20, 0xff, 0x2c, 0x2f, 0x2f, 0xff, 0x5e, 0x62, 0x62, 0xff, 0x7a, 0x7d, 0x7d, 0xff, 0x8e, 0x90, 0x91, 0xff, 0xa6, 0xa7, 0xa9, 0xff, 0xb8, 0xb9, 0xba, 0xff, 0xbc, 0xbe, 0xbe, 0xff, 0xc5, 0xc6, 0xc6, 0xff, 0xd8, 0xd9, 0xd9, 0xff, 0xe2, 0xe2, 0xe3, 0xff, 0xe9, 0xea, 0xea, 0xff, 0xeb, 0xec, 0xec, 0xff, 0xf4, 0xf4, 0xf4, 0xff, 0xf3, 0xf3, 0xf3, 0xff, 
  0xfd, 0xfd, 0xfd, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc4, 0xc5, 0xc6, 0xff, 0x1f, 0x22, 0x25, 0xff, 0x20, 0x23, 0x25, 0xff, 0x22, 0x27, 0x28, 0xff, 0x22, 0x26, 0x27, 0xff, 0x24, 0x27, 0x28, 0xff, 0x25, 0x26, 0x27, 0xff, 0x21, 0x24, 0x25, 0xff, 0x1c, 0x22, 0x23, 0xff, 0x20, 0x24, 0x26, 0xff, 0x4c, 0x4f, 0x50, 0xff, 0x93, 0x96, 0x96, 0xff, 0xcb, 0xcc, 0xcc, 0xff, 0xe8, 0xe9, 0xe9, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xfe, 0xfe, 0xff, 0xa0, 0xa1, 0xa1, 0xff, 0x27, 0x2a, 0x2d, 0xff, 0x1b, 0x1f, 0x20, 0xff, 0x1c, 0x20, 0x21, 0xff, 0x1e, 0x23, 0x23, 0xff, 0x1e, 0x21, 0x23, 0xff, 0x2e, 0x31, 0x34, 0xff, 0x5e, 0x60, 0x62, 0xff, 0xb7, 0xb9, 0xb9, 0xff, 0xfa, 0xfa, 0xfa, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe2, 0xe3, 0xe3, 0xff, 0x9b, 0x9d, 0x9d, 0xff, 0x6c, 0x6e, 0x6f, 0xff, 0x6c, 0x70, 0x70, 0xff, 0x9e, 0xa1, 0xa1, 0xff, 0xe7, 0xe7, 0xe8, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
};

const lv_img_dsc_t shizhen = {
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 50,
  .header.h = 9,
  .data_size = 450 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .data = shizhen_map,
};
