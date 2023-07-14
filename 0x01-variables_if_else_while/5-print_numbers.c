#include <stdio.h>

/**
* main - A C program prints all single digits number of base 10
*
* Return: Returns 0 on success
*/

int main(void)
{
	/* Initializing variable for interge */
	int x;

	/* Looping though the numbers */
	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
