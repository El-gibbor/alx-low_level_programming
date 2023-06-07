#include "main.h"

/**
 * _strlen_recursion -returns the lenght of a string
 * @s: string to check for and return its lenght
 * Return: lenghth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
