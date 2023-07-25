#include <stdio.h>
#include "main.h"

/**
  * puts2 - A C function prints every character of a string
  *
  * @str: string pointer parameter
  * Return: Returns void
  */

void puts2(char *str)
{
	/* Declaration of variables */
	int i, j = 0;

	/* Looping through character of string */
	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
