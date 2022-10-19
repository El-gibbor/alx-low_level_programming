#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
