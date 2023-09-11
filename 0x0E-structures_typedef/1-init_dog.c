#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to the struct
 * @name: a value to be assigned to a struct member
 * @age: a value to be assigned to a struct member
 * @owner: a value to be assigned to a struct member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
