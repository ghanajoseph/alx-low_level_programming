#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - A C function selects the correct function to perform
  * the operation asked by the user.
  * @s: The operator passed as argument.
  *
  * Return: Returns a pointer to the function corresponding
  * to the operator given as a parameter
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	/* Declaring a variable to serve as index */
	int i = 0;

	/* Checking for NULLity from the operator parameters */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
