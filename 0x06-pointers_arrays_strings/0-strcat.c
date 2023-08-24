#include "main.h"

/**
 * _strcat - inter to coding and concatenates
 *		 two string togither
 *
 * @dest: input character pointer
 * @src: input character pointer
 *
 * Return: dest = (success)
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int x2;

	c = 0;

	while (dest[c])
		c++;

	for (x2 = 0; src[x2] ; x2++)

		dest[x++] = src[x2];

	return (dest);
}
