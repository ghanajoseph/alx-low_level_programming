#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - A C function prints numbers
  * @separator: The string to be printed between numbers
  * @n: Number of integers
  * @...: The variable number to be printed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declaring variables */
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	/* Looping through the number to be printed */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
