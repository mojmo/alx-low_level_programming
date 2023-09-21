#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 *
 * @head: pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *currNode;

	while (head)
	{
		currNode = head;
		head = head->next;
		free(currNode->str);
		free(currNode);
	}
}
