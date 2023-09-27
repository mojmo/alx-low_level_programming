#include "lists.h"

/**
 * is_unique - checks to see if the node is unique.
 *
 * @head: pointer to head of the list.
 * @newNode: the node to be checked.
 * @len: the length of the list before adding the new node.
 *
 * Return: 1 if the node is unique, if not return 0.
 */

int is_unique(const listint_t *head, listint_t *newNode, int len)
{
	listint_t *curr = (listint_t *)head;
	int flag;

	while (len > 0)
	{
		if (curr == newNode)
		{
			flag = 0;
			break;
		}

		flag = 1;
		curr = curr->next;
		len--;
	}
	return (flag);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *currNode = (listint_t *)head;
	unsigned int  count = 0;

	while (currNode)
	{
		count++;
		printf("[%p] %d\n", (void *)currNode, currNode->n);

		if (is_unique(head, currNode->next, count))
			currNode = currNode->next;
		else
		{
			printf("-> [%p] %d\n", (void *)currNode->next, currNode->next->n);
			break;
		}
	}

	return (count);
}
