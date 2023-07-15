#include <stdio.h>

/**
* main - A C program prints possible difference
*
* Return: Returns 0 on success
*/

int main(void)
{
	/* Declaration of variables */
	int i, j, k;

	/* Looping through */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
