#include <stdio.h>
#include "main.h"

/**
  * rev_string - A C function reverses a string
  *
  * @s: String pointer to string to be reversed
  * Return: Returns void
  */

void rev_string(char *s)
{
	/* Declaration of variables */
	int leng = 0, index = 0;
	char tmp;

	/* Looping through the string */
	while (s[index++])
		leng++;

	/* revers task */
	for (index = leng - 1; index >= leng / 2; index--)
	{
		tmp = s[index];
		s[index] = s[leng - index - 1];
		s[leng - index - 1] = tmp;
	}
}
