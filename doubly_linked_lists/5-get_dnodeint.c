#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a doubly linked list
 * @head: Head node
 * @index: Index of the node to get
 *
 * Return: The found node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head != NULL)
	{
		while (i < index && head != NULL)
		{
			head = head->next;
			i++;
		}
	}

	return (head);
}
