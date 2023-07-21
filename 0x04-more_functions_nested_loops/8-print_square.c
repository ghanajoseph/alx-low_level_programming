#include "main.h"

/**
  * print_square - A C function prints square
  *
  * @size: The size of square to be printed
  * Return: void
  */

void print_square(int size)
{
	/* Declaration of variables */
	int i, j;

	/* Checking if size is less equal to zero */
	if (size <= 0)
	{
		_putchar('\n');
	}
	else /* If size is not zero or less loop to print */
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
