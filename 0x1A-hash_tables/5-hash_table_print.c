#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table.
 * @ht: The hash table to be printed.
 *
 * Description:
 * This function prints the key-value pairs of a given hash table in
 * the format: {'key1': 'value1', 'key2': 'value2', ...}.
 * If the hash table is NULL, it prints an empty set {}.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *node;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (flag > 0)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			flag++;

			node = node->next;
		}
	}

	printf("}\n");
}
