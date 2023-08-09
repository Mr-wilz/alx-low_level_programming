#include "main.h"
#include <stdlib.h>

/**
 * free_grid - fumction that frees 2 dimensional grid
 * @grid: the grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
