#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the head pointer to the l_list
 * @idx: the indx where the new node should be inserted in te list
 * @n: node/value to be inserted
 * Return: address of the new node, or NULL if it failed
 */
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr_node, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*head || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	curr_node = *head;
	while (idx > 1 && curr_node)
	{
		curr_node = curr_node->next;
		idx--;
	}
	/*curr_node gets to NULL before the given idx, means idx is out of bound*/
	if (!curr_node)/*u can aswell free(new_node) before returning Null. insertion isn't possible*/
		return (NULL);
	new_node->next = curr_node->next;
	curr_node->next = new_node;
	return (new_node);
}
