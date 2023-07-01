#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a l_list
 * @head: pointer to a pointer to the first node in the list
 * @str: member of the struct node (data field)
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr_node, *node_at_end = malloc(sizeof(list_t));

	if (!node_at_end)
		return (NULL);

	(*node_at_end).str = strdup(str);
	(*node_at_end).len = _strlen(str);
	(*node_at_end).next = NULL;

	if (!*head)
		*head = node_at_end;
	else
	{
		curr_node = *head;

		while ((*curr_node).next)
			curr_node = (*curr_node).next;

		(*curr_node).next = node_at_end;
	}
	return (node_at_end);
}
