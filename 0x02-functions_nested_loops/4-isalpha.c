#include "main.h"
/**
 * _isalpha - Prints alphabets in lowercase or UPPERCASE
 *
 * @c: the parameter to check.
 *
 * Return: Returns 1 if c is a letter (lowercase or UPPERCASE)
 * and returns 0 when otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
