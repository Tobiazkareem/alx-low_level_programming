#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string
 *
 * Return: return length
 */

int _strlen_recursion(char *s)
{
	/* declare length */
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	/* return length */
	return (length);
}
