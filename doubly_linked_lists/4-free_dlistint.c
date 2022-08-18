#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tofree;

	while (head != NULL)
	{
		tofree = head->next;
		free(head);
		head = tofree;
	}
}
