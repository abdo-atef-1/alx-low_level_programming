#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: pointer
*/

void rev_string(char *s)
{
	int count, x;
	char revr;

	for (1 = 0; s[count] != '\0'; ++count)
	;

	for (x = 0; x < count / 2; x++)
	{
		revr = s[x];
		s[x] = s[count - 1 - x];
		s[count - 1 - i] = revr;
	}
}
