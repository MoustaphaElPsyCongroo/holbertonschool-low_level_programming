#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * free_grid - Frees a 2-dimensional grid
 * @grid: A pointer to a grid
 * @height: The grid's height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
