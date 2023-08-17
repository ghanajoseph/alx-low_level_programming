#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - A C function prints each array element
  * on a new line
  * @size: how many element to print
  * @action: pointer to print in normal or hex
  *
  * Return: Returns nothing (void)
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* Declaring variables */
	unsigned int i;

	/* Checking the NULLity of array and action) */
	if (array == NULL || action == NULL)
		return;

	/* Looping through elements */
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
