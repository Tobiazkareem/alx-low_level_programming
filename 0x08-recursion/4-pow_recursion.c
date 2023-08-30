#include "main.h"

/**
 * _pow_recursion - returns the value of x raise to the power y
 * @x: first value
 * @y: second value
 *
 * Return: return -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	res *= _pow_recursion(x, y - 1);

	return (res);
}
