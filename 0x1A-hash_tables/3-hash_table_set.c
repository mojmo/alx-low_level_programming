#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table or
 * updates the value of an existing key.
 * @ht: The hash table in which to add or update the element.
 * @key: The key to be added or updated.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_pair = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!new_pair)
		return (0);

	strncpy(new_pair->key, key, strlen(new_pair->key));
	strncpy(new_pair->value, value, strlen(new_pair->value));

	/* Check for collision */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_pair;
	}
	else
	{
		new_pair->next = ht->array[index];
		ht->array[index] = new_pair;
	}

	return (1);
}
