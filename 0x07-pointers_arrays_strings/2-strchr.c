#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointer to the located character or null if not found
 */
char *_strchr(char *s, char c)
{
	int indx;

	for (indx = 0; s[indx]; indx++)
	{
		if (s[indx] == c)
			return (&(s[indx]));
	}
}
