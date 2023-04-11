#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid -  frees a 2 dimensional grid .
 *@grid: grid to be freed.
 *@height: hight.
 * Return: pointer to a 2 dimensional array of integers.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
