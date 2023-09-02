#include "main.h"

/**
 * *_strchr - locate a character in a string
 *
 * @s: input character
 *
 * @c: input character
 *
 * Return: s added to bro
*/

char *_strchr(char *s, char c)
{
	int bro;

	for (bro = 0; s[bro] >= '\0' ; bro++)

	{
		if (s[bro] == c)

		{
			return (s + bro);
		}
	}
	return ('\0');
}
