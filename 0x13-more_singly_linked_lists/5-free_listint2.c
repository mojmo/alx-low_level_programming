#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list and set head to NULL.
 *
 * @head: pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *currNode, *h;

	h = *head;

	while (h)
	{
		currNode = h;
		h = h->next;
		free(currNode);
	}

	*head = NULL;
}
