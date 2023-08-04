#include <stdio.h>
#include "main.h"

/**
  * _strspn - A C function that gets the length of a prefix substring
  * @s: The input string
  * @accept: source of bytes
  * Return: Returns number of bytes in s
  */

unsigned int _strspn(char *s, char *accept)
{
	/* Declaring variable */
	unsigned int i;
	int j;

	i = 0;
	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
