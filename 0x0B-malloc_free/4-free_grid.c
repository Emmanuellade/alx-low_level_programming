#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the 2d array
 * @grid: the 2d grid
 * @height: the height of grid
 * Description: frees memory of grid
 * Return: 0
 **/

void free_grid(int **grid, int height)
{

	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
