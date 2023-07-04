#include "lists.h"

/**
 * pop_listint - deletes head node & return its data
 * @head: address of head pointer to the headnode
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *pop_node;

	if (!*head)
		return (0);

	pop_node = *head;
	data = pop_node->n; /*grab the data member of the node to be deleted*/
	*head = pop_node->next;
	free(pop_node);
	return (data);
}
