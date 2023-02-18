#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main -Prints if a number is positive or negative
 *
 * Return: 0(Successful)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* My code goes here */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is positive \n", n);
		}
	}
	return (0);
}
