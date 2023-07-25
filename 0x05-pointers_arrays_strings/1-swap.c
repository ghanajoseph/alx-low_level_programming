#include <stdio.h>
#include "main.h"

/**
  * swap_int - A C function sqaps the values of two integers.
  *
  * @a: First pointer parameter
  * @b: Second pointer parameter
  * Return: Returns void
  */

void swap_int(int *a, int *b)
{
	/* Declaration of variable */
	int tp = *a; /* Temporal variable */

	*a = *b;
	*b = tp;
}
