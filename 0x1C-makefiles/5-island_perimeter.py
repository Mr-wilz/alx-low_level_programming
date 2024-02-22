#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    grid (List[List[int]]): A list of list of integers representing the island.

    Returns:
    int: The perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                # Check adjacent cells
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    perimeter -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:  # Down
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:  # Right
                    perimeter -= 1

    return perimeter
