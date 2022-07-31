/*
 * File: 1-create_file.c
 * Auth: Mdigo Jm
 * Title: Petroleum Engineering Graduate
 */

#include "main.h"
#include <stdlib.h>

/**
 * create_file - a function that creates a file.
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a NULL terminated string to write to the file
 *
 * Desc: The created file must have those permissions: rw-------
 *	If the file already exists, do not change the permissions
 *	If the file already exists, truncate it
 *	If text_content is NULL create an empty file
 *
 * Return: 1 on success
 *	-1 on failure (file can not be created,
 *	file can not be written, write “fails”, etc…)
 *	or if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/*create the file*/
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/*write text (buffer) to the file using file descriptor op*/
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}

	close(op);
	return (1);
}
