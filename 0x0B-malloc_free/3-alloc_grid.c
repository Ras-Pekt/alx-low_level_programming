#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (0);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
