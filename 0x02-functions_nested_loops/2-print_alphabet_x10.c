#include <stdio.h>
#include "main.h"

/**
  * print_alphabet_x10 - A C function prints 10 times the alphabets
  *
  * Return: Returns 0 on success.
  */

void print_alphabet_x10(void)
{
	/* Declaration of variables */
	char c;
	int i;

	/* Looping through the 10times of the alphabets */
	for (i = 0; i <= 9; i++)
	{
		/* Loop to print the alphabets */
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
