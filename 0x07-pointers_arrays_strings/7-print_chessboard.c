#include "main.h"

/**
 * print_chessboard - Check description.
 * Description: function that prints the chessboard
 * @a: 2d array of chars
 *
 * Return: nothing (void function)
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
