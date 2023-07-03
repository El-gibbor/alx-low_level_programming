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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the address of the first node
 * @str: string to be added(duplicated) to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	(*new_node).str = strdup(str);
	(*new_node).len = _strlen(str);

	(*new_node).next = *head;
	*head = new_node;
	return (new_node);
}
