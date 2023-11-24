#include "main.h"
#include <stdarg.h>

/**
 * printint - recursive function that will be called in print_i and print_d
 * @n: integer
 * @count: integer used to count the number of characters that are printed
 *
 * Return: void
 */

int printint(int n, int count)
{
	unsigned int nbr;

	nbr = n;

	if (n < 0)
	{
		nbr = (-1) * nbr;
		_putchar('-');
		count++;
	}
	if (nbr / 10)
	{
		count += printint(nbr / 10, 0);
	}

	_putchar(nbr % 10 + '0');
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

