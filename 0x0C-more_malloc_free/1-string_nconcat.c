#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: pointer to first string
 *
 * @s2: pointer to sec2 string
 *
 * @n: Number of bytes from n2 to concatenate
 *
 * Return: pointer to space in momory containing concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	ptr = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];

	for (b = 0; b < n; b++)
	{
		ptr[a] = s2[b];
		a++;
	}

	ptr[a] = '\0';

	return (ptr);
}
