#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int printed = 0;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current_node = ht->array[i];

		while (current_node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			printed = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
