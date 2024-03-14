#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted singly linked list with
 * an additional layer of forward pointers (skip list).
 * @list: A pointer to the head of the skip list.
 * @value: The value to search for.
 *
 * Description: Prints a value every time it is compared in the skip list.
 * Uses the express lane pointers to skip over nodes during search.
 *
 * Return: If the value is found, a pointer to the node containing the value.
 * If the value is not found or the list is NULL, NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev_jump;

	if (list == NULL)
		return (NULL);
	current = prev_jump = list;

	/* Traverse the list using the express lane pointers */
	while (current->next != NULL && current->n < value)
	{
		prev_jump = current; /* Update previous jump pointer */

		/* Move current pointer to the next node in the express lane */
		if (current->express != NULL)
		{
			current = current->express;
			printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
		}
		else
		{
			/* Traverse to the end of the list if express lane ends */
			while (current->next != NULL)
				current = current->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev_jump->index, current->index);

	/* Perform linear search within the identified range */
	while (prev_jump->index < current->index && prev_jump->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev_jump->index, prev_jump->n);
		prev_jump = prev_jump->next;
	}
	printf("Value checked at index [%ld] = [%d]\n",
			prev_jump->index, prev_jump->n);
	/* Return pointer to the node where the value is found (if found),*/
	/* otherwise return NULL */
	return (prev_jump->n == value ? prev_jump : NULL);
}
