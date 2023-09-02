#include "main.h"

/**
 *  *_memcpy - copies memory area
 *
 *  @dest: input character
 *
 *  @src: input character
 *
 *  @n: input intger
 *
 *  Return: dest (success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int bro;

	for (bro = 0; bro < n; bro++)

	{
		dest[bro] = src[bro];
	}
	return (dest);
}
