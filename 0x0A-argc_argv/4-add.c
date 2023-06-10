#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of cmdline args
 * @argc: argument count
 * @argv: cmdline arguments passed
 * Return: 1 if arguments contain values that are not digit
 */
int main(int argc, char *argv[])
{
	int v_indx, indx, sumOfArgs = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (indx = 1; indx < argc; indx++)
		{
			v_indx = 0;
			while (argv[indx][v_indx])
			{
				if (!isdigit(argv[indx][v_indx]))
				{
					printf("Error\n");
					return (1);
				}
				v_indx++;
			}
			sumOfArgs += atoi(argv[indx]);
		}
		printf("%d\n", sumOfArgs);
	}
	return (0);
}

