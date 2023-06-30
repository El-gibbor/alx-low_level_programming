#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: ponter to the list to be printed
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t numNodes = 0;

	while (h)
	{
		if (!(*h).str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", ((*h).len), (*h).str);
		h = (*h).next;
		numNodes++;
	}
	return (numNodes);
}
