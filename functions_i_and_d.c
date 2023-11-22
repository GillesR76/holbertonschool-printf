#include "main.h"
#include <stdarg.h>

/**
 * printint - recursive function that will be called in print_i and print_d
 * @n: integer
 *
 * Return: void
 */

void printint(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		_putchar('-');
	}
	if (n / 10)
		printint(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * print_i - function to print integers linked to the i format specifier
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_i(va_list list)
{
	int number;

	number = va_arg(list, int);
	printint(number);
}

/**
 * print_d - function to print decimal integers
 * @list: list of arguments to print from
 *
 * Return: void
 */

void print_d(va_list list)
{
	int number;

	number = va_arg(list, int);
	printint(number);
}
