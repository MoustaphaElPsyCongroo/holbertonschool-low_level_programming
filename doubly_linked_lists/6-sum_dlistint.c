#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all data of a doubly linked list
 * @head: Head node
 *
 * Return: The sum of all node's data, or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
