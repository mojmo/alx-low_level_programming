#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 *
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: is the size, in bytes, of the allocated space for ptr.
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to new allocated memory space which
 * contain the content of ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *spc = NULL;
	char *p1 = NULL;
	char *p2 = NULL;
	unsigned int i;

	if (old_size == new_size || old_size > new_size)
		return (ptr);

	if (ptr == NULL)
	{
		spc = malloc(new_size);
		return spc;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	spc = malloc(new_size);

	if (spc == NULL)
		return (NULL);

	p1 = spc;
	p2 = ptr;

	for(i = 0; i < old_size; i++)
		p1[i] = p2[i];

	free(ptr);

	return (spc);
}
