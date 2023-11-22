#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: pointer to a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0, j = 0;
	va_list list;

	print tab[] = {{"c", print_char}, {"%", print_percent}, {"s", print_str},
		{"d", print_i}, {"i", print_i}, {NULL, NULL}};

	va_start(list, format);

	while (format[j] != '\0')
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
			count++;
		}
		else
		{
			j++;
			if (format[j] == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				while (tab[i].caract != NULL)
				{
					if (format[j] == *tab[i].caract)
					{
						count += tab[i].f(list);
						break;
					}
					i++;
				}
			}
		}
	j++;
	}
	va_end(list);
	return (count);
}
