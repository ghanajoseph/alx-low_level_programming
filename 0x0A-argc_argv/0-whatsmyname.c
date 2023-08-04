#include <stdio.h>
#include "main.h"

/**
  * main - A C program that prints its name
  *
  * @argc: Number of arguments
  * @argv: pointer to array of string
  * Return: Returns 0 on success
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
