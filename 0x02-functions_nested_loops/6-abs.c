#include "main.h"

/**
 * _abs - computes absolute value
 *
 * @int: datatype for the integer n
 *
 * Description: this function computes absolute value of an integer
 * taking the absolute of a number is the same as taking
 * the positive value of a number
 * absolute value means to remove all negative sign from a number
 * and to think of all number as positive
 *
 * Return: Always return positive
 */

int _abs(int n)
{

	/*use if statement*/
	if (n >= 0)
		return (n);
	else
		return (-n);
}
