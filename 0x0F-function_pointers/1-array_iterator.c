#include "function_pointers.h"

/**
 * array_iterator - xecutes a func given as a param on each element of array.
 * @size: size of the array
 * @action: a pointer to the function to be used
 * @array: the array itself
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
