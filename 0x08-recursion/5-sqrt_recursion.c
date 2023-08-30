#include "main.h"

int find_sqrt(int number, int root);

/**
 * find_sqrt - find square root
 * @number: integer
 * @root: root
 *
 * Return: returns square root
 */

int find_sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);

	return (find_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - square root of a number
 * @n: number
 *
 * Return: return -1 if n has no sq root
 */


int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
