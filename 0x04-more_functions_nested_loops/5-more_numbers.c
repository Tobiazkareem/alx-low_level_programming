#include "main.h"

/**
 * more_numbers - prints 10times the number
 *
 * Return: return void
 */

void more_numbers(void)
{
	/* declare variables */
	int n, y;

	/* create a while nested loop */
	n = 0;
	while (n < 10)
	{
		/* declare variable y printing 0 to 14 */
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}

		_putchar('\n');
		n++;
	}
}
