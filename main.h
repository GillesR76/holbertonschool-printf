#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list list);
int print_char(va_list list);
int print_percent(va_list list);

/**
 * print - Structure named print
 * @caract: First member, pointer to a string
 * @f: Second member: function pointer
 *
 */

typedef struct print
{
	char *caract;
	int (*f)(va_list list);
} print;

int printint(int n);
int print_i(va_list list);



#endif
