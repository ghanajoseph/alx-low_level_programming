#include <stdio.h>
#include "main.h"

/**
  * string_toupper - A C function changes lowercase to uppercase
  *
  * @str: Input string
  * Return: Returns str
  */

char *string_toupper(char *str)
{
	/* Declaration of variable */
	int i = 0;

	/* Looping through characters of the string */
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			i++;
		}
	}
	return (str);
}
