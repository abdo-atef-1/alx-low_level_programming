#include "main.h"

/**
 *  *_memset - fill the memory with a constant byte
 *
 * @s: input character
 * @b: input character
 * @n: input intger
 * Return: the value of the pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int bro;

	for (bro = 0; n > 0; bro++, n--)

	{
		s[bro] = b;
	}

	return (s);
}
