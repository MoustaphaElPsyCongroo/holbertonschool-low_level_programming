#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table where to add or update the key/value
 * @key: The key to add
 * @value: The value associated to the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head, *looper;

	if (!ht || !key || key[0] == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	looper = ht->array[index];

	while (looper)
	{
		if (strcmp(looper->key, key) == 0)
		{
			free(looper->value);
			looper->value = strdup(value);
			if (!looper->value)
				return (0);
			return (1);
		}
		looper = looper->next;
	}
	head = malloc(sizeof(hash_node_t));
	if (!head)
		return (0);
	head->key = strdup(key);
	if (!head->key)
	{
		free(head);
		return (0);
	}
	head->value = strdup(value);
	if (!head->value)
	{
		free(head);
		free(head->key);
		return (0);
	}
	head->next = ht->array[index];
	ht->array[index] = head;
	return (1);
}
