#include <stdio.h>
/**
 * main -Prints a line of code
 *
 * Return: 0(Successful)
*/

int main(void)
{
	int cr;

	cr = 0;
	/* This is a loop */
	while
		(cr < 10)
		{
			putchar(cr + '0');
			cr++;
		}
	putchar('\n');
	return (0);
}
