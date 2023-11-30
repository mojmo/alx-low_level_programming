#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 * a key in a hash table.
 * @ht: The hash table from which to retrieve the value.
 * @key: The key for which to retrieve the value.
 *
 * Description:
 * This function retrieves the value associated with a given key
 * in a hash table. It computes the index for the key using the
 * key_index function and then traverses the linked list at that
 * index. If the key is found, the corresponding value is
 * returned; otherwise, NULL is returned.
 *
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
