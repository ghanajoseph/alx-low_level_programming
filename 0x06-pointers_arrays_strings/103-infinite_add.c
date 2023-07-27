#include <stdio.h>
#include "main.h"

/**
  * string_reverse - A C function to reverse array
  *
  * @n: integer input parameter
  * Return: returns 0 on success
  */

void string_reverse(char *n)
{
	/* Initialization of variables */
	int i = 0, j;
	char tmp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tmp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tmp;
	}
}

/**
  * infinite_add - A C function adds 2 numbers
  * @n1: First parameter
  * @n2: Second parameter
  * @r: A pointer to buffer
  * @size_r: buffer size
  * Return: Returns a pointer to calling function
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* Initialization of variables */
	int oflow = 0, i = 0, j = 0, dig = 0, val1 = 0, val2 = 0, tmp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;

	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || oflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		tmp = val1 + val2 - oflow;
		if (tmp >= 10)
			oflow = 1;
		else
			oflow = 0;
		if (dig >= (size_r - 1))
			return (0);
		*(r + dig) = (tmp % 10) + '0';
		dig++;
		j++;
		i--;
	}
	if (dig == size_r)
		return (0);
	*(r + dig) = '\0';
	string_reverse(r);
	return (r);
}
