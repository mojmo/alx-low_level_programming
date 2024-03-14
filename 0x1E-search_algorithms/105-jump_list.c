#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 * linked list of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Description: Prints a value every time it is compared in the list.
 * Uses the square root of the list size as the jump step.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 * Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, jump_index;
	listint_t *current, *prev_jump;

	if (list == NULL)
		return (NULL);
	jump_step = 0;
	jump_index = sqrt(size);
	current = prev_jump = list;

	/* Perform jump search */
	while (current->index + 1 < size && current->n < value)
	{
		prev_jump = current; /* Update previous jump pointer */
		jump_step += jump_index; /* Update jump step */
		while (current->index < jump_step)
		{
			if (current->index + 1 == size)
				break;

			current = current->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes");
	printf(" [%ld] and [%ld]\n", prev_jump->index, current->index);

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
