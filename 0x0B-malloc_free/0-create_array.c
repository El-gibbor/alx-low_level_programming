#include<stdio.h>
#include <stdlib.h>

/**
 * create_array - allocate memory, create and initialises an array of char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: a pointer to the memory allocated for the array
*/

	char *create_array(unsigned int size, char c)
	{
		char *ptr_alloc;
		unsigned int indx;

		if (size == 0)
			return (NULL);

		ptr_alloc = malloc(size * sizeof(char));

		if (ptr_alloc == NULL)
			return (NULL);

		for (indx = 0; indx < size; indx++)
		{
			ptr_alloc[indx] = c;
		}
		return (ptr_alloc);
	}
