#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input
*/

void print_line(int n)
{
	int stline;

	for (stline = 1; stline <= n; stline++)
	{
		_putchar(95);
		_putchar('\n')
	}
	putchar('\n')
}
