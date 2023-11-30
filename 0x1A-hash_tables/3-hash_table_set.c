#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table or
 * updates the value of an existing key.
 * @ht: The hash table in which to add or update the element.
 * @key: The key to be added or updated.
 * @value: The value associated with the key.
 *
 * Description:
 * This function adds an element to a hash table or updates the value of
 * an existing key. It computes the index for the key using the key_index
 * function, and then traverses the linked list at that index to check
 * for collisions.If the key already exists, the value is updated; otherwise,
 * a new key-value pair is added. Memory is allocated for a new hash node
 * when necessary.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_pair, *tmp;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	new_pair = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_pair)
		return (0);

	new_pair->key = strdup(key);
	new_pair->value = strdup(value);

	if (!new_pair->key || !new_pair->value)
	{
		free(new_pair);
		return (0);
	}

	new_pair->next = ht->array[index];
	ht->array[index] = new_pair;

	return (1);
}
