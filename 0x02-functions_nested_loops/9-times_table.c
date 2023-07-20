#include <stdio.h>
#include "main.h"

/**
  * times_table - A C function prints the 9 times table
  *
  * Return: Returns nothing
  */

void times_table(void)
{
	/* Declaration of variables */
	int a, b, c, d, e;

	/* Loop for the times table */
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				d = c & 10;
				e = (c - d) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}
