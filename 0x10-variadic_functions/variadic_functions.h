#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct pointer - new struct pointer defing a printer
 * @symbol: representing a data type
 * @prints:a function pointer to a pointer that prints
 * a data type corresponding to a symbol
 */

typedef struct printer

{
	char *symbol;
	void(*print)(va_list arg);
}print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);void print_all(const char * const format, ...);
void print_all(const char * const format, ...);

#endif
