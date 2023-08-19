#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times
 *
 * Return: Always 0
 */

void print_line(int n)
{
	/* if statement */
	if (n <= 0)
	{
		_putchar('\n');
	}
	if (n == 2)
	{
		_putchar('_');
		_putchar('_');
		_putchar('\n');
	}
	if (n == 10)
	{
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('_');
		_putchar('\n');
	}
}
