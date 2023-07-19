#include <stdio.h>
#include "main.h"

/**
  * _isalpha - A C function checks for alphabetic character
  *
  * @c: Input to be checked
  * Return: Returns 1 if lowercase or uppercase, otherwise 0
  */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
