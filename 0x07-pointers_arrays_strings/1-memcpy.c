#include "main.h"

/**
 * _membpy - fills memory with a constant byte.
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: 0(Successful)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
