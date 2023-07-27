#include <stdio.h>
#include "main.h"

/**
  * leet - A C function encodes into 1337/speak
  * @n: input value
  * Return: Returns n
  */

char *leet(char *n)
{
	/* Declaration of variables */
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	/* Looping through character */
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == str1[j])
			{
				n[i] = str2[j];
			}
		}
	}
	return (n);
}
