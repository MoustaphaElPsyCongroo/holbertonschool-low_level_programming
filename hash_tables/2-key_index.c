#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key
 * @key: The key to retrieve
 * @size: The size of the array
 *
 * Return: The index of the key hashed by the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);

	return (hash % size);
}
