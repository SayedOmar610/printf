#include "main.h"

/**
 * printf_char - function to print characters
 *
 * @va: argument paramter
 *
 * Return: 1
 */
int printf_char(va_list va)
{
	char s;

	s = va_arg(va, int);
	_putchar(s);
	return (1);
}

