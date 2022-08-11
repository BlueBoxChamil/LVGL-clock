/*
 * @Author: BlueBoxChamil 283040422@qq.com
 * @Date: 2022-08-10 15:55:13
 * @LastEditors: BlueBoxChamil 283040422@qq.com
 * @LastEditTime: 2022-08-11 15:31:21
 * @FilePath: \20220810\src\main.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by BlueBoxChamil 283040422@qq.com, All Rights Reserved. 
 */
#include <Arduino_GFX_Library.h>
#include <Arduino.h>
#include <NTPClient.h>
#include "esp_wifi.h"
#include <WiFiUdp.h>
#include "WiFi.h"
#include "clock_main.h"
#include <lvgl.h>

/*******************************************************************************
 * Start of Arduino_GFX setting
 *
 * Arduino_GFX try to find the settings depends on selected board in Arduino IDE
 * Or you can define the display dev kit not in the board list
 * Defalult pin list for non display dev kit:
 * Arduino Nano, Micro and more: CS:  9, DC:  8, RST:  7, BL:  6, SCK: 13, MOSI: 11, MISO: 12
 * ESP32 various dev board     : CS:  5, DC: 27, RST: 33, BL: 22, SCK: 18, MOSI: 23, MISO: nil
 * ESP32-C3 various dev board  : CS:  7, DC:  2, RST:  1, BL:  3, SCK:  4, MOSI:  6, MISO: nil
 * ESP32-S2 various dev board  : CS: 34, DC: 35, RST: 33, BL: 21, SCK: 36, MOSI: 35, MISO: nil
 * ESP32-S3 various dev board  : CS: 40, DC: 41, RST: 42, BL: 48, SCK: 36, MOSI: 35, MISO: nil
 * ESP8266 various dev board   : CS: 15, DC:  4, RST:  2, BL:  5, SCK: 14, MOSI: 13, MISO: 12
 * Raspberry Pi Pico dev board : CS: 17, DC: 27, RST: 26, BL: 28, SCK: 18, MOSI: 19, MISO: 16
 * RTL8720 BW16 old patch core : CS: 18, DC: 17, RST:  2, BL: 23, SCK: 19, MOSI: 21, MISO: 20
 * RTL8720_BW16 Official core  : CS:  9, DC:  8, RST:  6, BL:  3, SCK: 10, MOSI: 12, MISO: 11
 * RTL8722 dev board           : CS: 18, DC: 17, RST: 22, BL: 23, SCK: 13, MOSI: 11, MISO: 12
 * RTL8722_mini dev board      : CS: 12, DC: 14, RST: 15, BL: 13, SCK: 11, MOSI:  9, MISO: 10
 * Seeeduino XIAO dev board    : CS:  3, DC:  2, RST:  1, BL:  0, SCK:  8, MOSI: 10, MISO:  9
 * Teensy 4.1 dev board        : CS: 39, DC: 41, RST: 40, BL: 22, SCK: 13, MOSI: 11, MISO: 12
 ******************************************************************************/


//lcd
#define GFX_BL DF_GFX_BL // default backlight pin, you may replace DF_GFX_BL to actual backlight pin
Arduino_DataBus *bus = new Arduino_ESP32SPI(27 /* DC */,5 /* CS */,18 /* SCK */,23 /* MOSI */);
Arduino_GFX *gfx = new Arduino_ST7789(bus,33 /* RST */,0,true,240,240);

//time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

const char *ssid     = "Texin-SH-Model";
const char *password = "yachuang2020";

GetCurrentTime now_time();

//lvgl
void lvgl_clock_init();
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p);

#define TEST_LCD 0
#define TEST_TIME 1
#define TEST_LVGL 0
#define TEST_CLOCK 0
#define TEST_CURRENT_CLOCK 1

void setup()
{
  Serial.begin(9600);
  Serial.println("LVGL Hello World");

  gfx->begin();

  #if TEST_LCD
   // Init Display
   gfx->fillScreen(RED);
  #endif

  #ifdef GFX_BL
    pinMode(GFX_BL, OUTPUT);
    digitalWrite(GFX_BL, HIGH);
  #endif

  //以秒为单位调整时区的时间,与格林尼治标准时间相差八个时区，因此8*60min = 8* 60 * 60
  timeClient.setTimeOffset(8*60*60);
  //连接wifi
  WiFi.begin(ssid, password);
  while ( WiFi.status() != WL_CONNECTED ) 
  {
    delay ( 500 );
    Serial.print ( "." );
  }
  //初始化NTPClient
  timeClient.begin();
  
  #if TEST_TIME
  //获取当前时间
  GetCurrentTime clock_time = now_time();
  Serial.printf("time_hour: %d\r\n", clock_time.time_hour);
  Serial.printf("time_mintues: %d\r\n", clock_time.time_mintues);
  Serial.printf("time_seconds: %d\r\n", clock_time.time_seconds);
  #endif

  lvgl_clock_init();

  #if TEST_CLOCK
  lvgl_clock_test();
  #endif

  #if TEST_CURRENT_CLOCK
  lvgl_clock();
  #endif
  
}

void loop()
{
    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}


/**
 * @brief 获取当前时间
 * 
 * @return GetCurrentTime 
 */
GetCurrentTime now_time()
{
  GetCurrentTime t_time;
  //从NTP服务器获取当前日期和时间
  timeClient.update();
  //得到字符串形式的时间数据
  // String get_time = timeClient.getFormattedTime();
  // Serial.printf("time is %s\r\n",get_time);
  //获取时间数据
  t_time.time_hour = timeClient.getHours();
  t_time.time_mintues = timeClient.getMinutes();
  t_time.time_seconds = timeClient.getSeconds();

  return t_time;

}

/**
 * @brief Display flushing 
 * 
 * @param disp 
 * @param area 
 * @param color_p 
 */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{
   uint32_t w = (area->x2 - area->x1 + 1);
   uint32_t h = (area->y2 - area->y1 + 1);

#if (LV_COLOR_16_SWAP != 0)
   gfx->draw16bitBeRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#else
   gfx->draw16bitRGBBitmap(area->x1, area->y1, (uint16_t *)&color_p->full, w, h);
#endif

   lv_disp_flush_ready(disp);
}

/**
 * @brief 初始化lvgl
 * 
 */
void lvgl_clock_init()
{
    static lv_color_t *disp_draw_buf;
    static lv_disp_draw_buf_t draw_buf;
    static lv_disp_drv_t disp_drv;

    lv_init();
    uint32_t screenWidth = gfx->width();
    uint32_t screenHeight = gfx->height();

    #ifdef ESP32
      disp_draw_buf = (lv_color_t *)heap_caps_malloc(sizeof(lv_color_t) * screenWidth * 10, MALLOC_CAP_INTERNAL | MALLOC_CAP_8BIT);
    #else
      disp_draw_buf = (lv_color_t *)malloc(sizeof(lv_color_t) * screenWidth * 10);
    #endif

    if (!disp_draw_buf)
    {
        Serial.println("LVGL disp_draw_buf allocate failed!");
    }
    else
    {
      //初始化显示缓冲区
      lv_disp_draw_buf_init(&draw_buf, disp_draw_buf, NULL, screenWidth * 10);

      /* Initialize the display */
      lv_disp_drv_init(&disp_drv);
      /* Change the following line to your display resolution */
      disp_drv.hor_res = screenWidth;
      disp_drv.ver_res = screenHeight;
      disp_drv.flush_cb = my_disp_flush;
      disp_drv.draw_buf = &draw_buf;
      lv_disp_drv_register(&disp_drv);

      /* Initialize the (dummy) input device driver */
      static lv_indev_drv_t indev_drv;
      lv_indev_drv_init(&indev_drv);
      indev_drv.type = LV_INDEV_TYPE_POINTER;
      lv_indev_drv_register(&indev_drv);

      #if TEST_LVGL
      /* Create simple label */
      lv_obj_t *label = lv_label_create(lv_scr_act());
      lv_label_set_text(label, "Hello Arduino! (V8.0.X)");
      lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
      #endif

   }
}