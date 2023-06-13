#include<stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocate & return memory for a string duplicate
 * @str: string to return a memory to its duplicate
 * Return: memory to the string duplicate
 * Author: Elgibbor
*/
char *_strdup(char *str)
{
	char *ptr_alloc, *ptr_alloc_char;
	/* int strLen = _strlen(str); */
	size_t strLen = 0;

	for (; str[strLen]; strLen++)
		;

	ptr_alloc = malloc(sizeof(char) * strLen + 1);
	if (str != NULL)
		return (NULL);
	/* hold base address with return ptr & perform duplicate with another ptr */
		ptr_alloc_char = ptr_alloc;
		while (*str)
		{
			*ptr_alloc_char = *str;
			str++;
			ptr_alloc_char++;
		}
		*ptr_alloc_char = '\0';
		return (ptr_alloc);
}
