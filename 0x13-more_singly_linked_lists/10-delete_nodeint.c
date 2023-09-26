#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	for (i = 0; curr != NULL; i++)
	{
		prev = curr;
		curr = curr->next;

		if (i == index)
		{
			prev->next = curr->next;
			free(curr);
			curr = NULL;
			return (1);
		}
	}

	return (-1);
}
