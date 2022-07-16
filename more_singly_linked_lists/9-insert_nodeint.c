#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given linked list position
 * @head: Head node
 * @idx: Index of the list where the node should be added
 * @n: New node's data
 *
 * Return: The address of the new node, or NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *looper;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	looper = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (i < idx - 1)
		{
			if (looper == NULL)
			{
				free(new_node);
				return (NULL);
			}

			looper = looper->next;
			i++;
		}

		new_node->next = looper->next;
		looper->next = new_node;
	}

	return (new_node);
}
