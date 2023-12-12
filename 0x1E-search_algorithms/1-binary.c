#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers using the
* Binary search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: the value to search for
* Return: if value not present in array or if array is NULL -1, else
* return first index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	size_t h, r, l;

	if (array == NULL || size == 0)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		printf("Searching in array: ");
		for (r = l; r <= h; r++)
		{
			printf("%d", array[r]);
			if (r < h)
				printf(", ");
		}
		printf("\n");

		r = l + (h - l) / 2;
		if (array[r] == value)
			return (r);
		else if (array[r] > value)
			h = r - 1;
		else
			l = r + 1;
	}

	return (-1);
}
