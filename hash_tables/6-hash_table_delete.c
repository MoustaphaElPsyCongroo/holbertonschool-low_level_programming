#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - main function that delet elements
 * @ht: The Hash table you want to delet value / key
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *head;

	if (ht)
	{
		while (i < ht->size)
		{
			head = ht->array[i];

			while (head)
			{
				tmp = head;
				head = head->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
