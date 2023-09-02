#include "main.h"

/**
 * _strspn - git the length of a prefix substring
 *
 * @s: input character
 * @accept: input character
 *
 * Return: bro (success)
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bro, tro;

	for (bro = 0; s[bro] != '\0'; bro++)
	{
		for (tro = 0; accept[tro] != s[bro]; tro++)


		{
			if (accept[tro] == '\0')

				return (bro);
		}

	}
	return (bro);
}

