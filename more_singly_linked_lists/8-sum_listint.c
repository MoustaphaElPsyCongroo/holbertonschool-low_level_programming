#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Gets the sum of all the data of a listint_t linked list
 * @head: Head node
 *
 * Return: The sum of a the list's data, or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = head->n;

	while (head->next != NULL)
	{
		head = head->next;
		sum += head->n;
	}

	return (sum);
}
