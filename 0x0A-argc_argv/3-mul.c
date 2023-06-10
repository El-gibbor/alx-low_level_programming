#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers (cmdline args)
 * @argc: argument count
 * @argv: list of cmdline arguments to be multiplied
 * Return: 1 if 2 arguments is not give
 */
int main(int argc, char *argv[])
{
	int operand1, operand2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi converts the string args to integers */
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[2]);
	printf("%d\n", operand1 * operand2);

}
