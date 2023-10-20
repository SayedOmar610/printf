#include "main.h"

/**
 * printf_string - function to print string
 *
 * @va: argument parameter
 *
 * Return: string length
 */
int printf_string(va_list val)
{
	char *s;
	int i;
	int length;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
	else
	{
		length = _strlen(s);
		for (i = 0; i < length; i++)
			_putchar(s[i]);
		return (length);
	}
}
