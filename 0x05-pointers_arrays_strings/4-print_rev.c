#include "main.h"

/**
 * print_rev - print a string
 *
 * @s: is a pointer
 *
*/

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
