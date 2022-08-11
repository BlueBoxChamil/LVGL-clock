/*
 * @Author: BlueBoxChamil 283040422@qq.com
 * @Date: 2022-08-11 13:56:41
 * @LastEditors: BlueBoxChamil 283040422@qq.com
 * @LastEditTime: 2022-08-11 16:00:01
 * @FilePath: \20220810\src\current_clock.cpp
 * @Description: 
 * 
 * Copyright (c) 2022 by BlueBoxChamil 283040422@qq.com, All Rights Reserved. 
 */
// #include "../.pio/libdeps/nodemcu-32s/lvgl/examples/lv_examples.h"
#include <lvgl.h>
#include "clock_main.h"
#if LV_USE_METER && LV_BUILD_EXAMPLES

static lv_obj_t * meter;

static lv_obj_t * meter_clock;

lv_meter_indicator_t *indic_sec;
lv_meter_indicator_t *indic_min;
lv_meter_indicator_t *indic_hour;

bool is_set_time = false;
int local_sec = 0;
int local_min = 0;
int local_hour = 0;

/**
 * @brief lvgl动画测试回调函数
 * 
 * @param indic 
 * @param v 
 */
static void set_value(void * indic, int32_t v)
{
    lv_meter_set_indicator_end_value(meter, (lv_meter_indicator_t *)indic, v);
}

/**
 * @brief lvgl动画测试
 * 
 */
void lvgl_clock_test(void)
{
    meter = lv_meter_create(lv_scr_act());
    lv_obj_set_size(meter, 220, 220);
    lv_obj_center(meter);

    /*Create a scale for the minutes*/
    /*61 ticks in a 360 degrees range (the last and the first line overlaps)*/
    lv_meter_scale_t * scale_min = lv_meter_add_scale(meter);
    lv_meter_set_scale_ticks(meter, scale_min, 61, 1, 10, lv_palette_main(LV_PALETTE_GREY));
    lv_meter_set_scale_range(meter, scale_min, 0, 60, 360, 270);

    /*Create another scale for the hours. It's only visual and contains only major ticks*/
    lv_meter_scale_t * scale_hour = lv_meter_add_scale(meter);
    lv_meter_set_scale_ticks(meter, scale_hour, 12, 0, 0, lv_palette_main(LV_PALETTE_GREY));               /*12 ticks*/
    lv_meter_set_scale_major_ticks(meter, scale_hour, 1, 2, 20, lv_color_black(), 10);    /*Every tick is major*/
    lv_meter_set_scale_range(meter, scale_hour, 1, 12, 330, 300);       /*[1..12] values in an almost full circle*/

    LV_IMG_DECLARE(img_hand)

    /*Add a the hands from images*/
    lv_meter_indicator_t * indic_min = lv_meter_add_needle_img(meter, scale_min, &img_hand, 5, 5);
    lv_meter_indicator_t * indic_hour = lv_meter_add_needle_img(meter, scale_min, &img_hand, 5, 5);

    /*Create an animation to set the value*/
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_exec_cb(&a, set_value);
    lv_anim_set_values(&a, 0, 60);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_time(&a, 2000);     /*2 sec for 1 turn of the minute hand (1 hour)*/
    lv_anim_set_var(&a, indic_min);
    lv_anim_start(&a);

    lv_anim_set_var(&a, indic_hour);
    lv_anim_set_time(&a, 24000);    /*24 sec for 1 turn of the hour hand*/
    lv_anim_set_values(&a, 0, 60);
    lv_anim_start(&a);
}



/**
 * @brief lvgl clock回调函数
 * 
 * @param indic 
 * @param v 
 */
static void set_value_sec(void * indic, int32_t v)
{
    if(is_set_time == false)
    {
        GetCurrentTime clock_time = now_time();
        
        local_sec = clock_time.time_seconds;
        local_min = clock_time.time_mintues;
        if(clock_time.time_hour >=12)
        {
            local_hour = clock_time.time_hour - 12;
        }
        local_hour = local_hour*5 + local_min/12;//为了精确显示，时针也指向60个刻度
        lv_meter_set_indicator_end_value(meter_clock, indic_sec, local_sec);
        lv_meter_set_indicator_end_value(meter_clock, indic_min, local_min);
        lv_meter_set_indicator_end_value(meter_clock, indic_hour, local_hour);
        
        is_set_time = true;
    }


    if((lv_meter_indicator_t *)indic == indic_sec)
    {
        
        if(local_sec < 59)
        {
            local_sec++;
            lv_meter_set_indicator_end_value(meter_clock, indic_sec, local_sec);
        }
        else if(local_sec == 59)
        {
            local_sec = 0;
            lv_meter_set_indicator_end_value(meter_clock, indic_sec, local_sec);

            if(local_min < 59)
            {
                local_min++;
                lv_meter_set_indicator_end_value(meter_clock, indic_min, local_min);
            }
            else if(local_min == 59)
            {
                local_min = 0;
                lv_meter_set_indicator_end_value(meter_clock, indic_min, local_min);

                if(local_hour < 59)
                {
                    local_hour++;
                    lv_meter_set_indicator_end_value(meter_clock, indic_hour, local_hour);
                }
                else if(local_hour == 59)
                {
                    local_hour = 0;
                    lv_meter_set_indicator_end_value(meter_clock, indic_hour, local_hour);
                }

                
            }
        }    
    }    
}

/**
 * @brief lvgl时钟显示
 * 
 */
void lvgl_clock(void)
{
    //创建一个圆形对象
    meter_clock = lv_meter_create(lv_scr_act());
    //设置圆形大小220*220
    lv_obj_set_size(meter_clock, 220, 220);
    //将圆形设置到中心
    lv_obj_center(meter_clock);

    //添加60个小刻度用于读取分数和秒数
    lv_meter_scale_t * scale_small = lv_meter_add_scale(meter_clock);
    lv_meter_set_scale_ticks(meter_clock, scale_small, 61, 1, 10, lv_palette_main(LV_PALETTE_RED));
    lv_meter_set_scale_range(meter_clock, scale_small, 0, 60, 360, 270);

    //添加12个大刻度用于读取小时数
    lv_meter_scale_t * scale_large = lv_meter_add_scale(meter_clock);
    lv_meter_set_scale_ticks(meter_clock, scale_large, 12, 0, 0, lv_palette_main(LV_PALETTE_RED));               /*12 ticks*/
    lv_meter_set_scale_major_ticks(meter_clock, scale_large, 1, 2, 20, lv_color_black(), 10);    /*Every tick is major*/
    lv_meter_set_scale_range(meter_clock, scale_large, 1, 12, 330, 300);       /*[1..12] values in an almost full circle*/

    //秒针 使用官方图像
    LV_IMG_DECLARE(img_hand)
    //分针 自定义图像
    LV_IMG_DECLARE(fenzhen)
    //时针 自定义图像
    LV_IMG_DECLARE(shizhen)

    /*Add a the hands from images*/
    indic_sec = lv_meter_add_needle_img(meter_clock, scale_small, &img_hand, 5, 5);
    indic_min = lv_meter_add_needle_img(meter_clock, scale_small, &fenzhen, 5, 5);
    indic_hour = lv_meter_add_needle_img(meter_clock, scale_small, &shizhen, 5, 5);

    /*Create an animation to set the value*/
    lv_anim_t a;
    lv_anim_init(&a);
    lv_anim_set_exec_cb(&a, set_value_sec);
    lv_anim_set_values(&a, 0, 60);
    lv_anim_set_repeat_count(&a, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_time(&a, 1000 * 60);    
    lv_anim_set_var(&a, indic_sec);
    lv_anim_start(&a);
}


#endif
