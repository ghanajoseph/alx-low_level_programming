#include <stdio.h>

/**
* main - A C program prints alphabets in lowercase
*
* Return: Returns 0 on success.
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
