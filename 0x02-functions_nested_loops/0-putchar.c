#include "main.h"
/**
 * main - Entry point
 * Description: Prints _putchar, followed by a new line
 * Return 0 (success)
 */

int main(void)
{
	char text[8] = "_putchar";
	int i = 0;
	
	for(i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	
	return (0);
}

