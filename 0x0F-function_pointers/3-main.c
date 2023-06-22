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
	/**
 	 * from 3-get_op_func.c, Null is returned/passed to this func as an arg when
   the selected character (operator)  is not valid, so we check for when the argument to this func is NUll which evaluates to an invalid selection of operator*/
	if (!get_op_func(argv[2]))
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/*handle zero/invalid division and modules (e.g 5 / 0 or 5 % 0)*/
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
