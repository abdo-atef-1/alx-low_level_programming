#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: input
*/

void print_line(int n)
{
	for (n > 0; n++)
	{
		_putchar(95);
		_putchar('\n')
	}
	putchar('\n')
}
