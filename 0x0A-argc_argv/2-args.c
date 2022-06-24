#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: a program that prints all arguments it receives
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
