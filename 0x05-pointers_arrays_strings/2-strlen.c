#include <stdio.h>
#include "main.h"

/**
  * _strlen - A C function gets the length of string
  * @s: String pointer parameter to get length for
  * Return: Returns length of string
  */

int _strlen(char *s)
{
	/* Declaration of variable */
	size_t leng = 0;

	/* Looping through the string */
	while (*s++)
		leng++;
	return (leng);
}
