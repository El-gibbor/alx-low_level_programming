#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: address of the header pointer to the list
 * @n: data in the node
 * Return: address of the new element or NULL at failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr_node, *lastNode = malloc(sizeof(listint_t));

	if (!lastNode)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (!*head)
		*head = lastNode;
	else
	{
		curr_node = *head;
		while ((*curr_node).next)
			curr_node = curr_node->next;
		curr_node->next = lastNode;
	}
	return (lastNode);
}
