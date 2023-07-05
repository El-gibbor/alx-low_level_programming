#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the head pointer to the l_list
 * @idx: the indx where the new node should be inserted in te list
 * @n: node/value to be inserted
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr_node, *node_at_indx = malloc(sizeof(listint_t));

	if (!node_at_indx)
		return (NULL);

	node_at_indx->n = n;

	if (!*head || idx <= 0)
	{
		node_at_indx->next = *head;
		return (node_at_indx);
	}
	curr_node = *head;
	while (curr_node->next && --idx > 0)/*if curr_node isnt NULL and idx is non-zero*/
		curr_node = curr_node->next;

	node_at_indx->next = curr_node->next;
	curr_node->next = node_at_indx;

	return (node_at_indx);
}
