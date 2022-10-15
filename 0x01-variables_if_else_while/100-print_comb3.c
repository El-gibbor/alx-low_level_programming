#include <stdio.h>

/**
 * main - Entry point
 * print all possiblecombinations of single digit
 * Return: ALways 0 (Success)
 */

int main(void)
{
	int var;

	for (var = 0; var < 9; var ++)
	{
		int ii;
		for (ii = var + 1; ii < 10; ii++)
		{
			putchar((var % 10) + '0');
			putchar((ii % 10) + '0');

			if (var != 8)
			{
				putchr(',');
				pitchr(' ');
			}
			else
				continue;
		}
	}
	puchar('\n');

	return (0);
}
