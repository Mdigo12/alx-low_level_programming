#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the first fibonacci numbers starting from 1 &2
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;
	long i = 1;
	long j = 1;
	long k = 0;

	printf("%ld, ", i);
	for (n = 0; n < 93; n++)
	{
		k = i + j;
		i = j;
		j = k;

		if (n == 92)
		{
			printf("%ld", j);
		}
		else
			printf("%ld, ", j);
	}
	printf("\n");

	return (0);
}
