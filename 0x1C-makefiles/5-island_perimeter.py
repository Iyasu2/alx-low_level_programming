#!/usr/bin/python3
'''
returns perimeter of the island
described in grid. has method
named island_perimeter
'''


def island_perimeter(grid):
    '''
    this is the method island_perimeter
    '''
    height = len(grid)
    width = len(grid[0])
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1

    return size * 4 - edges * 2
