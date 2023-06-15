#include "main.h"
/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter (string) to count
 * Return: length.
 */

int myStrlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}