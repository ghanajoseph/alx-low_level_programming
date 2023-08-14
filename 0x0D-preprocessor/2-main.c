#include <stdio.h>

/**
  * main - C program that prints the name of file it 
  * was compiled from.
  *
  * Return: Returns 0 on success.
  */

int main(void)
{
	printf("%s\n", __FILE__ );
	return (0);
}
