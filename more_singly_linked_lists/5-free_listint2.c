#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list, setting the head to NULL
 * @head: Head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tofree;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tofree = (*head)->next;
		free(*head);
		*head = tofree;
	}
}
