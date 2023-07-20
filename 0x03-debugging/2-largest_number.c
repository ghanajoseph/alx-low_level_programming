#include "main.h"

/**
  * largest_number - A C function returns largest of 3 integers
  *
  * @a: 1st integer
  * @b: 2nd integer
  * @c: 3rd integer
  * Return: Returns the largest integer
  */

int largest_number(int a, int b, int c)
{
	/* Declaring variable needed */
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
