#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t list.
 *
 * @head: pointer to the head of the list.
 * @n: a value to be added in the the new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (curr != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = newNode;
	}
	else
		*head = newNode;

	return (newNode);
}
