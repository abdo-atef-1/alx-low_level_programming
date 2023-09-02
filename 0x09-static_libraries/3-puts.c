#include "main.h"

/**
 * _puts - print a string followed by a new line to stdout
 *
 * @str: is a pointer
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
