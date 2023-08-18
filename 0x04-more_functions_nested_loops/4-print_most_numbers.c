#include "main.h"

/**
 * print_most_numbers - exclude 2 and 4 from some numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	/* declare variable n as number */
	int n;

	/* for statement to print all digits */
	for (n = 0; n < 10; n++)
	{
		/* if statement to exclude 2 and 4 */
		if (n != 2 && n != 4)
			_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
