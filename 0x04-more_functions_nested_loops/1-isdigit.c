#include "main.h"

/**
 * _isdigit - checks for digit from 0 : 9
 *
 * @c: resive inout
 *
 * Return: 1 if it is digit and 0 if otherwise
*/

int _isdigit(int c)
{
	if (c % 10 > 0)
		return (1);
	else
		return (0);
}
