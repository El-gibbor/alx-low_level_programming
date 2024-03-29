#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the initialized struct instance
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!d->name)
			(*d).name = "(nil)";
		if (!d->owner)
			(*d).owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
