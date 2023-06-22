#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: left operand
 * @b: right operand
 * Return: the sum of both operands
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: left operand
 * @b: right operand
 * Return: the difference of both operands
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: left operand
 * @b: right operand
 * Return: the product of both operands
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a and b
 * @a: left operand
 * @b: right operand
 * Return: the result from deviding both operands
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: left operand
 * @b: right operand
 * Return: the remainder from deviding both operands
 */
int op_mod(int a, int b)
{
	return (a % b);
}
