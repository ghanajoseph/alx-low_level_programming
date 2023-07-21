#include "main.h"

/**
  * print_triangle - A C function prints a triangle
  *
  * @size: size of triangle to be printed
  * Return: void
  */

void print_triangle(int size)
{
	/* Declaring variables */
	int x, y, z;

	/* Checking if size of 0 or less */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else /* If n is not 0 then loop to print */
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
