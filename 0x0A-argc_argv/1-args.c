#include <stdio.h>
#include "main.h"

/**
  * main - A C program prints number of arguments
  *
  * @argc: Number of arguments
  * @argv: Pointer to array of string
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
