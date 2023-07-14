#include <stdio.h>
/**
* main - A C program prints possible ncombination of  single
*
* Return: Returns 2 on success
*/

int main(void)
{
	/* Creating variables for the project */
	int a;

	/* Looping through */
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
