#include "main.h"

void util(char **, char *);
void create_word(char **, char *, int, int, int);

/**
 * * strtow - splits a string into words.
 * *
 * * @str: the string
 * *
 * * Return: returns a pointer to an array of strings (words)
*/

char **strtow(char *str)
{

	int x, flagg, len1;

	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);

	x = flagg = len1 = 0;
	while (str[x])
	{
		if (flagg == 0 && str[x] != ' ')
			flagg = 1;
		if (x > 0 && str[x] == ' ' && str[x - 1] != ' ')
		{
			flagg = 0;
			len1++;
		}
		x++;
	}

	len1 += flagg == 1 ? 1 : 0;
	if (len1 == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (len1 + 1));
	if (words == NULL)
		return (NULL);

	util(words, str);
	words[len1] = NULL;
	return (words);
}

/**
 * * util - a util function for fetching words into an array
 *
 * * @words: the strings array
 *
 * * @str: the string
*/
void util(char **words, char *str)
{
	int c, v, start1, flag1;

	c = v = flag1 = 0;
	while (str[c])
	{
		if (flag1 == 0 && str[c] != ' ')
		{
			start1 = c;
			flag1 = 1;
		}

		if (c > 0 && str[c] == ' ' && str[c - 1] != ' ')
		{
			create_word(words, str, start1, c, v);
			v++;
			flag1 = 0;
		}

		c++;
	}

	if (flag1 == 1)
		create_word(words, str, start1, c, v);
}

/**
 * * create_word - creates a word and insert it into the array
 *
 * * @words: the array of strings
 *
 * * @str: the string
 *
 * * @start: the starting index of the word
 *
 * * @end: the stopping index of the word
 *
 * * @index: the index of the array to insert the word
*/
void create_word(char **words, char *str, int start, int end, int index)
{
	int x, y;

	x = end - start;
	words[index] = (char *)malloc(sizeof(char) * (x + 1));

	for (y = 0; start < end; start++, y++)
		words[index][y] = str[start];
	words[index][y] = '\0';
}
