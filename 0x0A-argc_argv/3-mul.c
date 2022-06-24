#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: a program that multiplies two integers
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
		return (0);
	}
}
