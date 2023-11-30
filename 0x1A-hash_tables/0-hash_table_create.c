#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table with the specified size.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if memory
 * allocation fails.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = (hash_node_t **)calloc(ht->size, sizeof(hash_node_t *));

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
