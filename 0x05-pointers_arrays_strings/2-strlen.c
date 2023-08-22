#include "main.h"

/**
 * _strlen - calculate and return the length
 *
 * @s: string  inputs
 *
 * Return: leanth
*/

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0' ; s++)
		++count;

	return (count);
}
