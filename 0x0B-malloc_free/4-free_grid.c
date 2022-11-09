<<<<<<< HEAD
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
=======
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
>>>>>>> 0c3aad24241a2a6239e11545d8a1632a0a7f638f
