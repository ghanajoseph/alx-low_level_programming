#include <stdio.h>
#include "main.h"

/**
  * main - A C program prints all arguments it receives
  *
  * @argc: Number of arguments
  * @argv: Pointer to array of strings
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[])
{
	/* Declaring variable */
	int i;

	/* Looping through the arguments */
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
