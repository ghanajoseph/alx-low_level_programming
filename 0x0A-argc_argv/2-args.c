#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 *
 * @argc: the number of arguments
 * @argv: the arrays of the arguments
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
