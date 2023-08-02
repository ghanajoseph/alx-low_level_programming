#include <stdio.h>
#include "main.h"

/**
  * _strlen_recursion - A C function returns length of string.
  *
  * @s: Input string
  * Return: Returns 0 on success
  */

int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
