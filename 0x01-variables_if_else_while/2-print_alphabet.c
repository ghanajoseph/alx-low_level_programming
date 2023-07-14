#include <stdio.h>

/**
* main - A C program that prints the alphabets in lowercase
*
* Return: Returns 0 on success
*/

int main(void)
{
	char ch;
	/* Looping through the alphabets */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
