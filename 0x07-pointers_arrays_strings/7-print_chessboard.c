#include <stdio.h>
#include "main.h"

/**
  * print_chessboard - A C function prints the chessboard
  * @s: input
  *
  * Return: Returns 0 on success
  */

void print_chessboard(char (*a)[8])
{
	/* Declaring variable */
	int i, j;

	/* Loop to print array characters */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
