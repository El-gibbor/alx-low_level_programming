#include "lists.h"

/**
 * list_len - prints the number of elements in a linked list_t list
 * @h: ponter to the list
 * Return: the number of elements (nodes) in a linked list
*/
size_t list_len(const list_t *h)
{
	size_t numNodes = 0;

	while (h)
	{
		h = (*h).next;
		numNodes++;
	}
	return (numNodes);
}
