#include "lists.h"

/**
 * _strlen - returns the lenth of a string
 * @s: Paremeter to count
 * Return: length.
 */
int _strlen(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a l_list
 * @head: pointer to a pointer to the first node in the list
 * @str: member of the struct node (data field)
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node, *curr_node;

	last_node = malloc(sizeof(list_t));
	if (!last_node)
		return (NULL);

	(*last_node).str = strdup(str);
	(*last_node).len = _strlen(str);
	(*last_node).next = NULL;

	if (!*head)
		*head = last_node;
	else
	{
		curr_node = *head;
		while ((*curr_node).next)
			curr_node = (*curr_node).next;
		(*curr_node).next = last_node;
	}
	return (last_node);
}
