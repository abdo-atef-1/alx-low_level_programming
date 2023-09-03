#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * * _isnumber - checks if string is a number
 * *
 * * @s: input string
 * *
 * * Return: On success 1.
 *
*/

int _isnumber(char *s)

{
	int x, check, y;

	x = 0, y = 0, check = 1;
	if (*s == '-')
		x++;
	for (; *(s + x) != 0; x++)
	{
		y = isdigit(*(s + x));
		if (y == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * * main - Entry point
 * *
 * * @argc: Counts the number of parameters that go into main
 * *
 * * @argv: Pointer of array of pointers containing strings entering main
 * *
 * * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int j, ex, coins, cents, d;
	int c[5] = {25, 10, 5, 2, 1};

	ex = 1, j = 0, coins = 0;
	if (argc == 2)
	{
		if (_isnumber(argv[1]))
		{
			ex = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					d = cents / c[j];
					if (d == 0)
					{
						j++;
					}
					else
					{
						coins += d;
						cents -= (d * c[j]);
					}
				}
			}
		}
	}
	if (ex == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (ex);
}
