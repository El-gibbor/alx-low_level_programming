#include "lists.h"

/**
 * sum_listint - returns the sum of all data of a linked list
 * @head: head pointer to the linked list
 * Return: sum of all the data of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum_list = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum_list += head->n;
		head = head->next;
	}
	return (sum_list);
}
