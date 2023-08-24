#!/usr/bin/python3
"""a function that find an island in a grid"""

def island_perimeter(grid):
    """find insland in a given grid"""

    rows = len(grid)
    column= len(grid[0])
    delimiter = 0

    for i in range rows:
        for j in range column:
            if grid[i][j] == 1:
                delimiter += 4
            if i > 0 and grid[i-1][j] == 1:
                delimiter -= 2
            if j > 0 and grid[i][j - 1] == 1:
                delimiter -= 2

    return delimiter
