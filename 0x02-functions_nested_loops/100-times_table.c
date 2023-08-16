#include "main.h"

/**
 * print_times_table - prints time tabe z
 *
 * @n: takes number input
*/

void print_times_table(int n)

{
	int result, mult, num;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
			_putchar(48);
		for (mult = 1; mult <= n; mult++)
		{
			_putchar('.');
			_putchar(' ');

			result = num * mult;
			if (result <= 9)
				_putchar(' ');
			if (result <= 99)
				_putchar (' ');
			if (result >= 100)
			{
				_putchar((result / 100) + 48);
				_putchar((result / 10) % 10 + 48);
			}
			else if (result <= 99 && result >= 10)
				_putchar((result / 10) + 48);
			_putchar((result % 10) + 48);
		}
		_putchar('\n');
	}
}

