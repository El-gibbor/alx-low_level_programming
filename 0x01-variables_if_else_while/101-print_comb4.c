#include <stdio.h>

/**
 * main - output all single number of base 10
 * prints all possible different combinations of three digits
 * Return: 0 if successful
 */

int main(void)
{
	int var;

	for (var = 0; var < 8; var++)
	{
		int ii;

		for (ii = var + 1; ii < 9; ii++)
		{
			int jj;

			for (jj = ii + 1; jj < 10; jj++)
			{
				putchar((var % 10) + '0');
				putchar((ii % 10) + '0');
				putchar((jj % 10) + '0');

				if (var != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
