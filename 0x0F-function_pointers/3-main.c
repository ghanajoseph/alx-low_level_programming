#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
  * main - A C program prints the result of simple operations
  * @argc: The number of arguments supplied to the program.
  * @argv: An array of pointers to the arguments
  *
  * Return: Returns 0 on success.
  */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/* Declaring variables */
	int num1, num2;
	char *op;

	/* Error checking */
	/* Checking if arguments supplied are not 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* Initializing variables */
	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	/* Checking the NULLity of the call of get_op_func() */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num1 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
