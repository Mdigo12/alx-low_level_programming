#include <stdio.h>
/**
 * main - entry point
 *
 * Description: By considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000,
 * the program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: 0 success
 */
int main(void)
{
	long n;
	long i = 1;
	long j = 1;
	long k = 0;
	long sum = 0;

	for (n = 0; n <= 49; n++)
	{
		k = i + j;
		i = j;
		j = k;

		if (j <= 4000000)
		{
			if (j % 2 == 0)
			{
				sum += j;
			}
		}
	}
	printf("%ld", sum);
	printf("\n");

	return (0);
}
