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
		for (p >= 0; p <= 14; p++)
			_putchar(p);
	}
	_putchar('\n');
}
