#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Print a hash table
 * @ht: The hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	char *str = "";
	char *sign = ", ";

	if (ht)
	{
		printf("{");

		for (; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				printf("%s", str);
				printf("'%s': '%s'", tmp->key, tmp->value);
				str = sign;
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
