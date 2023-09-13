#include "hash_tables.h"

/**
 * hash_table_set - Adds an element into a hash table.
 * @table: The hash table into which we're inserting an element.
 * @key: The key of the hash node.
 * @value: The value of the hash node.
 *
 * Return: Returns 1 for success and 0 for failure.
 */
int hash_table_set(hash_table_t *table, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	if (!table || !key)
		return (0);

	index = key_index((const unsigned char *)key, table->size);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = NULL;

	if (!table->array[index])
		table->array[index] = new_node;
	else
	{
		hash_node_t *current_node = table->array[index];
		new_node->next = current_node;
		table->array[index] = new_node;
	}
	return (1);
}
