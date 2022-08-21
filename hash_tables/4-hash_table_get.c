#include "hash_tables.h"
#include <string.h>;

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search
 *
 * Return: The value associated with the key, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *looper;

	if (!key || strcmp(key, "") == 0 || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	looper = ht->array[index];

	while (looper)
	{
		if (strcmp(looper->key, key) == 0)
			return (looper->value);
		looper = looper->next;
	}

	return (NULL);
}
