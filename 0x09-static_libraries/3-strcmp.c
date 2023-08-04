#include <stdio.h>
#include "main.h"

/**
  * _strcmp - A C function compares two strings
  *
  * @s1: first input string
  * @s2: second input string
  *
  * Return: negative or positive
  */

int _strcmp(char *s1, char *s2)
{
	/* Looping through characters of the string */
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
