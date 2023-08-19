#include "main.h"

/**
 * print_number - prints an intger
 *
 * @n: input
*/

void print_number(int n);
{
	int num;

	if (n >= 0 && n <= 9)
	{
		num = n;
	}
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
	print_number(num / 10);
	}
	_putchar(num % 10 + 48);
}
