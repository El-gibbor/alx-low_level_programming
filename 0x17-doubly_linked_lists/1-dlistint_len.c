#include "lists.h"

/**
 * dlistint_len - return number of elements in a linked list
 * @h: head pointer of the list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int nb_elem = 0;

	if (!h)
		return (0);

	for (; h; nb_elem++)
		h = h->next;
	return (nb_elem);
}
