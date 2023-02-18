#include <stdio.h>
/**
 * main -Prints line of code
 *
 * Return: 0(Successful)
*/

int main(void)
{
	char c;

	int d;
	/* variables assigned data */
	c = 'a';
	d = 0;
	/* This is the loop */
	while
		(d < 10)
		{
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
