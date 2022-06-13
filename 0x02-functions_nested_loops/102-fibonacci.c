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
	double i = 1;
	double j = 1;
	double k = 0;

	printf("%f, ", i);
	for (n = 0; n < 50; n++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%f, ", j);
	}
	printf("\n");

	return (0);
}
