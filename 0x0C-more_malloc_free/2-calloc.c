#include <stdlib.h>
#include "main.h"
#include "funcFiles/myMemSet.c"
#include <string.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: number of array elements
 * @size: size of bytes to be alloctated to each nmemb elements
 * Return: a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
     void *arr_alloc;

    if (nmemb == 0 || size == 0)
        return (NULL);

    arr_alloc = malloc(nmemb * size);
    if (!arr_alloc)
        return (NULL);

    memset(arr_alloc, '0', size);
    return (arr_alloc);
}