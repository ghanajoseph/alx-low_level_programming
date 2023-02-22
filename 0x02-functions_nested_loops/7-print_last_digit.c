#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 *
 * @j: this is the parameter for the function
 *
 * Return: returns q
 */

int print_last_digit(int j)
{
	int q;

	q = j % 10;
	if (j < 0)
	{
		q = -q;
	}
	_putchar(q + '0');
	return (q);
}
