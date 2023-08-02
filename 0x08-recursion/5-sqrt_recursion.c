#include <stdio.h>
#include "main.h"

int _sq(int n, int i);

/**
  * _sqrt_recursion - A C function returns a natural square root
  * of a number
  *
  * @n: Number to return square root for
  * Return: Returns -1 if n does not hace natural square root
  */

int _sqrt_recursion(int n)
{
	return (_sq(n, 1));
}

/**
  * _sq - A C function calculate natural square root
  * @n: Number to calculate square root for
  * @i: iterateing nuber
  *
  * Return: Returns the natural square root
  */

int _sq(int n, int i)
{
	/* Declaring variable */
	int square = i * i;

	/* Base case */
	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sq(n, i + 1));
}
