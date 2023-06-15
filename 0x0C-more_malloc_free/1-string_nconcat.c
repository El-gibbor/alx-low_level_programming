#include <stdlib.h>
#include "main.h"
#include "myStrlen.c"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatinated into a newly allocated space in memory.
 * @s2: concatinates n number of bytes from this string to the one from s1
 * @n: number of bytes be taken from s2 and concatinate to s1
 * Return: pointer to the allocated space in memory containing what is above
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n_byte = n, total_str, s2_str, strIndx;
	char *str_alloc;
	char *charInStr;

	/* Handle parameters as empty string when they are NULL*/
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	if (n_byte < 0)
		return (NULL);

	/* get total length of the expected strings for concatination */
	if (n_byte >= myStrlen(s2))
		total_str = myStrlen(s1) + myStrlen(s2);
	else
		total_str = myStrlen(s1) + n_byte;

	/* allocate memory for concatination and handle malloc failure */
	str_alloc = malloc(total_str + 1);
	if (!str_alloc)
		return (NULL);

	/*hold base address with return ptr & perform concatination with another ptr*/
	charInStr = str_alloc;
	for (strIndx = 0; s1[strIndx] != '\0'; strIndx++)
	{
		*charInStr = s1[strIndx];
		charInStr++;
	}
	/* concatinate n byte of str2 into the allocated memory*/
	for (s2_str = 0; s2[s2_str] != '\0' && s2_str < n_byte; s2_str++)
	{
		*charInStr = s2[s2_str];
		charInStr++;
	}
	*charInStr = '\0';
	return (str_alloc);
}
