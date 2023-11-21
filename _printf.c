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
	int count = 0, i = 0, j = 0;
	va_list list;

	print tab[] = {
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

			while (tab[i].caract != NULL)
			{
				if (format[j] == *tab[i].caract)
				{
					tab[i].f(list);
					count++;
					break;
				}
				i++;
			}
		}
	j++;
	}
	va_end(list);
	return (count);
}
