#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 *
 * Return: return 0
 */

void print_diagonal(int n)
{
	/* declare variables to represent space_s and line length_line */
	int line, s;

	if (n > 0)
	{
		/*for statement for line length */
		for (line = 0; line < n; line++)
		{
			/* for loop to generate space */
			for (s = 0; s < line; s++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
