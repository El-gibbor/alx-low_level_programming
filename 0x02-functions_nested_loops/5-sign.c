#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: parameter to be checked and printed
 * Return: 1 and print + if n > 0, else if n == 0
 * Return 0 and print 0, else, -1 and prints - if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
	return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
