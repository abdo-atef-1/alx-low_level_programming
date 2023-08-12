#include <stdio.h>

/**
 * main - start point
 *
 * Discription: print the alphabet in reverse
 *
 * Return: always 0 (success)
*/

int main(void)
{	char n = 'z';
	while (n >= 'a')
	{
		putchar (n);
		n--;
	}
	putchar('\n');

	return (0);
}

