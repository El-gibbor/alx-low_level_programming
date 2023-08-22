#include "main.h"

/**
 * _memcpy - copies n bytes from memory area @src
 * to memory area @dest
 * @dest: were bytes are copied to
 * @src: where bytes are copied from
 * @n: function copies
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		return (dest);
}
