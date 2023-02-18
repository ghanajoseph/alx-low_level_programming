#include <stdio.h>
/**
 * main -Prints the alphabets in lowercase
 *
 * Return: 0(Successful)
*/

int main(void)
{
	/* The alpha is declared to hold the alphabet */
	char alpha = 'a';
	/* A for loop to print out the each of the characters */
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
