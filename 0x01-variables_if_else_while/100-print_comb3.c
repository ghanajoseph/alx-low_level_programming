#include <stdio.h>

/**
* main - A C program prints all possible different combination
*
* Return: Returns 0 success.
*/

int main(void)
{
	/* Initializing variables */
	int i = 0, j;

	/* Looping through numbers */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
