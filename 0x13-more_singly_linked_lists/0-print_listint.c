#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  all the elements of a listint_t list.
 *
 * @h: pointer to the first node
 *
 * Return: Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t node;

	node = 0;
	if (h == NULL)
		return (node);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
