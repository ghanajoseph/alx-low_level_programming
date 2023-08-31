#include "main.h"

/**
  * set_bit - A function that sets the value of a bit to 1 at a given index.
  *
  * @n: A pointer to the number to be changed.
  * @index: is the index, starting from 0 of the bit you want to set
  *
  * Return: Returns 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*Checking the validity of the index*/
	/*Returns -1 when the index exceeds 63*/
	if (index >= 63)
	{
		return (-1);
	}

	/* Using 1UL literal is to ensure that the shift operation */
	/* is performed on the unsigned integer data type. */
	*n = ((1UL << index) | *n);
	return (1);
}
