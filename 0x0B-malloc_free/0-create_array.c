#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 * initializes it with a specific char.
 * Aurthor: Chiagoziem Elgibbor
 * @size: size(the elements) of array passed in parameter
 * @c: character pass in parameter
 * Return: pointer to memory allocated by malloc
 */
char *create_array(unsigned int size, char c)
{
	char *pntArray;
	unsigned int index = 0;

	/* allocating memory space to the array elements */
	pntArray = (char *) malloc(size * sizeof(c));

	if (pntArray == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (index < size)
	{
		pntArray[index] = c;
		index++;
	}
	return (pntArray);
}
