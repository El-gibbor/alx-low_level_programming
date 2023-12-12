#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers using the
* Linear search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: if value not present in array return -1, else return first index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t h = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (h < size)
	{
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);
		if (array[h] == value)
			return (h);
		h++;
	}

	return (-1);
}
