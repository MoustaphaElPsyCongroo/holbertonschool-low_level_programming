#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list
 * @head: First node of the list
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
