#include <stdio.h>
#include "main.h"

/**
  * print_last_digit - A C function prints last digit of a number
  *
  * @i: input integer.
  * Return: Returns value of last digit
  */

int print_last_digit(int i)
{
	/* Declare and initialize variable needed */
	int k = i % 10;

	/* Checking input integer */
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
