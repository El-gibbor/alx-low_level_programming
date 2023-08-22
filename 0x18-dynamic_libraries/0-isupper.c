#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: parameter to check
 * Return: 1 if true,otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
