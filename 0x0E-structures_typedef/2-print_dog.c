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
			printf("(nil)");
		if (!d->age)
			printf("(nil)");
		if (!d->owner)
			printf("(nil)");
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
