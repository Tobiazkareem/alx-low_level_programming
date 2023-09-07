#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coin
 * to make change for an amount of money
 *
 * @argc: counts arguments
 * @argv: arguments to a program
 *
 * Return: return 1. error and 0 success
 */

int main(int argc, char *argv[])
{
	/*declare variables */
	int cents, number_coins, count1, y;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	number_coins = sizeof(coins) / sizeof(coins[0]);
	count1 = 0;

	for (y = 0; y < number_coins; y++)
	{
		while (cents >= coins[y])
		{
			cents -= coins[y];
			count1++;
		}
	}

	printf("%d\n", count1);

		return (0);
}
