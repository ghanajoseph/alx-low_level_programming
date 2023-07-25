#include <stdio.h>
#include "main.h"

/**
  * _strcpy - A C function that copies string
  *
  * @dest: Destination of copied string
  * @src: Source of the string to copy
  * Return: Returns destination
  */

char *_strcpy(char *dest, char *src)
{
	/* Declaration of variables */
	int i, j;

	i = 0;
	/* Looping through the string to copy */
	while (*(src + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
