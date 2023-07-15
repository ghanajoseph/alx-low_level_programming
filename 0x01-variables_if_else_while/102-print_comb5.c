#include <stdio.h>

/**
* main - A C program prints all possible combinations of two two digit
*
* Return: Returns 0 on success
*/

int main(void)
{
	/* Declaration of variables */
	int i, j;

	/* Looping through */
	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
