#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: return 0
 */

void print_square(int size)
{
	/* declare height and width variable */
	int h, w;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (h == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
