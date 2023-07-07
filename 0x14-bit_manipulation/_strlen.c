#include "main.h"

/**
 * _strlen - gets the lenght of a string
 * @s: the passed string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;
	return (i);
}
