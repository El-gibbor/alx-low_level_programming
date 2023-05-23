#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: argument (string) to be reversed
 * Return: void
 * Authur: ELGIBBOR
 */
// void rev_string(char *s)
// {
// 	int i, len;

// 	/* get the sring legnth */
// 	for (len = 0; s[len] != '\0'; len++)
// 	{
// 		;
// 	}
// 	/* swap indx 0 with last indx progresively till the midle indx */
// 	for (i = 0; i < len / 2; i++)
// 	{
// 		char swap_var;

// 		swap_var = s[i];
// 		s[i] = s[len - 1 - i];
// 		s[len - 1 - i] = swap_var;
// 	}
// }
void rev_string(char *s)
	{
	int a = 0, b, c;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
