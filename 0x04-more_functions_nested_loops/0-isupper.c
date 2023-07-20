#include "main.h"

/**
  * _isupper - A C funcion checks a letter is uppercase
  *
  * @a: Input number
  * Return: Returns 1 if uppercase & 0 for lowercase
  */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
