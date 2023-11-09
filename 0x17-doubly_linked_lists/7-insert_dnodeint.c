#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: Pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode,  *node;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;

	for (i = 0; node != NULL; i++)
	{
		if (node->next == NULL)
			return (add_dnodeint_end(h, n));

		if (i == idx - 1)
		{
			newNode = malloc(sizeof(dlistint_t));
			if (!newNode)
				return (NULL);

			newNode->n = n;
			newNode->next = node->next;
			newNode->prev = node;
			node->next = newNode;
			node->next->prev = newNode;
			return (newNode);
		}

		node = node->next;
	}
	return (NULL);
}
