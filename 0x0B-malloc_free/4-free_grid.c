#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees all memory allocated to a 2D array
 * @grid: 2D array to be freed
 * @height: rows - Base address of each column
 * Return: Nothing (void)
*/
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
