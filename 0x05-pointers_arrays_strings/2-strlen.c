#include <stdio.h>

/**
 * _strlen - Gets the length of string
 * @str: String to get length for.
 * Return: length os @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
