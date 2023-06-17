#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - allocate & return a ptr to 2D array of int initialised with 0
 * @width: rows of the 2D array
 * @height: columns of the 2D array
 * Return: rows base address pointing to address(ptr) of each column in a row
 * Author: Elgibbor
*/
int **alloc_grid(int width, int height)
{
	int **ptr2D, rowIndx, colIndx, row;

	/* Handle invalid 2D array*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory to the rows (base of each column) */
	ptr2D = malloc(sizeof(int *) * height);
	if (ptr2D == NULL)
		return (NULL);

	/* allocate memory to all columns in each row*/
	for (row = 0; row < height; row++)
		ptr2D[row] = malloc(sizeof(int) * width);
	
	/* elements of grid (2D array) initialised to 0 */
	for (rowIndx = 0; rowIndx < height; rowIndx++)
	{
		for (colIndx = 0; colIndx < width; colIndx++)
			ptr2D[rowIndx][colIndx] = 0;
	}
	return (ptr2D);

	/**
	 * for (row = 0; row < height; row++)
	 *	free(ptr2D[row]);

	free(ptr2D);
	*/
}
