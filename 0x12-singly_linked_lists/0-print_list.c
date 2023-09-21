#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	unsigned count = 0;
	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		count++;
		if (curr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", curr->len, curr->str);
		curr = curr->next;
	}

	return (count);
}
