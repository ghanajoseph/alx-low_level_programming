#include <stddef.h>
#include "main.h"

/**
  * print_binary - A C function that prints the
  * binary representation of a number.
  * @n: The number to print
  */

void print_binary(unsigned long int n)
{
	/* Declaring & initializing variables */
	unsigned long int mk = 1UL << (sizeof(n) * 8 - 1);
	unsigned int zeros_pre = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mk)
	{
		if (n & mk)
		{
			_putchar('1');
			zeros_pre = 0;
		}
		else if (!zeros_pre)
		{
			_putchar('0');
		}
		mk >>= 1;
	}
}
