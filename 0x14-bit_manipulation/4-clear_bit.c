#include "main.h"

/**
  * clear_bit - a function that sets the value of a bit to 0 at a given index.
  *
  * @n: A pointer to the number to be changed.
  * @index: This is the index, starting from 0 of the bit you want to set
  *
  * Return: Returns 1 if it worked, or -1 if an error occurred.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Checks the validity of the index and returns -1 when*/
	/*the index exceeds 63*/
	if (index >= 63)
	{
		return (-1);
	}

	/* Using 1UL literal ensures the shift operation is performed */
	/*on the unsigned integer data type.*/
	*n = (~(1UL << index) & *n);
	return (1);
}
