#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_head = *head;

	if (!*head)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp_head == NULL)
			return (-1);
		tmp_head = tmp_head->next;
	}
	if (!tmp_head)
	{
		*head = tmp_head->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp_head->prev->next = tmp_head->next;
		if (tmp_head->next != NULL)
			tmp_head->next->prev = tmp_head->prev;
	}

	free(tmp_head);
	return (1);
}