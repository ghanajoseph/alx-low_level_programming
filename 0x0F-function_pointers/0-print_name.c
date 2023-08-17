#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - A C function that print name using 
  * pointer to function
  * @name: The string input
  * @f: The pointer to function
  *
  * Return: Returns 0 on success
  */

void print_name(char *name, void (*f)(char *))
{
	/*  Checking the NULLity of name & f arguments */
	if (name == NULL ||  f == NULL)
		return;
	f(name);
}
