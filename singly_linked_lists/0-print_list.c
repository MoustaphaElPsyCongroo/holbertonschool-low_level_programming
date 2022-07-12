#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a singly linked list
 * @h: A pointer to a singly linked list list_t
 *
 * Return: The number of nodes of the list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		i++;
		h = h->next;
	}

	return (i);
}
