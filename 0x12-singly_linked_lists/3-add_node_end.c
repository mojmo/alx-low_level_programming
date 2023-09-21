#include "lists.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: A pointer of the string.
 *
 * Return: The length of the string.
 */

unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: a string member of each node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen((char *)str);
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
