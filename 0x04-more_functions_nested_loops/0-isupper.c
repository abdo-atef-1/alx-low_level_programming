#include "main.h"

/**
 * _isupper - show the type of character
 *
 * Return: 0 if upper and 1 if otherwise
 *
 * @c: resive the input
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
