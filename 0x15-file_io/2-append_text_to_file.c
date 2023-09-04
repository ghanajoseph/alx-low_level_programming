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
	int file_Desc = open(filename, O_WRONLY | O_APPEND);
	size_t length = 0;
	ssize_t nlen = write(file_Desc, text_content, length);

	/* Checking if filename argument is NULL or not */
	if (filename == NULL)
		return (-1);

	/* Checking if file descriptor is -1 or not */
	if (file_Desc == -1)
		return (-1);

	/* Checking the content of file if it's NULL or not */
	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
		{
			length++;
		}

		if (nlen == -1)
		{
			close(file_Desc);
			return (-1);
		}
	}
	close(file_Desc);
	return (0);
}
