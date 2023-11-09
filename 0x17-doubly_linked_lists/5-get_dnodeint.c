#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 *
 * @head: a pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The node at the index, if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currNode = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (currNode)
			currNode = currNode->next;
		else
			return (NULL);
	}

	return (currNode);
}
