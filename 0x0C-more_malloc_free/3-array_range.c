#include <stdlib.h>
#include "main.h"
#include "funcFiles/set_array.c"

/**
 * array_range - creates an array of integers
 * @min: array values ranging to minimum
 * @max: array values ranging to maximum
 * Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int arraySize, *array_alloc;

	if (min > max)
		return (NULL);

	arraySize = (max - min) + 1;

	array_alloc = malloc(arraySize * sizeof(int));
	if (!array_alloc)
		return (NULL);

	set_array_val(array_alloc, min, max);
	return (array_alloc);
}
