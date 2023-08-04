#include <stdio.h>
#include "main.h"

int _atoi(char *s);

/**
  * main - A C program multiplies two numbers
  *
  * @argc: Number of arguments passed
  * @argv: Array of arguments
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[])
{
	/* Declaration of variables */
	int pro, n1, n2;

	/* Checking if argument is 2 or not */
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	pro = n1 * n2;

	printf("%d\n", pro);
	return (0);
}

/**
  * _atoi - A C function to convert string to integer
  * @s: Input string to be converted
  * Return: Returns int converted from string
  */

int _atoi(char *s)
{
	/* Declaring variables */
	int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

	/* Looping through string */
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
