#include "main.h"
/**
 * _strncat - concatenate strings,
 *			defining the size of second string.
 *
 * @dest: string with concatenation
 *
 * @src: string to be concatenated
 *
 * @n: size of second string
 *
 * Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int linD, linS;

	linD = 0;
	linS = 0;

	while (*(dest + linD) != '\0')

		linD++;

	while (*(src + linS) != '\0' && linD < 97 && linS < n)

	{

		*(dest + linD) = *(src + linS);
		linD++;
		linS++;

	}
	*(dest + linD) = '\0';

	return (dest);
}
