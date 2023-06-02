#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 * Return: address of s
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}
		}
	}
	return (s);
}

// char *rot13(char *s)
// {
// 	int i;

// 	for (i = 0; s[i]; i++)
// 	{
// 		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
// 			s[i] += 13;
		
// 		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
// 			s[i] -= 13;
// 	}
// 	return s;
// }
