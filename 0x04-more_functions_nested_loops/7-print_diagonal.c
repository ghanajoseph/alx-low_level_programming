#include "main.h"

/**
  * print_diagonal - A C function draws a diagonal line
  *
  * @n: Number of _ to printed in line
  * Return: void.
  */

void print_diagonal(int n)
{
	/* Declaring variable for the line */
	int i, j;

	/* Checking if n is zero or less */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else /* If n is not less or = 0 then print line */
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
