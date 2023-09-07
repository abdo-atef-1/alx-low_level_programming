#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: input int
 *
 * Return: pointer to thhe array initialized or NULL
*/

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);
}
