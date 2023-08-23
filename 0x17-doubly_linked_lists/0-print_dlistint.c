#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head of the list to be printed
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nb_nodes = 0;

	if (!h)
		return (0);

	for (; h; nb_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nb_nodes);
}
