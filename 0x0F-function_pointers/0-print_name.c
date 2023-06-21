#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to character (name to be printed)
 * @f: pointer to function that prints name
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
