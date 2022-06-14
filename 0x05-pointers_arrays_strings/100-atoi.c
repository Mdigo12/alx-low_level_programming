#include "main.h"

/**
 *  _atoi - See dscription
 * Description: A function that converts a string to an integer
 * @s: String input
 *
 * Return: Converted string
 */
int _atoi(char *s)
{
	short boolean;
	int p, mns, rlt;

	p = mns = rlt = boolean = 0;
	mns = -1;

	while (s[p] != '\0')
	{
		if (s[p] == '-')
			mns *= -1;

		if (s[p] >= '0' && s[p] <= '9')
		{
			rlt *= 10;
			rlt -= (s[p] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		p++;
	}
	rlt *= mns;
	return (rlt);
}
