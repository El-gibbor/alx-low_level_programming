#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to check and print
 * Return: 0 (success)
 */

void puts_half(char *str)
{
	int i, halfLen, len;

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	if (len % 2 != 0)
		halfLen = (len - 1) / 2;

	halfLen = len / 2;
	for (i = halfLen; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

