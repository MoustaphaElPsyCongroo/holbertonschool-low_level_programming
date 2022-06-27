#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value, included
 * @max: Maximum value, included
 *
 * Return: A pointer to the created array, NULL if min > max or fail
 */
int *array_range(int min, int max)
{
	int *a;
	int size;
	int i = 0;
	int j = min;

	if (min > max)
		return (NULL);

	if (max > min)
		size = max - min;
	else
		size = 1;

	a = malloc(sizeof(int) * (size));

	if (a == NULL)
		return (NULL);

	while (i < size)
		a[i++] = j++;

	return (a);
}
