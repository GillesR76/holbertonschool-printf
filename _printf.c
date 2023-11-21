#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to a character string
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int count = 0, j = 0;
	va_list list;

	print tab[4] = {
		{"c", print_char},
		{"%", print_percent},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
			_putchar(format[j]);
		else
		{
			j++;

			if (format[j] == 'c')
			{
				tab[0].f(list);
				count++;
			}
			else if (format[j] == 's')
			{
				tab[2].f(list);
				count++;
			}
			else if (format[j] == '%')
			{
				tab[1].f(list);
				count++;
			}
		}
	j++;
	}
	va_end(list);
	return (count);
}
