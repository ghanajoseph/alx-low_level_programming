#include <stdio.h>
#include "main.h"

/**
  * rot13 - A C function encodes rot13
  * @s: A pointer to string parameters
  *
  * Return: Returns pointer to s
  */

char *rot13(char *s)
{
	/* Declaration of variables */
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
