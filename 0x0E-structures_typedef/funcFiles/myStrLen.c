#include "../dog.h"
#include <stdio.h>
/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter (string) to count
 * Return: length.
 */

int myStrLen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
