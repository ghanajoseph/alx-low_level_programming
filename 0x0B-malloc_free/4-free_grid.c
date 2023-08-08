#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * free_grid - A C function frees a 2 dimensional grid previously created
  * @grid: input grid
  * @height: input height
  * Return: Returns 0 on success.
  */

void free_grid(int **grid, int height)
{
	/* Declaring variable */
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
