#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the head ref
 * @idx: position to insert node
 * @n: variable
 *
 * Return: the address of the new node, or null if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new;

	if (head == NULL)
		return (0);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;

