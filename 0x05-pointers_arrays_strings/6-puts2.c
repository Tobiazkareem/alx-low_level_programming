#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 *
 */

void puts2(char *str)
{
	int length = 0, count = 0;

	/* use for and while loop */
	while (str[count++])
		length++;

	for (count = 0; count < length; count += 2)
		_putchar(str[count]);

	_putchar('\n');
}
