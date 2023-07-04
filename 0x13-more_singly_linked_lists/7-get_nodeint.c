#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a linke list
 * @head: head pointer to the linked list
 * @index: nth node/index of the node to be returned startung from 0
 * Return: nth given node of the linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indxCount = 0;
	listint_t *curr_node = head;

	while (curr_node)
	{
		if (indxCount == index)
			return (curr_node);
		indxCount++;
		curr_node = curr_node->next;
	}
	return (NULL);
}
