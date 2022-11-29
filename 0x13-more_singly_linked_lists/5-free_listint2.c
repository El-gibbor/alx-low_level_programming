#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: listint_t to free
 * Return: void - nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}
