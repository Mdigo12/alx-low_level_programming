#include<stdio.h>
#include<stdlib.h>
/**
 * main - Program starting point
 * Description:  prints without using printf or put functions
 *
 * Return: 1 -  Always success
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
