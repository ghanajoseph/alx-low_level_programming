#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: input string
 * Return: 0 (Successful)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
