#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - A C function prints two diagonals of a square
  * matrix of integers
  *
  * @: Input integer
  * @size: Size of square
  * Return: Returns 0 on success
  */

void print_diagsums(int *a, int size)
{
	/* Declaring variables */
	int s1, s2, x;

	s1 = 0;
	s2 = 0;

	/* Looping through the arrays to print integers */
	for (x = 0; x < size; x++)
	{
		s1 = s1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		s2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
