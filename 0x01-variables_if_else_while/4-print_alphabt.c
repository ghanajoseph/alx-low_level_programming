#include <stdio.h>
/**
 * main -Prints alphabets in lowercase except q and e
 *
 * Return: 0(Successful)
*/

int main(void)
{
	/*cha is to hold the alphabets */
	char cha = 'a';
	/* This is to loop through the alphabets */
	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if (cha != 'e' && cha != 'q')
		{
			putchar(cha);
		}
	}
	putchar('\n');
	return (0);
}
