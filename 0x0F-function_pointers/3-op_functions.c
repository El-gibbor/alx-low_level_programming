#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - is a function that performs addition
 * @a: sumnd 1
 * @b: sumnd 2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - is a function that performs subtraction
 * @a: minuend
 * @b: sustrnd
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - is a function that performs multiplication
 * @a: multp 1
 * @b: multp 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - is a function that performs division
 * @a: divisr
 * @b: dividndo
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - is a function that performs modulo
 * @a: vaper 1
 * @b: vaper 2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
