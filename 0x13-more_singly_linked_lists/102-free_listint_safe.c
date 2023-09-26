#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 *
 * @h: pointer to the head of the list.
 *
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *currNode, *head;
	unsigned int count = 0;
	int diff;

	if (h == NULL || *h == NULL)
		return (0);

	head = *h;

	while (head)
	{
		diff = head - head->next;
		if (diff > 0)
		{
			currNode = head;
			head = head->next;
			free(currNode);
			count++;
		}
		else
		{
			free(head);
			head = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
