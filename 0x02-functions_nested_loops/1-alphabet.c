#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - A C function to print alphabets in lowercase
  *
  * Return: REturns 0 on success.
  */

void print_alphabet(void)
{
	/* Declaration of variable needed */
	char c;

	/* Looping through the alphabets */
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
