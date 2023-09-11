#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that returns the length of a string.
 *
 * @s: A pointer of the string.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 *
 * @dest: pointer to the copied string address.
 * @src: pointer the the source string address.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

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

	newDog->name = malloc(sizeof(char) * _strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * _strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->owner);
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	newDog->name = _strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = _strcpy(newDog->owner, owner);

	return (newDog);
}
