#!/usr/bin/python3
'''
Contains the function island_perimeter
'''


def island_perimeter(grid):
    '''
    Returns the perimeter of the island descriibed in a grid
    Args:
        grid (list): A list of lists of integers
    '''
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                try:
                    if grid[i][j - 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except:
                    pass

                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except:
                    pass

    return perimeter