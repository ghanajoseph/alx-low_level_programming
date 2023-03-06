#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the pointed destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: 0 (Successful)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
