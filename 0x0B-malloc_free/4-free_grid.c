#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2d grid
 * @grid: 2 pointer 2d grid
 * @height: he of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
