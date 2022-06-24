#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * alloc_grid - Initializes a 2 dimensional array of zeroes
 * @width: The number of sub arrays
 * @height: The number of outer arrays
 *
 * Return:
 *	A pointer to the array
 *	NULL on failure or if width or height are 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * (width));

		if (a[i] == NULL)
		{
			int temp;

			for (temp = -1; temp < i; temp++)
				free(a[temp + 1]);
			free(a);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}

	return (a);
}
