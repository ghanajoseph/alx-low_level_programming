#include <stdio.h>
#include "main.h"

/**
  * _puts - A C function prints a string
  *
  * @str: String pointer parameter
  * Return: Returns void
  */

void _puts(char *str)
{
	/* Loop through string to end of string */
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
