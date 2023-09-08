#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_h_table;

	new_h_table = malloc(sizeof(hash_table_t));
	if (!new_h_table)
		return (NULL);

	(*new_h_table).size = size;
	(*new_h_table).array = malloc(sizeof(hash_node_t *) * size);

	if (!(*new_h_table).array)
		return (NULL);

	/*populate each array elem (bucket) to NULL (no hash nodes stored)*/
	for (; i < size; i++)
		(*new_h_table).array[i] = NULL;

	return (new_h_table);
}
