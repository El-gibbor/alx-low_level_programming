#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: process termination with exit status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *ptr_alloc;

	ptr_alloc = malloc(b * sizeof(int));
	if (!ptr_alloc)
		exit(98);

	return (ptr_alloc);
}
