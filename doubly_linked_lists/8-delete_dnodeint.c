#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given position of
 * a doubly linked list
 * @head: Head node
 * @index: Index of the node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *looper = *head;
	dlistint_t *to_delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(looper);
		return (1);
	}

	while (i < index - 1)
	{
		if (looper == NULL)
			return (-1);

		looper = looper->next;
		i++;
	}

	to_delete = looper->next;
	looper->next = to_delete->next;
	if (looper->next != NULL)
		looper->next->prev = to_delete->prev;
	free(to_delete);

	return (1);
}
