#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Gets the number of elements of a listint_t linked list
 * @h: The list
 *
 * Return: The number of elements of h
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
