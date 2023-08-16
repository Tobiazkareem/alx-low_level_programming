#include "main.h"

/**
 * print_sign - functions that print sign of a number
 *
 * @n: check to see if n_number satisfy an if condition
 *
 * Return: returns 1 if n is > 0
 * returns 0 is n is 0
 * returns -1 if n is < 0
 */

int print_sign(int n)
{
	/*use if else if statement*/
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
