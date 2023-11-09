#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	if (!head || !*head)
		return (-1);

	node = *head;

	for (; node && index; index--)
		node = node->next;

	if (node == NULL)
		return (-1);

	if (node == *head)
	{
		*head = node->next;

		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;

		if (node->next != NULL)
			node->next->prev = node->prev;
	}

	free(node);
	node = NULL;
	return (1);
}
