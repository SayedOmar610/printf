#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

/**
 * struct format - structure
 *
 * @id: pointer to % character
 * @f: function pointer to reqired specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _strlen(char *s);
int printf_char(va_list va);
int printf_string(va_list va);
int printf_int(va_list args);
int printf_precentage(void);

#endif


