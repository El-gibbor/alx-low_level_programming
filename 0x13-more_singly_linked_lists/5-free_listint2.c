#include "lists.h"

/**
 * free_listint2 - frees a list.
 * @head: address of the head pointer to the list
 */
void free_listint2(listint_t **head)
{

	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
	*head = NULL;
}
