#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid made by alloc_grid function
 * @grid: allocated grid
 * @height: height of the allocated grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL || height <= 0)
		return;
	for (row = 0; row < height; row++)
		free(grid[row]);
	free(grid);
}
