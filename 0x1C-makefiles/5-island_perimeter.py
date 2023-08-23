#!/usr/bin/python3
"""
A function to  calculate the perimeter of an island
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    i = 0
    for lst in grid:
        print(f"{i}: ", end="")
        print(lst)
        i += 1
        for li in lst:
            if li == 1:
                print(f"Index:  {lst.index(li)}")
                idx = lst.index(li)
                if lst[idx + 1] == 1:
                    print("Another 1")
            #print (f"Inside loop: {li}")