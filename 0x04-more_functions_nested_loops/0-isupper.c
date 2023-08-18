#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character that is being checked
 *
 * Return: returns 1 if upper_case and 0 otherwise
 */

int _isupper(int c)
{
	/* check to see if c is uppercase */
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
