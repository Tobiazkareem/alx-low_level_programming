#include "main.h"

/**
 * _print_rev_recursion - pritnts string in reverse
 * @s: string to print
 *
 * Return: return s
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
