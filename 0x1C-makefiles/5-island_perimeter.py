#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of an island described in grid

    Args:
        grid: a list of list of integers

    Description:
        0 represents a water zone, and 1 represents a land zone. One cell is
        a square with side length 1.

    """
    parameter = 0
    if grid:
        row = len(grid)
        col = len(grid[0])
        for i in range(row):
            for j in range(col):
                # Stop when you find a land
                if grid[i][j] == 1:
                    # Get the length of the sides
                    top = 1 if i == 0 or grid[i - 1][j] == 0 else 0
                    left = 1 if j == 0 or grid[i][j - 1] == 0 else 0
                    bottom = 1 if i == row - 1 or grid[i + 1][j] == 0 else 0
                    right = 1 if j == col - 1 or grid[i][j + 1] == 0 else 0
                    # Add the value of the sides
                    parameter += top + left + bottom + right
    return parameter
