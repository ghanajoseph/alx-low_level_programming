#include "main.h"
#include <stdlib.h>

/**
  * create_array - A C function creates an array of chars
  *
  * @size: Input of size of array
  * @c: Character to be assigned.
  * Return: Returns a pointer to the array, NULL if failed
  */

char *create_array(unsigned int size, char c)
{
	/* Declaring variables */
	char *str;
	unsigned int i;

	/* Memory allocation */
	str = malloc(sizeof(char) * size);
	/* Checking if memory is allocated successfully */
	/* And checking the size of the array */
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
