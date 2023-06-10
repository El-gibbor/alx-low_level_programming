#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the sum of cmdline args
 * @argc: argument count
 * @argv: cmdline arguments passed
 * Return: 1 if arguments contain values that are not digit
 */
int main(int argc, char *argv[])
{
	int indx, sumOfArgs = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (indx = 1; indx < argc; indx++)
		{
			if (*argv[indx] >= '0' && *argv[indx] <= '9')
			{
				sumOfArgs += atoi(argv[indx]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sumOfArgs);
	}
	return (0);
}
