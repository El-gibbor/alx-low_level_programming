#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - alphabetical printing without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
