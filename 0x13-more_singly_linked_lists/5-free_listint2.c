#include "lists.h"

/**
 * free_listint2 - free listint_t
 * @head: pointer to head reference to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
}
