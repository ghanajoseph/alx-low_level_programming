#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 *
 * @s: String input
 * Return: 0 (Successful)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);
}
