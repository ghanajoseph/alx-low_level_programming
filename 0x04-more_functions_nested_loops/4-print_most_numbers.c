#include "main.h"

/**
 * print_most_numbers - Prints number from 0 to 9 except 2 and 4
 *
 * Return: 0(Successful)
 */

void print_most_numbers(void)
{
	int q = 0;

	for (; q <= 9, q++)
	{
		if (q == 2 || q == 4)
		{
			continue;
		}
		else
		{
			_putchar(q + '0');
		}
	}
	_putchar('\n');
}
