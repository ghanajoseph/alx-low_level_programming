#include <stdio.h>
#include "main.h"

int chk_prime(int a, int b);

/**
  * is_prime_number - A C function returns 1 if prime number
  * otherwise 0
  * @n: inpput integer
  * Return: Returns 0 on success
  */

int is_prime_number(int n)
{
	return (chk_prime(n, 1));
}

/**
  * chk_prime - A C function check if prime number
  * @a: Input number to be checked
  * @b: The iteration times
  * Return: Returns 1 for prime number and 0 for otherwise
  */

int chk_prime(int a, int b)
{
	/* Base case */
	if (a <= 1)
		return (0);
	if (a % b == 0 && b > 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (chk_prime(a, b + 1));
}
