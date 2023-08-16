#include "main.h"

/**
 *  * times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int n, mult, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			result = n * mult;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + 48);

			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}
