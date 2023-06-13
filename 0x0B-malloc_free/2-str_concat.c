#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - allocate & return address to a concatenated string
 * @s1: destination of concatenated string
 * @s2: string to be concatenated to s1
 * Return: base address of the concatenated string (s1)
 * Author: Elgibbor
 */
char *str_concat(char *s1, char *s2)
{
	int strLen, i, j, s1_len = 0, s2_len = 0;
	char *ptrConcat;
	
	/* get the length of both strings */
	if (s1 != NULL)
		for (; s1[s1_len]; s1_len++)
			;
	if (s2 != NULL)
		for (; s2[s2_len]; s2_len++)
		;
	
	/* allocate memory of size equal to the length of both strings */
	strLen = s1_len + s2_len;
	ptrConcat = malloc(sizeof(char) * strLen + 1);
	if (!ptrConcat)
		return (NULL);
	
	/* assign destination string to the new allocated memory */
	for (i = 0; i < s1_len; i++)
		ptrConcat[i] = s1[i];
	
	/* concatinate str2 to str1 starting from the last charcter of str1 */
	for (j = 0; j < s2_len; j++)
		ptrConcat[s1_len + j] = s2[j];

	ptrConcat[strLen] = '\0';
	return (ptrConcat);
}
