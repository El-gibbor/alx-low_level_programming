#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination of the copied string
 * @src: source of the string to be copied to <dest>
 * Return: pointer to the updated string after copying (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
