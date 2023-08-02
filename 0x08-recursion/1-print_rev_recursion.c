#include "main.h"
#include <stdio.h>

/**
  * _print_rev_recursion - A C function prints string in reverse.
  *
  * @s: Input string
  * Return: Returns void
  */

void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
