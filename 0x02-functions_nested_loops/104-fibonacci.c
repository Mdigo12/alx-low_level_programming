#include <stdio.h>
#define LG 10000000000
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
	long i = 1, j = 1, fr1 = 0, fr2 = 0;
	long hold1, hold2, hold3;

	printf("%ld, %ld, ", i, j);
	for (n = 2; n < 98; n++)
	{
		if ((i + j) > LG || fr1 > 0 || fr2 > 0)
		{
			hold1 = (i + j) / LG;
			hold2 = (i + j) % LG;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2;
		       	fr2 = hold3;
			i = j;
		       	j = hold2;
			printf("%ld%010ld", fr2, j);
		}
		else
		{
			hold2 = i + j;
			i = j;
		       	j = hold2;
			printf("%ld", j);
		}
		if (n != 97)
			printf(", ");
	}
	printf("\n");

	return (0);
}
