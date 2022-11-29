#include "lists.h"

/**
 * pop_listint - deletes the head of a node of listint_t
 * @head: head reference
 *
 * Return: head node data if successful, 0 if empty
 */

int pop_listint(listint_t **head)
{
	int res;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	res = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (res);
}

