#!/usr/bin/python3
"""defines island_perimeter function"""


def island_perimeter(grid):
    """"returs the land perimeter"""
    total = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                total += 4
                if 0 <= i < len(grid) and 0 <= j < len(grid[0]):
                    if grid[i-1][j] == 1:
                        total -= 2
                    if grid[i][j-1] == 1:
                        total -= 2
    return total
