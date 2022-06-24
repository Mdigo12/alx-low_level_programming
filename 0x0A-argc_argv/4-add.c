#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * Description: Sums the arguments
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int i, num;
	int sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
