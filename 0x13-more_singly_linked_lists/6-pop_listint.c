#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 * @head: pointer to head of the list.
 *
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	num = temp->n;

	free(temp);
	temp = NULL;

	return (num);
}
