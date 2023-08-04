#include <stdio.h>
#include "main.h"

/**
  * _strncpy - copies a string
  *
  * @dest: where to paste string
  * @src: string to copy
  * @n: maximum number of bytes to be copied from src
  *
  * Return: Returns pointer to resulting string
  */

char *_strncpy(char *dest, char *src, int n)
{
	/* Initializing variables */
	int i = 0, sl = 0;

	/* Looping through characters of the string */
	while (src[i++])
		sl++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = sl; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
