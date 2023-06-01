#include "main.h"
/**
 * reverse_array - reverse a given array
 * @a:array to be reversed
 * @n:lenght or size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int swp_var, i, halfLen = (n - 1) / 2;

	for (i = 0; i < halfLen; i++)
	{
		swp_var = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swp_var;
	}
}

