#include "main.h"
/**
 * main - print alphabet by _putchar
*/

void print_alphabet(void);
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
}
