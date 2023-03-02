#include "main.h"

/**
 * _strcat - Concatenate given strings
 *
 * @dest: First string to use in the concatenation
 * @src: Second string to use in the concatenation
 * Return: Returns @dest parameter
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
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
