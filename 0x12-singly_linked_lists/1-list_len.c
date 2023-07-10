#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list_t list
 * @h: ponter to the list
 * Return: the number of elements (nodes) in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t _nodes = 0;

	for (; h; _nodes++)
		h = (*h).next;

	return (_nodes);
}