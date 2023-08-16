#include "main.h"
/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes nuver input
 *
 * Return: lastdigit
*/

int print_last_digit(int n)
{
	int dig;

	if (n < 0)
		dig = -1 * (n % 10);
	else
		dig = (n % 10);

	_putchar(dig + 48);

	return (dig);
}
