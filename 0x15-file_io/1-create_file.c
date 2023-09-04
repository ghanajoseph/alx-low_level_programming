#include "main.h"

/**
  * create_file - A C function that creates a file.
  *
  * @filename: The name of the file to be created.
  * @text_content: A NULL terminated string to write to the file
  * Return: Returns 1 on success, -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	/* Declaring variables */
	int file_Desc, w_t, length;

	length = 0;

	/* Checking if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Checking if text_content is NULL or not */
	if (text_content != NULL)
	{
		/* To get the length of the string */
		for (length = 0; text_content[length];)
			length++;
	}

	/* Open file in READ-WRITE MODE */
	/* Creates the file in 0600 permissions if it does not exist */
	file_Desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_t = write(file_Desc, text_content, length);

	if (file_Desc == -1 || w_t == -1)
		return (-1);

	close(file_Desc);
	return (1);
}
