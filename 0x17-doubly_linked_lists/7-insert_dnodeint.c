#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr_head = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		ptr_head = ptr_head->next;
		if (ptr_head == NULL)
			return (NULL);
	}

	if (ptr_head->next == NULL)
		return (add_dnodeint_end(h, n));

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = ptr_head;
	new->next = ptr_head->next;
	ptr_head->next->prev = new;
	ptr_head->next = new;

	return (new);
}
