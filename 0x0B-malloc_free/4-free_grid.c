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
	int i, s;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (s = i; s >= 0; s--)
			{
				free(grid[s]);
			}
			free(grid);
		}
	}
}
