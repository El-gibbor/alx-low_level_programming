#include "main.h"
/**
 * reverse_array - reverse a given array
 * @a:array to be reversed
 * @n:lenght or size of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
