#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in
 * a linked listint_t list.
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
