#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* Prototypes of functions */
char *createBUFFER(char *file);
void closeFILE(int file_Desc);

/**
  * createBUFFER - A C function allocates memory for buffer
  * @file: File name buffer is storing characters for.
  * Return: Returns pointer to new buffer allocation.
  */
char *createBUFFER(char *file)
{
	char *char_buff; /* Declaring variable */

	char_buff = malloc(sizeof(char) * 1024);
	if (char_buff == NULL) /* checking memory allocation success */
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (char_buff);
}

/**
  * closeFILE - A C function closes file descriptors
  * @file_Desc: File descriptor to be closed.
  */

void closeFILE(int file_Desc)
{
	int cls = close(file_Desc);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_Desc);
		exit(100);
	}
}

/**
  * main - A C program copies file content to nother file
  * @argc: Number of arguments to be given to program
  * @argv: Array of pointers to arguments
  * Return: Returns 0 on success
  */

int main(int argc, char *argv[])
{
	int srcFILE, destFILE, r_e, w_t;
	char *buff;

	buff = createBUFFER(argv[2]);
	srcFILE = open(argv[1], O_RDONLY);
	r_e = read(srcFILE, buff, 1024);
	destFILE = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Check if needed number of argumentshave been passed */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* A loop to read data from source file into buffer and then */
	/* writes the data to the destination file. */
	while (1)
	{
		if (srcFILE == -1 || r_e == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
					, argv[1]);
			free(buff);
			exit(98);
		}

		w_t = write(destFILE, buff, r_e);
		if (destFILE == -1 || w_t == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r_e = read(srcFILE, buff, 1024);
		if (r_e <= 0)
			break;

		destFILE = open(argv[2],  O_WRONLY | O_APPEND);
	}
	free(buff);
	closeFILE(srcFILE);
	closeFILE(destFILE);

	return (0);
}
