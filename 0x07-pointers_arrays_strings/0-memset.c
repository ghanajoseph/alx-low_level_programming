#include "main.h"

/**
  * _memset - A C function that fills memory with a constant byte.
  *
  * @s: The destination of pointer
  * @b: The constant byte
  * @n: Amount of bytes
  * Return: Returns memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	/* Declaring variable */
	unsigned int i;

	/* Looping through byte */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
