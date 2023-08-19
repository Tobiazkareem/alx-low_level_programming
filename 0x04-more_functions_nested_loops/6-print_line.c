#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times
 *
 * Return: Always 0
 */

void print_line(int n)
{
	/* declare variable line */
	int line;

	/* if statement to pritn number of lines */
	if (n > 0)
	{
		/* for loop */
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
