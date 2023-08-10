#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * realloc - A C function reallocates a memory block
  * @ptr: point to the memory previously allocated
  * @old_size: size of the allocated memory for ptr
  * @new_size: size of the new memory block
  * Return: Returns pointer to newly allocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* Declaring pointers and variables */
	char *ptr1, *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	/* Allocating memory */
	ptr1 = malloc(new_size);

	if (!ptr1) /* Checking if memory allocation successful */
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
