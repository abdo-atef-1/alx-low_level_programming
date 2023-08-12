#include <stdio.h>
/**
 * main - start point
 *
 * Discription: print the alphabet in reverse
 *
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

