#include "main.h"

/**
 * print_square - print a square using #
 *
 * @size: size of square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int inc5, inc6;

	if (size > 0)
	{
		for (inc5 = 0; inc5 < size; inc5++)
		{
			for (inc6 = 0; inc6 < (size - 1); inc6++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

