#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - makes 2-dimensional aaray from malloc
 * @width: the width
 * @height: the height
 * Return: Returns NULL or the array pointer
 */

int **alloc_grid(int width, int height)
{
	int  **grid = NULL, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(grid[j]);
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}
