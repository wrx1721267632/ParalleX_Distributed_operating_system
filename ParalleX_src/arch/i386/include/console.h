/*************************************************************************
	> File Name: include/console.h
	> Author:
	> Mail:
	> Created Time: 2016年10月25日 星期二 20时43分13秒
 ************************************************************************/

#ifndef _CONSOLE_H
#define _CONSOLE_H

#include"types.h"

// 颜色配置原因请看文档(P19)
typedef enum {
    screen_black    = 0x0,
    screen_blue     = 0x1,
    screen_green    = 0x2,
    screen_cyan     = 0x3,
    screen_red      = 0x4,
    screen_magenta  = 0x5,
    screen_brown    = 0x6,
    screen_white    = 0x7,
    screen_gray     = 0x8,
    screen_lbule    = 0x9,
    screen_lgreen   = 0x10,
    screen_lcyan    = 0x11,
    screen_lred     = 0x12,
    screen_lmagenta = 0x13,
    screen_lbrown   = 0x14,
    screen_lwhite   = 0x15
} color_t;

// 清屏操作
void console_clear();

// 屏幕输出一个字符带颜色
void console_putc_color(char c, color_t back, color_t fore);

// 屏幕打印一个以\0结尾的字符串默认黑底白字
void console_write(char *cstr);

// 屏幕打印一个以\0结尾的字符串带颜色
void console_write_color(char *cstr, color_t back, color_t fore);

// 屏幕输出一个十六位进制的整型数
void console_write_hex(uint32_t n, color_t back, color_t fore);

// 屏幕输出一个十进制的整型数
void console_write_dec(uint32_t n, color_t back, color_t fore);

// 光标向上移动N行
void console_cursor_up(uint8_t offset);

// 光标向下移动N行
void console_cursor_down(uint8_t offset);

// 光标向左移动N行
void console_cursor_left(uint8_t offset);

// 光标向右移动N行
void console_cursor_right(uint8_t offset);

// 将光标移动至指定地点
void console_cursor_position(uint8_t cur_x, uint8_t cur_y);
#endif
