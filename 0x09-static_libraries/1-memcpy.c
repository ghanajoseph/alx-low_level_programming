#include <stdio.h>
#include "main.h"

/**
  * _memcpy - A C function that copies a memory area
  * @dest: Destination of copied memory area
  * @src: Source of copied memory area
  * @n: Amount of byte
  * Return: Returns dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Declaring variable */
	unsigned int i;

	/* Loop through bytes */
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
