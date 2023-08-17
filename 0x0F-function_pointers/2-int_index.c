#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - A C function returns index place if
  * comparison is true, else -1
  * @array: The array
  * @size: The size of the elements in the array
  * @cmp: The pointer to function of one of the 3 in main
  * Return: Returns 0 on success
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	/* Declaring variable */
	int i;

	/* Checking the NULLity of array, size & cmp) */
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/* Looping through the array */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
