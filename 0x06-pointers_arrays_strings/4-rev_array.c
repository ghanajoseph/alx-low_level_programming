#include <stdio.h>
#include "main.h"

/**
  * reverse_array - A C function that reverses content of array
  *
  * @a: Integer to be reversed
  * @n: Number of element in array
  *
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	/* Declaration of vriables */
	int tmp, i;

	/* Looping through array content */
	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
