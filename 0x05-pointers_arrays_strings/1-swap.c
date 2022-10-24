#include "main.h"

/**
 * swap_int - Swaps the value of teo integers
 * @a: first parameter
 * @b: Second Parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


