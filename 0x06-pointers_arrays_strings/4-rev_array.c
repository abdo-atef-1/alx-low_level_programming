#include "main.h"

/**
 * reverse_array - prints reverse array and show it.
 *
 * @a: array to be compared.
 * @n: size of array.
 *
 * Return: reversed array.
*/

void reverse_array(int *a, int n)
{

	int change, start, end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		change = *(a + begin);
		*(a + start) = *(a + end);
		*(a + end) = change;

		start++;

		end--;
	}
}
