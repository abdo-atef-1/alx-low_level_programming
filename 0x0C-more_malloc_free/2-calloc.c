#include "main.h"

/**
 * _calloc - allocate memory using malloc and initialize it to zero
 *
 *@nmemb: number of elements
 *@size: size of the memory block to be allocated
 *
 *Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block1;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block1 = malloc(nmemb * size);
	if (block1 != NULL)
	{
		for (x = 0; x < (nmemb * size); x++)
			block1[x] = 0;
		return (block1);
	}
	else
		return (NULL);
}
