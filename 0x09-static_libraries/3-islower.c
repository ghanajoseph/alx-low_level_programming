#include <stdio.h>
#include "main.h"

/**
  * _islower - A C function to check for lowercase character.
  *
  * @c: Input for the function.
  * Return: Returns 1 if lowercase otherwise 0
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
