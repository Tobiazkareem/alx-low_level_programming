#include "main.h"

/**
 * _puts_recursion - prints a string followed by a line
 * @s: string
 *
 * Return: Return s
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
