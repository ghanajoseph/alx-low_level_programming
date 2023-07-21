#include "main.h"

/**
  * more_numbers - A C function prints 10times the number
  *
  * Return: void
  */

void more_numbers(void)
{
	/* Declaration of variables */
	int i, j;

	/* Loop through numbers */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
