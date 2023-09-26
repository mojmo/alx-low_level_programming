#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int  count = 0;
	long int diff;

	while (head != NULL)
	{
		/**
		 * If the difference is negative or equal to zero, we are attempting to
		 * access an address that we have previously visited.
		 */
		diff = head - head->next;
		count++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (count);
}
