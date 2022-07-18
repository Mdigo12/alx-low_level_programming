#include <stdio.h>

/**
 * here - a function that prints something
 * before main is executed
 */

void here(void) __attribute__ ((constructor));

void here(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
