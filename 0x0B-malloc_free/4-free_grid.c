#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free mem space
 * @grid: the grid
 * @height: the height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
