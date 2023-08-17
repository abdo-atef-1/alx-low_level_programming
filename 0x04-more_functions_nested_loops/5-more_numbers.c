#include "main.h"

/**
 * more_numbers - print numbers frrom 0 to 14 (10 times)
 *
*/

void more_numbers(void)
{
	int t, p, c;

	for (t = 0; t <= 9; t++)
	{
		for (c = 0; c <= 14; c++)
		{
			p = c;
	if (c > 9)
	{
		_putchar(1 + 48);
		p = c % 10;
	}
	_putchar(p + 48);
	}
	_putchar('\n');
