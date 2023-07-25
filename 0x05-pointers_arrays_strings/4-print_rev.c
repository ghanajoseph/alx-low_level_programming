#include <stdio.h>
#include "main.h"

/**
  * print_rev - A C function prints string in reverse
  *
  * @s: String pointer as input parameter
  * Return: Returns void
  */

void print_rev(char *s)
{
	/* Declaration of variable */
	int ch = 0;

	/* Looping through the string */
	while (s[ch] != '\0')
	{
		ch++;
	}

	/* Looping in reverse */
	for (ch -= 1; ch >= 0; ch--)
	{
		_putchar(s[ch]);
	}
	_putchar('\n');
}
