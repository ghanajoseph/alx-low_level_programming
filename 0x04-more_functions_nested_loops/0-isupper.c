#include "main.h"

/**
 * _isupper - Checks if a letter is UPPERCASE or not
 * @a: The number to check
 * Return: 1 if UPPERCASE letter or 0 for lowercase.
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
