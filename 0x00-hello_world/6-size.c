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
	float i;
	long long int j;

	printf("Size of a char: %d byte(S)\n", (unsigned long)sizeof(x));
	printf("Size of an int: %d byte(S)\n", (unsigned long)sizeof(y));
	printf("Size of long int: %d byte(S)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %d byte(S)\n", (unsigned long)sizeof(i));
	printf("Size of a lon long int: %d byte(S)\n", (unsigned long)sizeof(j));
	return (0);
}
