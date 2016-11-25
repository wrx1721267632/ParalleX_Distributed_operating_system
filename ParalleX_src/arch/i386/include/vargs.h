/*************************************************************************
	> File Name: include/vargs.h
	> Author:
	> Mail:
	> Created Time: 2016年10月27日 星期四 23时06分31秒
 ************************************************************************/

#ifndef _VARGS_H
#define _VARGS_H

#include"console.h"

/**
 * 这几个宏用于取得每一个调用printk函数时传入的参数值。
　* 它们是gcc内置的变量和函数之类的存在。GNU C提供了很多扩展，这只是其中的一个。
 * 而其他平台上通常把它们定义为宏下面是一个简化版的定义
 * #define  va_list              char *
 *
 * #define  va_start(p, first)   (p = (va_list)&first + sizeof(first))
 * #define  va_arg(p, next)      (*(next*)((p += sizeof(next) ) - sizeof(next)))
 * #define  va_end(p)            (p = (va_list)NULL)
 **/

//#define  va_list              char *
typedef __builtin_va_list va_list;

//　找到可变参的首地址
#define va_start(ap, last) (__builtin_va_start(ap, last))
//　返回对应的地址，并使ap指向下一个参数的地址
#define va_arg(ap, type) (__builtin_va_arg(ap, type))
//　使ap指向空
#define va_end(ap)

int printk(const int8_t *format,...);

#endif
