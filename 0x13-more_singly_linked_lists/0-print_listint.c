#include "lists.h"

/**
 * print_listint - prints all integer elements of a list
 * @h: head pointer to the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	for (; h; num_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
