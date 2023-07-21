#include "main.h"

/**
  * print_line - A C function draws a straight line
  *
  * @n: Number of _ to be printer in line
  * Return: void
  */

void print_line(int n)
{
	/* Declaration of variable */
	int i;

	/* Check if n is zero or not */
	if (n <= 0)
	{
		_putchar('\n');
	}
	else /* If  n is not zero or less then Loop to draw line */
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
