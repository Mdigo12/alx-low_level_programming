#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Sums multiples of 3 and 5 below 1024
 *
 * Return: 0 Success
 */
int main(void)
{
	int i;
	int r = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			r = i;
		}
		r = +r;
	}
	printf("%d", r);
	printf("\n");

	return (0);
}
