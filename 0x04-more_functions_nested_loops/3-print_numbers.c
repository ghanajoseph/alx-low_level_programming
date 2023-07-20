#include "main.h"
#include <stdio.h>

/**
  * print_numbers - A C function prints numbers
  *
  * Return: void
  */

void print_numbers(void)
{
	/* Declaration of variable */
	int i;

	/* Loop through the number */
	for (i = 0; i <= 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
