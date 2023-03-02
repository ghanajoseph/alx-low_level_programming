#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: first string value
 * @src: second string value
 * @n: input value
 *
 * return: 0 (Successful)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
