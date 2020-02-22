#!/usr/bin/python3
def island_perimeter(grid):
    p = 0
    nr = len(grid)
    nc = len(grid[0])
    y = -1
    for maps in grid:
        y += 1
        x = -1
        for land in maps:
            x += 1
            if land == 1:
                if x == 0 or grid[y][x - 1] != 1:
                    p += 1
                if x == nc - 1 or grid[y][x + 1] != 1:
                    p += 1
                if y == 0 or grid[y - 1][x] != 1:
                    p += 1
                if y == nr - 1 or grid[y + 1][x] != 1:
                    p += 1
    return p
