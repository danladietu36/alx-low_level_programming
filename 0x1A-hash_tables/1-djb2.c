#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str1)
{
	unsigned long int hash;
	int count1;

	hash = 5381;
	while ((count1 = *str1++))
		hash = ((hash << 5) + hash) + count1;

	return (hash);
}
