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
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *node;
	unsigned int i;

	if (!newNode || !h)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}

	node = *h;

	for (i = 0; node != NULL; i++)
	{
		if (i == idx - 1)
		{
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
