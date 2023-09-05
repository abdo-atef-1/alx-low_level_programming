#include "main.h"

/**
 * * free_grid - frees a 2 dimensional grid
 * *
 * * @grid: the grid
 * * @height: height of the grid
 * *
*/

void free_grid(int **grid, int height)
{
	int v;

	for (v = 0; v < height; v++)
	{
		free(grid[v]);
	}
	free(grid);
}
