#include "main.h"

/**
 * myStrCat - concatinates two strings
 * @dest: Destination of the string to be appended
 * @src: String appended to dest
 * Return: pointer to the resulting string
 * Author: ELGIBBOR
 */
char *myStrCat(char *dest, char *src)
{
	int destIndx = 0, srcIndx = 0;

	for (; dest[destIndx] != '\0'; destIndx++)
		;
	for (; src[srcIndx] != '\0'; srcIndx++)
	{
		dest[destIndx] = src[srcIndx];
		destIndx++; /* 1 step forward after appending src char to it */
	}
	dest[destIndx] = '\0';
	return (dest);
}
