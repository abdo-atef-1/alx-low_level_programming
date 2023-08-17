#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input
*/

void print_line(int n)
{
	int stline;
	if (n <= 0)
		_putchar('\n');
	else
	{
	for (stline = 1; stline <= n; stline++)
		_putchar(95);
		_putchar('\n');
	}
}
