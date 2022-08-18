#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table.
 * @size: Size of hash table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **arr;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	table->size = size;
	table->array = arr;

	return (table);
}
