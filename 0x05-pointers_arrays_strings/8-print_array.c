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
	int i, arrayLen;

	arrayLen = n;

	for (i = 0; i < arrayLen; i++)
	{
		printf("%d", a[i]);
		if (i != arrayLen - 1)
			printf(", ");
	}
	printf("\n");
}
