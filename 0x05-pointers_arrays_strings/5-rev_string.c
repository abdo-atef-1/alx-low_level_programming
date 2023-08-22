#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer
 *
 *  Return: nothing
*/

void rev_string(char *s)
{
	int x, tmp, tmp1;
	char cmp;

	tmp = 0;
	tmp1 = 0;

	while (s[tmp] != '\0')
	{
		tmp++;
	}

	tmp1 = tmp - 1;

	for (x = 0; x < tmp / 2; x++)
	{
		cmp = s[x];
		s[x] = s[tmp1];
		s[tmp1--] = cmp;
	}
}
