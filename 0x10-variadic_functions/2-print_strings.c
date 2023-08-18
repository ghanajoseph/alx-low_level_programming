#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - A C function that prints strings
  * @separator: The string to be printer between the strings
  * @n: The numer of strings passed to the function
  * @...: Variable number of arguments
  * If separator is NULL, it is not printed.
  * If string is NULL, (nil) is printed instead.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Declaring variables */
	va_list strings;
	char *strg;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		strg = va_arg(strings, char *);

		/* Checking for NULLity of strg */
		if (strg == NULL)
			printf("(nil)");
		else
			printf("%s", strg);

		/* Checking n and NULLity of the separator */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
