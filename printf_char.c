#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char s;
	int i, len;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
