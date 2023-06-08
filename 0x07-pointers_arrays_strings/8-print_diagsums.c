#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row, col, sumDiag = 0, sumDiag1 = 0;

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			if (row == col)
				sumDiag += a[row * size + col];

			if (row + col == (size - 1))
				sumDiag1 += a[row * size + col];
		}
	}
	printf("%d, %d\n", sumDiag, sumDiag1);
}
