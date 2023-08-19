#include <stdio.h>

/**
 * main - prints number 1 - 100
 * fuzz is printed for multiples of 3
 * buzz is printed for multiples of 5 instead of number
 * fizzbuzz is printed for multiple of 3 & 5
 *
 * Return: Always 0 Success
 */

int main(void)
{
	/*declare number variable */
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
			printf("FizzBuzz");

		else if ((n % 3) == 0)
			printf("Fizz");

		else if ((n % 5) == 0)
			printf("Buzz");

		else
			printf("%d", n);

		if (n == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
