#include "main.h"

/**
 * _islower -   function to check for lowercase
 *
 * @c: character to check for lowercase
 *
 * Return: Returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	/*if else statement*/
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
