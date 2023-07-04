#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptrFree;

	while (head)
	{
		ptrFree = head;
		head = head->next;
		free(ptrFree);
	}
}
