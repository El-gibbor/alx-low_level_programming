#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: preceeding arg before variable arguments & also length of args to sum
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum_all = 0;

	if (!n)
		return (0);

	va_list ptr_args;

	va_start(ptr_args, n);

	for (i = 0; i < n; i++)
	{
		sum_all += va_arg(ptr_args, int);
	}
	va_end(ptr_args);
	return (sum_all);
}
