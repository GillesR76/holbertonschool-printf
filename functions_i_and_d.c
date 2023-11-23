#include "main.h"
#include <stdarg.h>

/**
 * printint - recursive function that will be called in print_i and print_d
 * @n: integer
 *
 * Return: void
 */

int printint(int n, int count)
{
	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		n = (-1) * n;
		_putchar('-');
		count++;
	}
	if (n / 10)
	{
		count += printint(n / 10, 0);
	}

	_putchar(n % 10 + '0');
	count++;
	return (count);
}

/**
 * print_i - function to print integers linked to the i format specifier
 * @list: list of arguments to print from
 *
 * Return: void
 */

int print_i(va_list list)
{
	int number;
	int count = 0;

	number = va_arg(list, int);
	return (printint(number, count));
}

