#include "main.h"
#include <stdio.h>

/**
  * factorial - A C function returns the factorial of a given number
  *
  * @n: input integer
  * Return: Returns -1 indicating an error
  */

int factorial(int n)
{
	/* Base case */
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
