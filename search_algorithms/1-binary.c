#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array from an interval
 * @array: Array to print
 * @low: Lowest index
 * @high: Highest index
 */
void print_array(int *array, int low, int high)
{
	printf("Searching in array: ");
	while (low < high)
	{
		printf("%d", array[low]);
		if (low < high - 1)
			printf(", ");
		if (low == high - 1)
			printf("\n");

		low++;
	}
}

/**
 * binary_search - Searches for a value in a sorted array
 * @array: The array to search in
 * @size: Array's size
 * @value: Value to search for
 *
 * Return: The index where value if located, -1 if no array or not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	int mid = 0;

	if (!array)
		return (-1);

	while (low <= high)
	{
		print_array(array, low, high + 1);

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);

		if (value < array[mid])
			high = mid - 1;

		if (value > array[mid])
			low = mid + 1;
	}

	return (-1);
}
