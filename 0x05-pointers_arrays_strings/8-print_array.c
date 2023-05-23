#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: first parameter to check
 * @n: second parameter to check
 * Return: 0 (Success)
 * Authur: ELGIBBOR
 */

void print_array(int *a, int n)
{
	int a_indx;

	for (a_indx = 0; a_indx < n; a_indx++)
	{
		if (a_indx != n - 1)
		printf("%d, ", a[a_indx]);
			printf("%d", a[a_indx]);
	}
	printf("\n");
}
