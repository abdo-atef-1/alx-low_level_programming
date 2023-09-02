#include <stdio.h>
#include <stdlib.h>

/**
 * * main - Entry point
 * *
 * * @argc: Counts the number of parameters that go into main
 * *
 * * @argv: Pointer of array of pointers containing strings entering main
 * *
 * * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{

	int x;

	if (argc > 0)
	{
		for (x = 0; x < argc; x++)
		{
			printf("%s\n", argv[x]);
		}
	}
	return (0);
}
