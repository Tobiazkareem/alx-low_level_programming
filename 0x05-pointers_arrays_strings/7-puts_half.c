#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to print
 *
 */

void puts_half(char *str)
{
	int length = 0, count = 0, n;

	/* use while loop */
	while (str[count++])
		length++;
	/* length of string gotten */

	/* use if to print half the string */
	if ((length % 2) == 0)
		n = length / 2;

	else
		n = (length + 1) / 2;

	for (count = n; count < length; count++)
		_putchar(str[count]);

	_putchar('\n');
}
