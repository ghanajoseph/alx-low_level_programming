#include <stdio.h>
#include "main.h"

/**
  * _strbrk - A C function searches a string for any
  * of a set of bytes
  * @s: String input
  * @accept: Accept string
  *
  * Return: Returns pointer to bytes in s
  */

char *_strpbrk(char *s, char *accept)
{
	/* Declaration of variable */
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
