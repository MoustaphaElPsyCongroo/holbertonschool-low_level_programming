#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: The linked list
 * @str: The content to add to the node
 *
 * Return: The address of the new node, or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	char *s = strdup(str);
	int length = 0;

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		free(s);
		free(new_head);
		return (NULL);
	}

	while (s[length])
		length++;

	new_head->str = s;
	new_head->len = length;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
