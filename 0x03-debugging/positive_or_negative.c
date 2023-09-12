#include "main.h"

/**
 * positive_or_negative - check if integer is + or -
 *
 * @i: the integer value
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	/* using if else if statement */
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
	printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
