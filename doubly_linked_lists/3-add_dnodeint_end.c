#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Head node
 * @n: New node's data
 *
 * Return: A pointer to the new node, or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *looper;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		looper = *head;

		while (looper->next != NULL)
		{
			looper = looper->next;
		}

		looper->next = new_node;
		new_node->prev = looper;
	}

	return (new_node);
}
