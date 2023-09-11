#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that creates a new dog struct.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to a new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return newDog;
}
