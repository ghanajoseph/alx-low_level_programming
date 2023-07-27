#include <stdio.h>
#include "main.h"

/**
  * cap_string - A C function capitalizes all words
  * @str: The string input
  *
  * Return: Returns pointer to changed string
  */

char *cap_string(char *str)
{
	/* Declaring variable as index */
	int ind = 0;

	/* Looping through characters */
	while (str[ind])
	{
		while (!(str[ind] >= 'a' && str[ind] <= 'z'))
			ind++;
		if (str[ind - 1] == ' ' ||
				str[ind - 1] == '\t' ||
				str[ind - 1] == '\n' ||
				str[ind - 1] == ',' ||
				str[ind - 1] == ';' ||
				str[ind - 1] == ',' ||
				str[ind - 1] == '!' ||
				str[ind - 1] == '?' ||
				str[ind - 1] == '"' ||
				str[ind - 1] == '(' ||
				str[ind - 1] == ')' ||
				str[ind - 1] == '{' ||
				str[ind - 1] == '}' ||
				ind == 0)
		{
			str[ind] -= 32;
		}
		ind++;
	}
	return (str);
}
