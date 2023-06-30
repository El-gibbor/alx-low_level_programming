#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: ponter to the list to be printed
 * Return: the length element of the list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h; i++);
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
