#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *curr;

	if (!h)
		return (0);

	curr = (dlistint_t *)h;

	while (curr)
	{
		curr = curr->next;
		len++;
	}

	return (len);
}
