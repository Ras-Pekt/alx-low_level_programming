#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
