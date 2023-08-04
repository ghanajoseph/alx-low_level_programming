#include <stdio.h>
#include "main.h"

/**
  * _abs - A C function computes absolute values of an integer
  *
  * @i: Input integer.
  * Return: Returns i on success.
  */

int _abs(int i)
{
	/* Checking the value of i */
	if (i >= 0)
		i = i;
	else if (i < 0)
		i = -(i);
	return (i);
}
