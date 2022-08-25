#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array
 * @array: The array to search in
 * @size: The array's size
 * @value: The value to search for
 *
 * Return: The first index where value is located, -1 if not found or no array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
