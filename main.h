#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void print_str(va_list list);
void print_char(va_list list);
void print_percent(va_list list);
	
typedef struct print
{
	char *caract;
	void (*f)(va_list list);
} print;

#endif
