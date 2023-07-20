#include "main.h"

/**
  * print_most_numbers - A C function prist numbers
  *
  * Return: Returns 0 on success
  */

void print_most_numbers(void)
{
	/* Declaration & initialization of variables */
	int i = 0;

	/* Loop through the numbers */
	for (; i <= 9; i++)
	{
		/* Checking for 2 and 4 */
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
