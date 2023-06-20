#include "dog.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * free_dog - frees the struct template dog and its members
 * @d: pointer to the struct (dog) of type dog_t
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
