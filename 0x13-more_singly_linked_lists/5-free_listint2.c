#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: address of the head pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;

	while (*head)
	{
		temp_ptr = *head;
		*head = (*head)->next;
		free(temp_ptr);
	}
	head = NULL;
}
