#include "main.h"

/**
 * print_most_numbers - print numbers from 0 : 9 with out "2" or "4"
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
