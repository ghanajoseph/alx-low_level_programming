#include "main.h"

/**
 * print_line - Draws a straint line based on the parameter
 * @n: the number of line to draw
 * Return: nothing
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
