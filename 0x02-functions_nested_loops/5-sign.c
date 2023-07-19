#include <stdio.h>
#include "main.h"

/**
  * print_sign - A C function printsthe sign of a number
  *
  * @n: Input integer.
  * Return: Returns 1 for > 0, 0 = 0 and -1 < 0
  */

int print_sign(int n)
{
	if (n > 0) /* Checking if n is greater than zero */
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0) /* Checking if n is equal to zero */
	{
		_putchar(' ');
		return (0);
	}
	else /* Otherwise print the negative sign */
	{
		_putchar('-');
		return (-1);
	}
}
