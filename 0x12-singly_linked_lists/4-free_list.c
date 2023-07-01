#include "lists.h"

/**
 * free_list - frees/deallocate a single linked list
 * @head: pointer to the list to be freed
 */
void free_list(list_t *head)
{
	list_t *trv_ptr;

	while (head)
	{
		trv_ptr = head;
		head = (*head).next;
		free((*trv_ptr).str);
		free(trv_ptr);
	}
}
