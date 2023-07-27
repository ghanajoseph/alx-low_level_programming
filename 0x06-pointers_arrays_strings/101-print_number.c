#include <stdio.h>
#include "main.h"

/**
  * print_number - A C function prints number characters
  *
  * @n: Integer input
  * Return: Returns 0 on success
  */

void print_number(int n)
{
	/* Declaring variable */
	unsigned int num1;

	num1 = n;

	if (n < 0)
	{
		_putchar('-');
		num1 = -n;
	}
	if (num1 / 10 != 0)
	{
		print_number(num1 / 10);
	}
	_putchar((num1 % 10) + '0');
}
