#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: a program that prints its name,
 * followed by a new line
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
