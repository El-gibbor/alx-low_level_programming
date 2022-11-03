#include "main.h"

/**
 * _puts_recursion - prints a string to std output
 *@s: parameter to check print
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
