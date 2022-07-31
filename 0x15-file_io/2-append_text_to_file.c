/*
 * File: 2-append_text_to_file.c
 * Auth: Mdigo Jm
 * Title: Petroleum Engineering Graduate
 */

#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a NULL terminated string to write to the file
 *
 * Desc: Do not create the file if it does not exist
 *	If text_content is NULL, do not add anything to the file.
 *
 * Return: 1 on success or  if the file exists.
 *	-1 on failure (if the file does not exist
 *	if you do not have the required permissions to write the file)
 *	If filename is NULL.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/*create the file*/
	op = open(filename, O_WRONLY | O_APPEND);

	/*write text (buffer) to the file using file descriptor op*/
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
