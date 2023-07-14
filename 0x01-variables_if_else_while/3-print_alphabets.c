#include <stdio.h>

/**
* main - A C program that prints alphabets in lowercase & uppercase
*
* Return: Returns 0 on success
*/

int main(void)
{
	char chl;
	char chu;

	for (chl = 'a'; chl <= 'z'; chl++)
	{
		putchar(chl);
	}
	for (chu = 'A'; chu <= 'Z'; chu++)
	{
		putchar(chu);
	}
	putchar('\n');
	return (0);
}
