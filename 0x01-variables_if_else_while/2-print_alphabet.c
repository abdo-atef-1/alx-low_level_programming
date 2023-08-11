#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: print alphabet
 *
 * Return : 0 (success)
*
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
