#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: the number to return its factorial
 * Return: the factorial value of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
