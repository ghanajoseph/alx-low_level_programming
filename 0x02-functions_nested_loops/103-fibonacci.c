#include <stdio.h>

/**
  * main - prints numbers
  *
  * Return: Returns 0 on success
  */

int main(void)
{
	/* Initializing variables */
	int i = 0;
	long j = 1, k = 2, tot = k;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			tot += k;
			j = k - j;
			++i;
		}
	}
	printf("%ld\n", tot);
	return (0);
}
