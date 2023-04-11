#include "main.h"
#include <stdlib.h>

/**
 *free_grid - Frees a 2 dimensional array of int
 *@grid: Array to be freed
 *@height: Height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
