#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * _strdup - A C function returns a pointer to a newly allocated space
  * @str: Input string
  * Return: Returns 0 on success
  */

char *_strdup(char *str)
{
	/* Initializing variables & pointer */
	char *a;
	int i = 0, r = 0;

	/* Checking if input string is NULL or not */
	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	/* Memory allocation */
	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		a[r] = str[r];
	return (a);
}
