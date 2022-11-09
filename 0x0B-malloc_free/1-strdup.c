#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */

char *_strdup(char *str)
{
	char *strNew;
	int x;
	int y;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x++;
	strNew = malloc(sizeof(*str) * x);
	if (strNew == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
	{
		strNew[y] = str[y];
		y++;
	}
	return (strNew);
}
