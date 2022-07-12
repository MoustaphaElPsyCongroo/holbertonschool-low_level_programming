#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: A linked list
 * @str: The content of the new node
 *
 * Return: The address of the new element, or NULL if fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int length;
	list_t *last;
	list_t *new_node;
	char *s = strdup(str);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	length = strlen(s);
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(s);
		free(new_node);
		return (NULL);
	}

	new_node->str = s;
	new_node->len = length;
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
