#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers.
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int dig = 0;

	while (dig <= 9)
	{
		putchar(dig + 48);
		if (dig != 9)
		{
			putchar('.');
			putchar('.');
		}
		dig++;
	}
	putchar('\n');

	return (0);
}
