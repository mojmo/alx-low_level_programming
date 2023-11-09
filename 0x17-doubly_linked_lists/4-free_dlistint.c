#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 *
 * @head: a pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (!head)
		return;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}

	head = NULL;
}
