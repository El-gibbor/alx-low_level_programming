#include "main.h"

/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter to count
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

