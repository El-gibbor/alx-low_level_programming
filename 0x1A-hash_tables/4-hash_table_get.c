#include "hash_tables.h"

/**
 * hash_table_get - Retrieve a hash table value based on its key.
 * @table: The hash table to search.
 * @key: The key of the valueto be retrieved
 * Return: value associated with the specified key if found; otherwise, NULL.
 */
char *hash_table_get(const hash_table_t *table, const char *key)
{
	hash_node_t *current_node = NULL;
	unsigned long int index = 0;

	if (!table || !key || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, table->size);

	current_node = table->array[index];
	while (current_node)
	{
		if (strcmp(key, current_node->key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}
	return (NULL);
}
