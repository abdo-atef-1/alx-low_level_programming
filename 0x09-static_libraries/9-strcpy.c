#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - print out put
 *
 * @dest: input
 * @src: input
 *
 * Return: dest (success)
*/

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;

		dest[x] = src[x];


	} while (src[x] != '\0');

	return (dest);
}
