#include "main.h"

/**
 * print_rev - print reverse
 * @s: characters to print
 *
 */

void print_rev(char *s)
{
	/* find the length of the string */
	int length = 0, c;

	while (s[length] != '\0')
		length++;

	/* print in reverse */
	for (c = length - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
