#include <stdio.h>
/**
 * main - prints
 *
 * Return: 0(Successful)
 */

int main(void)
{
	int i = 0;
	long a = 1, b = 2, tot = b;

	while (b + a < 4000000)
	{
		b += a;
		if (b % 2 == 0)
		{
			tot += b;
			a = b - a;
			++i;
		}
	}
	printf("%ld\n", tot);
	return (0);
}
