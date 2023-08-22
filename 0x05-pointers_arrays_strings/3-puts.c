#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 *
 */

void _puts(char *str)
{
	/* use a char array to store the string */
	/* then use _putchar to print to stdout */
	/* char string[] = *str; did not work */

	while (*str)
	{
		/* _putchar(string[]);*/
		_putchar(*str++);
	}
	_putchar('\n');
}
