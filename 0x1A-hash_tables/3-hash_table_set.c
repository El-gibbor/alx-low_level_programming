#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key to add to the hash table.
 * @value: The value associated with the key.
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *tmp_ptr;
    unsigned long int index;

    if (!ht || !key || !*key || !value)
        return (0);

    /* Calculate the index using the hash function */
    index = key_index((unsigned char *)key, ht->size);

    /* Search for an existing node with the same key */
    tmp_ptr = ht->array[index];
    while (tmp_ptr)
    {
        if (strcmp(tmp_ptr->key, key) == 0)
        {
            /* Key already exists, update the value */
            free(tmp_ptr->value);
            tmp_ptr->value = strdup(value);
            if (!tmp_ptr->value)
                return (0);
            return (1);
        }
        tmp_ptr = tmp_ptr->next;
    }
    /* If key does not exist, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    /* Duplicate the key and value strings */
    new_node->key = strdup(key);
    new_node->value = strdup(value);

    /* Check for strdup failures */
    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }
    /* Insert the new node at the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
