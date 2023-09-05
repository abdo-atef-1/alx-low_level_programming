#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int x = 0, size = 0;

	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; x < size; x++)
			m[x] = str[x];
	}
	return (m);
}

