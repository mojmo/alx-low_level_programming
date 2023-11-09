#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *curr;

	if (!h)
		return (0);

	curr = (dlistint_t *)h;

	while (curr)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		len++;
	}

	return (len);
}
