#include "main.h"
/**
 * string_toupper - converts lowercase str to uppercase
 * @s: string to be converted
 * Return: char pointer to the converted string
 */
char *string_toupper(char *s)
{
	int indx = 0;

	for (; s[indx] != '\0'; indx++)
	{
		if (s[indx] >= 97 && s[indx] <= 122)
			s[indx] -= 32;

	}
	return (s);
}
