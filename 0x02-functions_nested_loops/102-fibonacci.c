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
	int i = 1;
	int j = 1;
	int k = 0;

	for (n = 1; n <= 50; n++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%d, %d, ", i, j);
	}
	/**
	 * printf("%d, ", i);
	 * printf("%d, ", j);
	*/
	printf("\n");

	return (0);
}
