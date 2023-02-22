#include "main.h"
/**
 * print_sign - Prints signs
 *
 * @n: accepted parameter
 *
 * Return: Returns 1 if n is greater than zero,
 * also returns 0 if n is zero
 * and -1 when n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(' ');
		return (0);
	}
}
