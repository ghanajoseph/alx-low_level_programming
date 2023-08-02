#include "main.h"
#include <stdio.h>

/**
  * _strlen_recursion - A C function returns length of string
  * @s: input string
  * Return: length of string
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
  * comp - A C function compares each characterof string
  * @s: input string
  * @n1: smallest
  * @n2: biggest
  * Return: 0 (successful)
  */
int comp(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comp(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - returns 1 if string is palindrom
  * @s: input string
  * Return: 1 if palindrome and 0 otherwise
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, _strlen_recursion(s) - 1));
}
