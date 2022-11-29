#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t
 * @head: head of the list
 * @index: position of the node to be gotten
 *
 * Return: the nth node of the listint_t, NULL if it doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (index == 0 && head)
		return (head);

	for (i = 0; head && i < index; i++)
		head = head->next;

	if (head)
		return (head);
	return (NULL);
}
