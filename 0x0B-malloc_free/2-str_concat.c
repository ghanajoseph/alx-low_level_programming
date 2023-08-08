#include "main.h"
#include <stdlib.h>

/**
  * str_concat - A C function that concatenates two strings
  * @s1: First input string
  * @s2: Second input string
  * Return: Returns the concat of both s1 and s2
  */
char *str_concat(char *s1, char *s2)
{
	/* Declaring variables & pointer */
	char *conct;
	int i, ci;

	/* Checking if strings are NULL or Not */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;

	/* Memory allocation */
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
