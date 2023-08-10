#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - A C function that allocates memory using malloc
  * @b: Size of memory to be allocated
  *
  * Return: Returns 0 on sucess
  */

void *malloc_checked(unsigned int b)
{
	/* Declaring variable pointer */
	void *mem;

	mem = malloc(b);

	/* Checking if malloc was successful */
	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
