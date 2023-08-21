#include "main.h"

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
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	while (i <= len)
	{
		dest = &src[i];

		return (dest);

		dest++;
		i++;
	}

	return (dest);

}
