#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - A C function returns a pointer to a 2 dimensional
  * array of integers
  * @width: width input
  * @height: height input
  * Return: Returns a pointer of 2 dimensional array
  */

int **alloc_grid(int width, int height)
{
	/* Declaring variable & pointer */
	int x, y;
	int **me;

	/* Checking if width & height is empty or not */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocating memory */
	me = malloc(sizeof(int *) * height);
	/* Checking if memory is allocated successfully */
	if (me == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		me[x] = malloc(sizeof(int) * width);
		if (me[x] == NULL)
		{
			for (; x >= 0; x--)
				free(me[x]);
			free(me);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			me[x][y] = 0;
	}
	return (me);
}
