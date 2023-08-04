#include <stdio.h>
#include "main.h"

/**
  * _strchr - A C function that locates a character in a string
  * @s: The string input
  * @c: The character looked for.
  * Return: Returns first occurrence of charcter or NULL
  */

char *_strchr(char *s, char c)
{
	/* Declaring variable */
	int i;

	/* Looping through charcters of input string */
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
