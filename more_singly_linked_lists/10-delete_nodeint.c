#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the nth node of a listint_t linked list
 * @head: Head node
 * @index: Index of the node to delete
 *
 * Return: 1 if success, or -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *looper = *head;
	listint_t *to_delete;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
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
	free(to_delete);

	return (1);
}
