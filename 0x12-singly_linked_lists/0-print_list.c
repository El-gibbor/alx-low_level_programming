#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: ponter to the list to be printed
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t _nodes = 0;

	for (; h; _nodes++)
	{
		if (!(*h).str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", ((*h).len), (*h).str);
		h = (*h).next;
	}
	return (_nodes);
}
