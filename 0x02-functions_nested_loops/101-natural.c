#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 and or 5 below 1024
 *
 * Return: 0(Successful)
 */

int main(void)
{
	int a, z = 0;
	/* This is the loop to check the numbers */
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
