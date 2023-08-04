#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int ch_number(char *str);

/**
  * main - A C program adds positive numbers
  * @argc: Number of arguments
  * @argv: Arrays of arguments
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[])
{
	/* Declaring and nitializing variables */
	int sum = 0, count = 1, str_to_int;

	while (count < argc)
	{
		if (ch_number(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
  * ch_number - A C function to ckeck presence of digits
  * @str: array of string
  * Return: Returns 0 on success
  */
int ch_number(char *str)
{
	/* Declaring variable */
	unsigned int count = 0;

	/* Looping through string */
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
