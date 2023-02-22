#include "main.h"
/**
 * _abs - Prints if a value is absolute or not
 *
 * @a: Receives parameter for checking
 *
 * Return: a(Successful)
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	else if (a >= 0)
	{
		a = a;
	}
	return (a);
}
