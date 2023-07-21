#include <stdio.h>
#include <math.h>

/**
  * main - A C program prints largest prime factor
  *
  * Return: returns 0 on success
  */

int main(void)
{
	/* declaring & initializing variable */
	long x, max, num = 612852475143;
	double square = sqrt(num);

	/* Loop through to print */
	for (x = 1; x <= square; x++)
	{
		if (num % x == 0)
		{
			max = num / x;
		}
	}
	printf("%ld\n", max);

	return (0);
}
