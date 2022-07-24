#include "lists.h"

/**
 * dlistint_len - Gets the number of elements of a doubly linked list
 * @h: Head node
 *
 * Return: Number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
