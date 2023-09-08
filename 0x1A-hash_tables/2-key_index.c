#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to find the index of.
 * @size: The size of the array of the hash table.
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

    /*ensures an index within the size range of the array*/
	return (hash % size);
}
