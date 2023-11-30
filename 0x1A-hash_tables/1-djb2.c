#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 * @str: The string to be hashed.
 *
 * Description:
 * The djb2 algorithm is a widely used hash function created by Dan Bernstein.
 * It iterates over each character in the input string, updating the hash
 * based on the ASCII value of the character. The algorithm uses a constant
 * (5381) and the bitwise left shift operation to efficiently combine the
 * existing hash with the next character. The final hash value is returned.
 *
 * Return: The hash value of the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
