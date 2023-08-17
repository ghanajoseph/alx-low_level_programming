#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - A C function returns the sum of all
  * its parameters
  * @n: First argument
  * @...: Variable number of arguments to calculate sum
  * for.
  *
  * Return: if n == 0, otherwise the sum of the parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	/* Declaring and initializing variables */
	va_list args;
	unsigned int i;
	int curr_arg, sum = 0;

	va_start(args, n);

	/* Looping through all arguments available */
	for (i = 0; i < n; i++)
	{
		curr_arg = va_arg(args, int);
		sum += curr_arg;
	}

	va_end(args);
	return (sum);
}
