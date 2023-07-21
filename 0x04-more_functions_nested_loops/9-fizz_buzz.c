#include <stdio.h>
#include "main.h"

/**
  * main - A C program prints Fizz Buzz program
  *
  * Return: 0 on success
  */

int main(void)
{
	/* Declaration of variable */
	int i;

	/* Loop begins */
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
