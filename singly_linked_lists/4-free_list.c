#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a singly linked list
 * @head: A linked list
 */
void free_list(list_t *head)
{
	list_t *tofree;

	while (head != NULL)
	{
		tofree = head->next;
		free(head->str);
		free(head);
		head = tofree;
	}
}
