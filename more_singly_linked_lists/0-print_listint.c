#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t singly linked list
 * @h: The list
 *
 * Return: The number of nodes of h
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
