#include "main.h"

/**
  * read_textfile - A C function that reads a text file and prints
  * it to the POSIX standard output
  *
  * @filename: A pointer to the name of the file to read.
  * @letters: The number of characters to be read from the file.
  *
  * Return: Returns the actual number of letters it could read and print
  * If the file can not be opened or read, return 0
  * If filename is NULL return 0
  * If write fails or does not write the expected amount fo bytes, return 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declaring variables and pointers */
	ssize_t file_Desc, w_t, n_ch;
	char *file_Buff;

	/* Open file in O_RDONLY */
	file_Desc = open(filename, O_RDONLY);

	/* Memory allocation for buffer to hold characters from file */
	file_Buff = malloc(sizeof(char) * letters);
	n_ch = read(file_Desc, file_Buff, letters);

	/* Checking file opening */
	if (file_Desc == -1)
		return (0);

	w_t = write(STDOUT_FILENO, file_Buff, n_ch);
	free(file_Buff);
	close(file_Desc);

	return (w_t);
}
