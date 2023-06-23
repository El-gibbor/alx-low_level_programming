#include "variadic_functions.h"

/**
 * print_numbers - func that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, print_nums;
	va_list numList;

	if (!separator)
		return;

	va_start(numList, n);

	for (i = 0; i < n; i++)
	{
		print_nums = va_arg(numList, int);
		printf("%d%s", print_nums, separator);
	}
	printf("\n");
}
