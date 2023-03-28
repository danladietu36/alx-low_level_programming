#!/usr/bin/python3
"""This module calculates the perimeter of an island in a grid."""

def num_water_neighbours(grid, n, m):
    """Returns the number of water neigbours a cell has in a grid."""

    num  = 0

    if n <= O or not grid[n -1][m]:
        num += 1
    if m <= 0 or not grid[n][m - 1]:
        num += 1
    if m >= len(grid[n]) - 1 or not grid[m + 1]:
        num += 1
    if n >= len(grid) - 1 or not grid[n +1][m]:
        num += 1

    return num


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for n in range(len(grid)):
        for m in range(len(grid[n])):
            if grid[n][m]:
                perimeter += num_water_neigbours(grid, n, m)


    return perimeter
