#include <stdio.h>
/**
 * main - output (print) numbers of base 16 in lowercase
 *
 * Return: always 0
*/

int main(void)

{
		int n = 0;
		char ch = 'a';

		while (n <= 9)
		{
		putchar(n);
		n++;
		}
		if (n > 10 && n <= 15)

		putchar(ch);
		ch++;

		return (0);
}
