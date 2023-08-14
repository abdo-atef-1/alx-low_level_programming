#include<stdio.h>

/**
 * main - inter code
 *
 * description: print all possible deffernet two digits
 *
 * Return: 0 (success)
*/
int main(void)
{
	int dig1 = 0;
	int dig2;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			if (dig1 != dig2 && dig1 < dig2)
			{
			putchar(dig1 + 48);
			putchar(dig2 + 48);
			if (dig1 != 8 || dig2 != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		dig2++;
	}
	dig1++;
}
putchar('\n');
return (0);
}
