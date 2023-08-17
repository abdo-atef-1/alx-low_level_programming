#include "main.h"

/**
 * more_numbers - print numbers frrom 0 to 14 (10 times)
 *
*/

void more_numbers(void)
{
	int t, p;

	for (t = 0; t <= 9; t++)
	{
	if (p > 9)
	{
		_putchar(1 + 48);
	}
	_putchar((p % 10) + 48);
	}
	_putchar('\n');
}
