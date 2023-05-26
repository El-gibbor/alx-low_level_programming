#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @src: source of string to be concatinated
 * @dest: destination of where the str is to be concatinated
 * @n: The length of char to be concatinated
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int indx_d = 0, indx_s = 0;

	for (; dest[indx_d] != '\0'; indx_d++)
		;
	for (; src[indx_s] != '\0' && indx_s < n; indx_s++)
	{
		dest[indx_d] = src[indx_s];
		indx_d++;
	}
	dest[indx_d] = '\0';
	return (dest);
}
