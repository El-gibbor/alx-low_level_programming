#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform operation
 * @s: pointer to the selected operator
 * Return: pointer to the func thaat corresponds with the given operator
*/
int (*get_op_func(char *s))(int, int)
{
	  op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /*sentinal value to terminate an array*/
	};
	int i = 0;

	while (i < 5)
	{
		if (*s == ops[i].op) /*if entered char is equal to a a valid operator*/
			return (ops[i].f);/*return corresponding func ptr to that operator*/
	}
	return (NULL); /*NULL if s doesnt match the available 5 operators*/
}
