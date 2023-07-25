#include <stdio.h>
#include "main.h"

/**
  * print_array - A C function prints n list of int arrays
  *
  * @a: Array of integers
  * @n: Number of elements in array
  * Return: Retruns void
  */

void print_array(int *a, int n)
{
	/* Declaration of variable */
	int j;

	/* Looping through the array */
	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
