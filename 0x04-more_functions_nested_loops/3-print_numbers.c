#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 *
 * Return: return void
 */

void print_numbers(void)
{
	/*declare variable */
	int n;

	/* use for statement to print */
	for (n = 0; n < 10; n++)
	{
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
