#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - func that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numList;

	if (!separator)
		separator ="";

	va_start(numList, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numList, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(numList);
	printf("\n");
}
