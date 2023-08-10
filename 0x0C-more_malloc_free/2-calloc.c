#include "main.h"
#include <stdlib.h>

/**
  * _calloc - A C function that allocates memory for an array
  * @nmemb: number of elements of array
  * @size: size of memory to be allocated
  * Return: Returns 0 on success
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* Declaring & initializing variables */
	int i = 0, l = 0;
	char *p;

	/* Checking if array element and size are empty or not */
	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;

	p = malloc(l); /* Allocating memory to p */

	if (p == NULL) /* Checking if memory allocation successful */
		return (NULL);

	while (i < l)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
