#include "main.h"

/**
 * print_to_98 - print n to 98
 *
 *@n: input
*/

void print_to_98(int n)
{
	int result;

	if (n > 98)
		for (result = n; result > 98; result--)
			printf("%d, ", result);
	else
		for (result = n; result < 98; result++)
			printf("%d, ", result);
	printf("98\n");
}
