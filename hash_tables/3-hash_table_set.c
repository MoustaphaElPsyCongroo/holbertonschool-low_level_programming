#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

hash_node_t *add_node_beginning(hash_node_t **, char *, const char *);

/**
 * add_node_beginning - Adds a new node at the end of a linked list
 * @head: A linked list
 * @key: THe key of the new node
 * @value: The content of the new node
 *
 * Return: The address of the new element, or NULL if fail
 */
hash_node_t *add_node_beginning(hash_node_t **head, char *key, const char *value)
{
	hash_node_t *new_head;
	char *s = strdup(value);
	int length = 0;

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	new_head = malloc(sizeof(hash_node_t));

	if (new_head == NULL)
	{
		free(s);
		free(new_head);
		return (NULL);
	}

	while (s[length])
		length++;

	new_head->key = key;
	new_head->value = s;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
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
	success = add_node_beginning(&head, (char *)key, value);

	if (!success)
		return (0);
	return (1);
}
