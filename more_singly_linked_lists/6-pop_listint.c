#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint linked list
 * @head: Head node
 *
 * Return: Head node's data, or 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	int old_data;
	listint_t *newhead;

	if (head == NULL || *head == NULL)
		return (0);

	if ((*head)->next == NULL)
		return (0);

	old_data = (*head)->n;
	newhead = (*head)->next;
	free(*head);
	*head = newhead;

	return (old_data);
}
