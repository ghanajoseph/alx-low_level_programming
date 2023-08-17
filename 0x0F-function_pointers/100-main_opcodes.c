#include <stdio.h>
#include <stdlib.h>

/**
  * main - A C program that prints its own opcodes
  * @argc: The number of arguments
  * @argv: The array of arguments
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[])
{
	/* Declaring variables and pointer */
	char *arr;
	int bytes, i;

	/* Checking if argument is not 2 */
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	/* Checking if bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	/* Looping through bytes */
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
