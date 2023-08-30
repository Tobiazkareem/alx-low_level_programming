#include "main.h"

/**
 * factorial - factorial of an int
 * @n: integer value
 *
 * Return: return -1 to indicate an error
 */

int factorial(int n)
{
	/* declare variable res */
	int result = n;

	if (n < 0)
		return (-1); /* error */

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
