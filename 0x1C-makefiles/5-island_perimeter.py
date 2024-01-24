#!/usr/bin/python3
"""
This script defines a function to calculate the perimeter of an island
represented by a 2D grid. The grid contains 0s for water and 1s for land.
The island is assumed to be surrounded by water, and there is only one island
(no lakes inside the island).

Explanation:
    The function iterates through each cell in the grid.
    For each land cell, it increments the 'land_cells' variable,
    representing the total number of land cells.
    It also checks the left and top neighbors of the current land cell.
    If these neighbors are also land cells, it increments the
    'shared_edges' variable, representing the count of shared edges
    between adjacent land cells.

    The final perimeter is calculated as 'land_cells * 4 - shared_edges * 2',
    considering that each land cell contributes 4 to the perimeter,
    but shared edges need to be subtracted to avoid double counting.

Note:
    The function assumes a rectangular grid
    and does not check for grid validity.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
        grid (list): A 2D grid (list of lists) where 0 represents water
        and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """

    width = len(grid)
    height = len(grid[0])
    land_cells = 0
    shared_edges = 0

    for i in range(width):

        for j in range(height):

            if grid[i][j] == 1:
                land_cells += 1
                if grid[i][j - 1] == 1 and j > 0:
                    shared_edges += 1

                if grid[i - 1][j] == 1 and i > 0:
                    shared_edges += 1

    return land_cells * 4 - shared_edges * 2
