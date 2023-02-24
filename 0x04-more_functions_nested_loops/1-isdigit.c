#include "main.h"

/**
 * _isdigit - Checks if the variable contains a digit 0 through 9
 * Return: Returns 1 if it is a digit and returns 0 if otherwise
 * @a: variable to check
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
