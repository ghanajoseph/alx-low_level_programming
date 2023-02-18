#include <stdio.h>
/**
 * main -Prints the alphabets in lowercase and in UPPERCASE
 *
 * Return: 0(Successful)
*/

int main(void)
{
	/* The ch and cha are to hold the alphabets */
	char ch = 'a', cha = 'A';
	/* This is to loop through the alphabets */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
