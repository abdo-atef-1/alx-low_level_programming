#include <stdio.h>
/**
 * *main - program that prints either number
 * *or fizz or buzz or fizzBuz
 * *
 * *Return: returns 0 (success)
*/
int main(void)
{
	int dn;

	while (dn++ < 100)

		if ((dn % 3 == 0) && (dn % 5 == 0))
			printf("FizzBuzz ");

		else if ((dn % 3) == 0)
			printf("Fizz ");

		else if ((dn % 5) == 0)
		{
			if (dn != 100)
				printf("Buzz ");

			else
				printf("Buzz");
		}

		else
			printf("%d ", dn);

	printf("\n");
	return (0);
}
