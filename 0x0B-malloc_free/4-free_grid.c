#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2d
 * @grid: array
 * @height: h grid.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}

