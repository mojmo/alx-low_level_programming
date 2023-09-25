#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		count++;
		printf("%d\n", curr->n);
		curr = curr->next;
	}

	return (count);
}
