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

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;

	for (; node && idx != 1; idx--)
		node = node->next;

	if (!node)
		return (NULL);

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = add_dnodeint(&(node->next), n);
	node->next = newNode;
	newNode->prev = node;

	return (newNode);
}
