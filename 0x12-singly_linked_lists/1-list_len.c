#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;
	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		len++;
		curr = curr->next;
	}

	return (len);
}
