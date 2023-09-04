#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: 2d grid
 * @height: height dimension of a grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
	free(grid[j]);
	}
	free(grid);
}
