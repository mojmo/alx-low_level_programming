#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of the array elements.
 * @size: size of each element.
 *
 * Return: a pointer to the allocated memory.
 * NULL if the function failed.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *spc = NULL;
	char *ch = NULL;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	spc = malloc(total);

	if (spc == NULL)
		return (NULL);

	ch = spc;

	for (i = 0; i < total; i++)
		ch[i] = 0;

	return (spc);
}
