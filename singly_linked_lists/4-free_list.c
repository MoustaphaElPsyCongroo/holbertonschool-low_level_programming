#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a singly linked list
 * @head: A linked list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
