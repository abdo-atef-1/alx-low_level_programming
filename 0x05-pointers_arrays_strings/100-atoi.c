#include "main.h"
/**
 * _atoi - convert from string to intger
 *
 * @s: input
 *
 * Return: converted integer
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int cra = 1;

	do {
		if (*s == '-')

			cra = cra * -1;
		else
			if (*s >= '0' && *s <= '9')
				num = (num * 10) + (*s - '0');
		else
			if (num > 0)
				break;
	} while (*s++);
}

