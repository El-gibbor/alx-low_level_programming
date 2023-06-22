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
		{NULL, NULL} /*sentinal value to terminate an array/indicating the end*/
	};
	int i = 0;

	while (i < 5)
	{
		 /**
		  * if entered char is equal to a a valid operator, then
		  * return the func ptr pointing to the func that corresponds to
		  * the input character (operator).
		  */
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	/*NULL if s (input char) doesn't match the available 5 operators*/
	return (NULL);
}
