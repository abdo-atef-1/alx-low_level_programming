#include <unistd.h>

/**
 * main - entry point
 *
 * Description: print a qoute using write function
 *
 * Return: 1 (not success)
*/
void main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
