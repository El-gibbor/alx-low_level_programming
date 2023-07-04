#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: head pointer to the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	for (; h; num_elem++)
		h = h->next;

	return (num_elem);
}
