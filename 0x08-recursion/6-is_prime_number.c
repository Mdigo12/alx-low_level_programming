#include "main.h"

int is_divisible(int number, int div);
int is_prime_number(int n);

/**
 * is_divisible - check if is divisible
 * @number: input number to be checked
 * @div: the divisor
 *
 * Return: if divisible 0, else 1
 */

int is_divisible(int number, int div)
{
	if (number % div == 0)
	{
		return (0);
	}
	if (div == number / 2)
		return (1);
	return (is_divisible(number, div + 1));
}

/**
 * is_prime_number - check if a number is a prime number
 * @n: input number
 *
 * Return: if not prime, 0, else 1
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}
