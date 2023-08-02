#include "main.h"
#include <stdio.h>

/**
  * _puts_recursion - A C function tha prints a string
  *
  * @s: String input
  * Return: Returns 0 on success
  */

void _puts_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
