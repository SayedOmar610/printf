#include "main.h"

/**
 * _printf - print
 *
 * @format: ftring format
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char(va_list val)}, {"%s", printf_string(va_list val)},
	{"%%", printf_precentage(void)}, {"%d", printf_int(va_list args)},
	{"%i", printf_int(va_list args)}
	};

	va_list args;
	int i = 0;
	int len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 4;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
