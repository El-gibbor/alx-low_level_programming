#include "3-calc.h"

/**
 * main - executes the main operations
 * @argc: counts of arguments passed
 * @argv: arguments passed (prog name, operands and the operator)
 * Return: 0 (sucess)
*/
int main(int argc, char *argv[])
{
	int a, b;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/*handle zero division and modulos*/
	if ((*argv[2] == '/') || (*argv[2] == '%'))
	{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
