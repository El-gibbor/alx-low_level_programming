#include "lists.h"

/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter to count
 * Return: length.
 */
int _strlen(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}