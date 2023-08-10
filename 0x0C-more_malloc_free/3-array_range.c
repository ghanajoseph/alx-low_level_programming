#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * array_range - A C function that creates an array of integers
  * @min: Minimum range of values stored
  * @max: maximum range of values stored & number of elements
  * Return: Returns a pointer to new array
  */

int *array_range(int min, int max)
{
	/* Declaring variables and pointer */
	int *p;
	int i, size;

	/* Checking if max is greater than min */
	if (min > max)
		return (NULL);

	size = max - min + 1;
	/* Allocating memory to p */
	p = malloc(sizeof(int) * size);

	/* Checking if memory allocation is successful */
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
