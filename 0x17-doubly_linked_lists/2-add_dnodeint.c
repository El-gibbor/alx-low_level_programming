#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning
 * @head: address of the head pointer (pointer to a pointer)
 * @n: data
 * Return: address of new element or NULL at failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->next = *head;
	
	if (!*head) /*handles empty d-linked list*/
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		
	}
}