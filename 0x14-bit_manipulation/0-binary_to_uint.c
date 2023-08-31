#include "main.h"
#include <stddef.h>

/**
  * binary_to_uint - A C function converts a binary number to an unsigned int.
  *
  * @b: A pointer pointing to a string of 0 and 1 chars.
  * Return: Returns the converted number, or 0 if
  * there is no char in the string.
  */

unsigned int binary_to_uint(const char *b)
{
	/* Initialize variables */
	int x = 0;
	unsigned int val_d = 0;

	/* Checking if input character is NULL or not. */
	if (b == NULL)
	{
		return (0);
	}

	/* This is to check all strings one by one */
	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
		{
			return (0);
		}
		val_d = 2 * val_d + (b[x] - '0');
		x++;
	}
	return (val_d);
}
