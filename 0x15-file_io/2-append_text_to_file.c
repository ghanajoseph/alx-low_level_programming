#include "main.h"

/**
  * append_text_to_file - A C function that appends text at the
  * end of a file.
  *
  * @filename: The name of the file to be appended.
  * @text_content: is the NULL terminated string to add at the end
  * of the file
  * Return: Returns 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	/* Declaring variables */
	int o_p, w_t, length = 0;

	/* Checking if filename is NULL or not */
	if (filename == NULL)
		return (-1);

	/* Cheking the content of file if it's NULL or not */
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o_p = open(filename, O_WRONLY | O_APPEND);
	w_t = write(o_p, text_content, length);

	if (o_p == -1 || w_t == -1)
		return (-1);

	close(o_p);

	return (1);
}
