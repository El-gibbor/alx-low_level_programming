#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: size of the array
 * @cmp: ptr to the func to be used to compare values
 * Return: Index of the first element from cmp after comparing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1); /*if above codition wasnt met (no matching element)*/
}
