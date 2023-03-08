#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 in input number is a prime number otherwise 0
 * @n: input integer
 * Return: 0 (Successful)
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if number is a prime number
 * @n: input number to be checked
 * @i: the iteration times
 * Return: 1 for prime, 0 for otherwise
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
