#include <stdio.h>
#include "main.h"

/**
  * _strcat - A C function to concatenate strings
  *
  * @dest: Destination string
  * @src: Source string
  * Return: Returns @dest parameter
  */

char *_strcat(char *dest, char *src)
{
	/* Initialising variables */
	int i = 0, j;

	/* Looping through the characters of the strings */
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
