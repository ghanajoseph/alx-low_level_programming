#include <stdio.h>

/**
* main - A C program prints lowercase alphabet in reverse
*
* Return: Returns 0 on success
*/

int main(void)
{
	/* Initializing variable to hold alphabet */
	char x;

	/* Loop through alphabet */
	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
