#include <stdio.h>
#include "main.h"

/**
  * print_number - A C function prints an integer
  *
  * @n: Integer input
  * Return: void
  */

void print_number(int n)
{
	/* Declaratio of variable */
	unsigned int i = n;

	/* Checking n */
	if (n < 0)
	{
		n *= -1;
		i = n;
		_putchar('-');
	}
	i /= 10;
	if (i != 0)
		print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
