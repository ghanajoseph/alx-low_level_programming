#include "main.h"
/**
 * _islower - Print lowercase alphabets
 *
 * @alc: This is the parameter to be printed.
 *
 * Return: 1 if the alphabet is a lower case and
 * 0 when otherwise.
 */

int _islower(int alc)
{
	if (alc >= 97 && alc <= 122)
		return (1);
	else
		return (0);
}
