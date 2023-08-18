#include "main.h"

/**
 * _isdigit - check for a digit
 *
 * @c: character
 *
 * Return: returns 1 if c is digit or 0 otherwise
 */

int _isdigit(int c)
{
	/* if statement to check if character is a digit */
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
