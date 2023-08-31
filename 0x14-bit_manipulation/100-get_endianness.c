#include "main.h"

/**
  * get_endianness - a function that checks the endianness.
  *
  * Return: Returns 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	/* Declaring & initializing variables */
	unsigned int q = 1;
	char *ca = (char *) &q;

	return (*ca);
}
