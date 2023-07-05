#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of a l_list.
 * @head: address of the header pointer to the linked list
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *del_curr = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = del_curr->next;
		free(del_curr);
		return (1);
	}
	else
	{
		while (index > 0 && del_curr)
		{
			prev = del_curr;
			del_curr = del_curr->next;
			index--;
		}
		if (!del_curr) /* index out of bound */
			return (-1);
		prev->next = del_curr->next;
		free(del_curr);
		return (1);
	}
}
