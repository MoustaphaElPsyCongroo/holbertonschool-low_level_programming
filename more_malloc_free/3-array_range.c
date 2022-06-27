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
	int i = 0;
	int j = min;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min));

	if (a == NULL)
		return (NULL);

	while (i < max - min)
		a[i++] = j++;

	return (a);
}
