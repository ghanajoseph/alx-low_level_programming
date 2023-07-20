#include <stdio.h>
#include "main.h"

/**
  * _isdigit - A C function checks for a digit
  *
  * @c: input data
  * Return: Returns 1 if digit and 0 for otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
