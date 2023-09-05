#include "main.h"

/**
 * *create_array - creat an array and initializes it
 *
 * @size: size of the array
 * @c: char to ititialize
 *
 * Return: pointer to the array or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}

