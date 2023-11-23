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

	if ( format == NULL)
		return (NULL);
	va_start(list, format);

	if (*format == '\0')
		return (-1);
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
			while (tab[i].caract != NULL)
			{
				if (format[j] == *tab[i].caract)
				{
					count += tab[i].f(list);
					break;
				}
				i++;
			}
			i = 0;
		}
	}
	j++;
	va_end(list);
	return (count);
}
