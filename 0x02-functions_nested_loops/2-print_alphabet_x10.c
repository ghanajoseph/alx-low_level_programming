#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabets 10times
 *
 * Return: 0(Successful)
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;
	/* The loop that runs 10times. */
	for (i = 1; i <= 10; i++)
	{
		/* A nested loop to really print the alphabets. */
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
