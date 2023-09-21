#include "lists.h"

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: A pointer of the string.
 *
 * Return: The length of the string.
 */

unsigned int  _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: pointer to the head of the list.
 * @str: a string member of each node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *curr = malloc(sizeof(list_t));

	if (curr == NULL)
		return (NULL);

	curr->str = strdup(str);
	curr->len = _strlen((char *)str);
	curr->next = *head;
	*head = curr;

	return (*head);
}
