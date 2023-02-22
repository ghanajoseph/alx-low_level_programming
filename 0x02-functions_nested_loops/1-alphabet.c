#include "main.h"
/**
 * print_alphabet - function for printing alphabets in lower case
 *
 * return: returns 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}
