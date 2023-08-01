#include <stdio.h>
#include "main.h"

/**
  * set_string - A C function sets value of a pointer to a char
  *
  * @s: pointer to pointer
  * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
