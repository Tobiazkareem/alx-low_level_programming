#include "main.h"

/**
 * jack_bauer - prints every minutes of the day
 *
 * Decriptions: start printing mins of the day
 * from 00:00 to 23:59
 */

void jack_bauer(void)
{
	/*using while nested loop*/
	/*declariable min and hour*/

	int min, hour;

	hour = 0;
	while (hour < 24)
	{
		/*nested loop*/
		min = 0;
		while (min <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');

			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');

			_putchar('\n');
			min++;
		}
		hour++;
	}
}
