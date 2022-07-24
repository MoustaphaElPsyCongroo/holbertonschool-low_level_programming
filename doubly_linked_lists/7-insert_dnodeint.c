#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position of
 * a doubly linked list
 * @h: Head node
 * @idx: Index of the node to insert
 * @n: New node's data
 *
 * Return: A pointer to the new node, or NULL if fail or not possible to add
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *looper = *h;
	dlistint_t *new_node;

	if (idx == 0 || *h == NULL)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		while (i < idx - 1)
		{
			if (looper->next == NULL && idx - i != 1)
			{
				return (NULL);
			}
			else if (looper->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
				return (new_node);
			}

			looper = looper->next;
			i++;
		}

		new_node = malloc(sizeof(dlistint_t));

		if (new_node == NULL)
			return (NULL);

		new_node->next = looper->next;
		new_node->prev = looper;
		looper->next->prev = new_node;
		looper->next = new_node;
	}
	return (new_node);
}
