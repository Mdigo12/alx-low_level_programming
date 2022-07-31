/*
 * File: 0-read_textfile.c
 * Auth: Mdigo Jm
 * Title: Petroleum Engineering Graduate
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file
 *		and prints it to the POSIX standard output.
 * @filename: pointer to the filename (path)
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes,
 *	return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*get memory for the buffer/character string*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	op = open(filename, O_RDONLY);
	rd = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (wr);
}
