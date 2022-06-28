#include "main.h"

/**
 * free_grid - frees a 2d grid for alloc_grid.
 *
 * @grid: grid created by alloc_grid function.
 * @height: height of the grid.
 *
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int g;

	if (grid != NULL || height != 0)
	{
		for (g = 0; g < height; g++)
		{
			free(grid[g]);
		}
		free(grid);
	}
}
