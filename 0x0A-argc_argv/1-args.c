#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: a program that prints the number of arguments passed into it
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
