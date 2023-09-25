#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of
 * a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *currNode;
	int sum = 0;

	if (!head)
		return (0);

	currNode = head;

	while (currNode != NULL)
	{
		sum += currNode->n;
		currNode = currNode->next;
	}

	return (sum);
}
