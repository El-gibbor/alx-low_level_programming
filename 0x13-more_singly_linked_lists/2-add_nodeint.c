#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a list
 * @head: address of the head pointer to the list
 * @n: data in the node
 * Return: address of the new element(node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
