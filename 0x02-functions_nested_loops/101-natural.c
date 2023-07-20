#include <stdio.h>
#include "main.h"

/**
  * main - A C program prints sum of all multiples of 3 & or 5 below 1024
  *
  * Return: 0 on success
  */

int main(void)
{
	/* Declaration of variable needed */
	int a, z;

	/* Initialization of variables */
	z = 0;

	/* Loopto check the numbers */
	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			z += a;
		}
		a++;
	}
	printf("%d\n", z);
	return (0);
}
