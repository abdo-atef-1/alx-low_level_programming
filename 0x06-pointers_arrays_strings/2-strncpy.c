#include "main.h"
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	for ( ; x < n; x++)
	{
		*(dest + x) = '\0';
	}

	return (dest);
}
