#include <stdlib.h>
#include "main.h"
#include "myStrlen.c"
#include "myStrnCat.c"
#include "myStrCat.c"
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatinated into a newly allocated space in memory.
 * @s2: concatinates n number of bytes from this string to the one from s1
 * @n: number of bytes be taken from s2 and concatinate to s1
 * Return: pointer to the allocated space in memory containing what is above
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n_byte = n, total_str;
	char *str_alloc;

	/* Handle parameters as empty string when they are NULL*/
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n_byte < 0)
		return (NULL);

	if (n_byte >= myStrlen(s2))
		total_str = myStrlen(s1) + myStrlen(s2);
	else
		total_str = myStrlen(s1) + n_byte;

	str_alloc = malloc(total_str + 1);
	if (!str_alloc)
		return (NULL);

	*str_alloc = '\0';

	myStrCat(str_alloc, s1);
	myStrnCat(str_alloc, s2, n);

	return (str_alloc);
}
