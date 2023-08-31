#include "main.h"

/**
  * flip_bits - A function that returns the number of bits you would
  * need to flip to get from one number to another.
  *
  * @n: First input number
  * @m: Second input number
  * Return: Returns the number of bit to be changed.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* Declaring & initializing variables */
	unsigned long int cur, ex;
	int x = 63, count = 0;

	ex = n ^ m;

	while (x >= 0)
	{
		cur = ex >> x;
		if (cur & 1)
			count++;

		x--;
	}
	return (count);
}
