#include <stdio.h>
#include <stdlib.h>
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
	int x, y;
	int mult = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		mult = x * y;
		printf("%d\n", mult);
		return (0);
	}
}
