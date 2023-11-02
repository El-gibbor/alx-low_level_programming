#!/usr/bin/python3
"""This Module holds methods that calculate the perimeter of
an island in a grid.
"""


def count_water_neighbors(grid, i, j):
    """Count the number of water neighbors a cell has in the grid."""
    num = 0
    if i > 0 and not grid[i - 1][j]:
        num += 1
    if i < len(grid) - 1 and not grid[i + 1][j]:
        num += 1
    if j > 0 and not grid[i][j - 1]:
        num += 1
    if j < len(grid[i]) - 1 and not grid[i][j + 1]:
        num += 1
    return num

def island_perimeter(grid):
    """Calculate the perimeter of the island in the grid."""
    param = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                param += count_water_neighbors(grid, i, j)
    return param
