#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Description: learn 9 times table
 *
 */

void times_table(void)
{
	/*declare variables*/
	int number, a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			number = b * a;

			if (b == 0)
			{
				_putchar(number + '0');
			}

			if (number < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(number + '0');
			}
			else if (number >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((number / 10) + '0');
				_putchar((number % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
