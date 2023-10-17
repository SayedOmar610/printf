#include "main.h"

/**
 * printf_string - function to print string
 *
 * @va: argument parameter
 *
 * Return: string length
 */
int printf_string(va_list va)
{
	char *s;
	int i;
	int len;

	s = va_arg(va, char *);
	if (s == NULL)
	{
		s = "(NULL)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
