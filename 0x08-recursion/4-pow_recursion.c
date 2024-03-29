#include <stdio.h>
#include "main.h"

/**
  * _pow_recursion - A C function returns the value of x raised
  * to the power of y
  *
  * @x: Input integer
  * @y: Input integer of power
  * Return: Returns -1 if y is lower than 0
  */

int _pow_recursion(int x, int y)
{
	/* Base case */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
