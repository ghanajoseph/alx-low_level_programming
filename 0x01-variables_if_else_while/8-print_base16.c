#include <stdio.h>

/**
* main - A C program prints all numbers of base 16
*
* Return: Returns 0 on success.
*/

int main(void)
{
	/* Initializing variables for program */
	char ch = 'a';

	int d = 0;

	/* Looping though numbers */
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
