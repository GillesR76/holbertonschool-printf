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

	if (format == NULL)
		return (-1);
	if (*format == '\0')
		return (count);
	va_start(list, format);
	while (format[j] != '\0')
	{
		if (format[j] != '%')
			count += _putchar(format[j]);
		else
		{
			j++;
			while (tab[i].caract != NULL)
			{
				if (format[j] == *tab[i].caract)
				{
					count += tab[i].f(list);
					break;
				}
				i++;
			}
			if (tab[i].caract == NULL)
			{
				_putchar('%');
				_putchar(format[j]);
				count += 2;
			}
			i = 0;
		}
		j++;
	}
	va_end(list);
	return (count);
}
