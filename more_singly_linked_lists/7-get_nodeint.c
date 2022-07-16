#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list
 * @head: Head node
 * @index: The node to get's index
 *
 * Return: The nth node, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		head = head->next;
		i++;
	}

	return (head);
}
