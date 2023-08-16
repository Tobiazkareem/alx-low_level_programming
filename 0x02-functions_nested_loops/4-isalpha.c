#include "main.h"

/**
 * _isalpha - function that check for alphabetic character
 *
 * @c: check to see if characrter is lower or upper_case
 *
 * Return: returns 1 if c is lower or uppwer and 0 otherwise
 */

int _isalpha(int c)
{
	/*if statement*/
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
