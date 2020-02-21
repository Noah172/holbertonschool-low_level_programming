#!/usr/bin/python3
def island_perimeter(grid):
    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                p += 1

    p += 1
    pf = p * 2
    return pf
