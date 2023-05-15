#include "main.h"
/**
 * free_grid - it gives a grid, makes space available and
 * frees up space.
 * @grid: takes in width of grid
 * @height: This is the height of the grid
 * Return: free grid
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
