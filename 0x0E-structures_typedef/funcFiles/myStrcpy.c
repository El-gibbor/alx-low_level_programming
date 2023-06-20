#include "../dog.h"
/**
 * myStrcpy - copy a string from source string to destination str
 * @src: source string to be copied from
 * @dest: destination str to be copied into.
 * Return: pointer to the destination str
*/
char *myStrcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
