#ifndef _CLOCK_MAIN_H_
#define _CLOCK_MAIN_H_

#include <Arduino.h>

//定义一个存储时间的结构体并重命名
typedef struct get_current_time GetCurrentTime;
struct get_current_time
{
    int time_hour;
    int time_mintues;
    int time_seconds;
};

void lvgl_clock_test(void);
GetCurrentTime now_time();
void lvgl_clock();

static void set_value_sec(void * indic, int32_t v);
static void set_value(void * indic, int32_t v);

#endif