#include <stdio.h>
#include "main.h"

/**
  * _strncat - A C fucntion to concatenate two strings
  *
  * @dest: destination string
  * @src: source string
  * @n: input value
  *
  * Return: Returns dest
  */

char *_strncat(char *dest, char *src, int n)
{
	/* Initialization of variables */
	int i = 0, dl = 0;

	while (dest[i++])
		dl++;
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}
