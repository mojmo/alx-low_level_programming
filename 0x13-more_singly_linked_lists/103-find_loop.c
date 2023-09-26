#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 *
 * @head: pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	fast = head->next;
	while (fast != NULL)
	{
		if (fast == fast->next)
			return (fast);

		slow = head;
		while (slow != fast)
		{
			if (slow == fast->next)
				return (fast->next);

			slow = slow->next;
		}

		fast = fast->next;
	}

	return (NULL);
}
