#include "main.h"

/**
 * set_array_val - initializes an array with range of values (min - max)
 * @array: array to be initialized
 * @min: minimum value initialized in the array
 * @max: maximum value initialized in the array
 * Return: pointer to the newly initialised array
*/
int *set_array_val(int *array, int min, int max)
{
	int i;

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}
