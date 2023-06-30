#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 * Return: length member of the list_t list
*/
	size_t print_list(const list_t *h)
	{
		size_t i;

		for (i = 0; h; i++)
		{
			if (!(*h).str)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", (*h).len, (*h).str);
			h = (*h).next;
		}
		return (i);
	}
