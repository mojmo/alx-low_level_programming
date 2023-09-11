#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees dogs structs
 *
 * @d: pointer the struct.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
