#include <stdio.h>
/**
 * main -Prints a program the size of various types
 * Return: 0(Successful)
*/

int main(void)
{
	char x;
	int y;
	long int z;
	long long int j;
	float i;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a lonh long int: %lu byte(s)\n", (unsigned long)sizeof(i));
	return (0);
}
