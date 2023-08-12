#include <stdio.h>

/**
 * main - Entry point
 * Description: Program that prints all
 * single digits numbers of base 10
 * starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
	/**
	 * Declare variable n with int
	 * will store integer values
	 */
	int n;

	/**
	 * use for function to state the condition
	 * use printf to display the digits
	 */
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
