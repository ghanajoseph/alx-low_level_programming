#include <stdio.h>

/**
  * main - A C program prints Fabonacci numbers
  *
  * Return: Returns 0 on success.
  */

int main(void)
{
	/* Initialization of variables for the program */
	int i = 0;
	long int x = 1, y = 2;

	/* Looping through the numbers */
	while (i < 50)
	{
		if (i == 0)
			printf("%ld", x);
		else if (i == 1)
			printf(", %ld", y);
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
		++i;
	}
}
