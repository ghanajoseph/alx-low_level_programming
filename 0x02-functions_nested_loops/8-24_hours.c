#include <stdio.h>
#include "main.h"

/**
  * jack_bauer - A C function prints every minute of the day
  */

void jack_bauer(void)
{
	/* Declaration of variables needed for program */
	int i, j, k, l;

	/* Using nested loops to go through time */
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
			{
				for (k = 0; k <= 5; k++)
				{
					for (l = 0; l <= 9; l++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(58);
						_putchar(k + '0');
						_putchar(l + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
