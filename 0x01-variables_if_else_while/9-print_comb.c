#include <stdio.h>
/**
 * main -Prints a line of code
 *
 * Return: 0(successful)
 */

int main(void)
{
	int a;

	/* This is a loop */
	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
