#include <stdio.h>

/**
* main - A C program prints single digit numbers of base 10
*
* Return: Returns 0 on success
*/

int main(void)
{
	/* Initializing variable to hold number */
	int j;

	/* Looping through numbers */
	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	putchar('\n');
	return (0);
}
