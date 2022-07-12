#include <stddef.h>
#include "lists.h"

/**
 * list_len - Gets the number of elements in a singly linked list
 * @h: A singly linked list list_t
 *
 * Return: The number of elements of h
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
