#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type strut dog
 * @d: pointer to an instance of the struct (object of dog)
 * @name: pointer to the dog name (string literal)
 * @age: age of the dog
 * @owner: pointer to the dog owner (name(string literal))
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	
	(*d).name =name;
	(*d).age = age;
	(*d).owner = owner;
}
