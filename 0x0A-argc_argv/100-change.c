#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description:  a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: arguments counter
 * @argv: array string of arguments passed
 *
 * Return: 1 if number of arguments passed is not exactly 1
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int amt, coins = 0;

	if (argc == 2)
	{
		amt = atoi(argv[1]);
		if (amt < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (amt % 25 >= 0)
		{
			coins += amt / 25;
			amt = amt % 25;
		}
		if (amt % 10 >= 0)
		{
			coins += amt / 10;
			amt = amt % 10;
		}
		if (amt % 5 >= 0)
		{
			coins += amt / 5;
			amt = amt % 5;
		}
		if (amt % 2 >= 0)
		{
			coins += amt / 2;
			amt = amt % 2;
		}
		if (amt % 1 >= 0)
			coins += amt;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
