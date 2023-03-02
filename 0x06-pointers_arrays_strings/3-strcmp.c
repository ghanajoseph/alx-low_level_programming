#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string input
 * @s2: second string input
 * Return: negative or positive
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && s2 == s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
