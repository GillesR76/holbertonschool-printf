#include "main.h"
#include <stdarg.h>

/**
 * print_char - function to print a char
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_char(va_list list)
{
	_putchar(va_arg(list, int));
}

/**
 * print_percent - function to print a percent
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_percent(va_list list)
{
	(void)list;
	_putchar('%');
}

/**
 * print_str - function to print a string
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_str(va_list list)
{
	char *str = va_arg(list, char*);
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
