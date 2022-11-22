#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of variadic arguments passed to function
 * @separator: string to be printed
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int loop;
	char *ptr;
	va_list list;

	va_start(list, n);
	for (loop = 0; loop < n; loop++)
	{
		ptr = va_arg(list char *);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);
		if (loop != (n - 1) && separator != NULL)
			printf("%s", ptr);
	}
	printf("\n");
	va_end(loop);
}

