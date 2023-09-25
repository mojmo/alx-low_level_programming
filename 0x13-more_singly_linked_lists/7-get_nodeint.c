#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 * @index: index of the node to be returned.
 *
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currNode;
	unsigned int i;

	currNode = head;
	for (i = 0; i < index; i++)
	{
		if (currNode)
			currNode = currNode->next;
		else
			return (NULL);
	}

	return (currNode);
}
