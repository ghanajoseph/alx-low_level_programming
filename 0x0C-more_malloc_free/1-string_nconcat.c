#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
  * string_nconcat - A C function that concatenates strings
  * @s1: First input string
  * @s2: Second input string
  * @n: length
  *
  * Return: Returns 0 on success
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Declaring & initializing variables */
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	/* Checking if input strings are NULL or not */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;

	/* Allocating memory to str */
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL) /* Checking if memory allocation successful */
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			str[j] = s1[j];
		if (j >= i)
		{
			str[j] = s2[k];
			k++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
