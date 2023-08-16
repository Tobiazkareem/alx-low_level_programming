#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 *
 * @n: number to print
 *
 * Description: Use modulus % by 10 to get the last digit of n
 *
 * Return: returns the  value of the last digit n
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
