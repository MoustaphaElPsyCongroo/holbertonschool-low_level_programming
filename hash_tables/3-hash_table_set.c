#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A linked list
 * @str: The content of the new node
 *
 * Return: The address of the new element, or NULL if fail
 */
hash_node_t *add_node_end(hash_node_t **head, char *key, const char *str)
{
	hash_node_t *last;
	hash_node_t *new_node;
	char *s = strdup(str);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(s);
		free(new_node);
		return (NULL);
	}

	new_node->value = s;
	new_node->key = key;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key to add
 * @value: The value associated to the key
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head;
	hash_node_t *success;

	if (!ht || !key || key[0] == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	head = ht->array[index];
	success = add_node_end(&head, (char *)key, value);

	if (!success)
		return (0);
	return (1);
}
