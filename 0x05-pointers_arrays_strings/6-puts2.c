#include "main.h"

/**
 * puts2 - prints every other character starting with the first character
 * @str: paraameter to print
 * Return: void
 */
void puts2(char *str)
{
	int char_val;

	for (char_val = 0; str[char_val] != '\0'; char_val++)
	if (char_val % 2 == 0)
		_putchar(str[char_val]);
	_putchar('\n');
}

// Note: This implementation is not completely okay with alx code checker

// void puts2(char *str)
// {
// 	int char_val;
	
// 	/* access values 1 byte after each other in memory */
// 	for (char_val = 0; str[char_val] != '\0'; char_val += 2)
// 		_putchar(str[char_val]);
// 	_putchar('\n');
// }
