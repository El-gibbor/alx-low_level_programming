#include "main.h"

/**
 * _puts - prints a string to stout followed by a new line.
 * @str: Parameter to print
 * By Chiagoziem
 */

void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
