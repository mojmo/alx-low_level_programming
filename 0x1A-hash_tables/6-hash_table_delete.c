#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its elements.
 * @ht: The hash table to be deleted.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
