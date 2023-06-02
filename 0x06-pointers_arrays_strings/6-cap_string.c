#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 * Author: ELGIBBOR
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* handle first character in the string */
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
