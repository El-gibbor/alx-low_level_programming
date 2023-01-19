#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: first parameter to check and copy
 * @src: second parameter to check and copy
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
