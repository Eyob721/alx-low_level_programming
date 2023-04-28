#include "main.h"

/**
 * free_grid - frees 2 dimensional grid previously
 *			created by your alloc_grid function
 * @grid: 2d grid
 * @height: height of the 2d array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; grid && i < height; i++)
		free(grid[i]);
	free(grid);
}
