#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 *
 * @argc: number of arguments
 * @argv: An array of the arguments
 * Return: 0 (Successful)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
