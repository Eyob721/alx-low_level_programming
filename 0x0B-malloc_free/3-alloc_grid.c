#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a
 *				2 dimensional array of integers
 * @width: width of the 2d array of integers
 * @height: height of the 2d array of integers
 *
 * Return: newly allocated 2d array of integers, or
 *		   NULL if memory allocation fails, or if width or height is 0 or less
 */
int **alloc_grid(int width, int height)
{
	int i, row, col, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for the rows */
	grid = malloc(sizeof(int *) * height);
	/* Check if memory allocation for the rows fails */
	if (grid == NULL)
		return (NULL);
	/* Allocate memory for the columns */
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		/* If memory allocation fails, free any previously allocated memory */
		if (grid[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	/* Initialize the grid to 0 */
	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	return (grid);
}
