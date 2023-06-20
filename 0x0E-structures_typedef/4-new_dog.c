#include <stdlib.h>
#include "dog.h"
#include "funcFiles/myStrLen.c"
#include "funcFiles/myStrcpy.c"

/**
 * new_dog - function that creates a new dog (struct template)
 * @name: name of the dog (string literal(instance of struct))
 * @age: age of the dog (float(struct instance))
 * @owner: name of the dog owner (string literal(struct object))
 * Return: NULL on failure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptrDog;

	ptrDog = malloc(sizeof(dog_t));
	if (!ptrDog)
		return (NULL);

	(*ptrDog).name = malloc(myStrLen(name) + 1);
	if (!(*ptrDog).name)
	{
		free(ptrDog);
		return (NULL);
	}
	(*ptrDog).owner = malloc(myStrLen(owner) + 1);
	if (!(*ptrDog).owner)
	{
		free(ptrDog);
		free((*ptrDog).name);
		return (NULL);
	}
	(*ptrDog).age = age;
	myStrcpy((*ptrDog).name, name);
	myStrcpy((*ptrDog).owner, owner);
	return (ptrDog);
}
