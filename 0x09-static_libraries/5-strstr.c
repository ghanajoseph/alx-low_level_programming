#include <stdio.h>
#include "main.h"

/**
  * _strstr - A C function that locates a substring.
  * @haystack: String input
  * @needle: Substring to be searched for
  *
  * Return: Returns pointer to beginning of the located
  * substring or NULL
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;


		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
