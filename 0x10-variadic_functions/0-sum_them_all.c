#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum the parameters of a function
 * @n: parameters numbers
 * @...: parameters to sum
 *
 * Return: return 0 if n == 0
 * return sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int y;

	/* return 0 if n == 0 */
	if (n == 0)
		return (0);

	va_start(args, n);

	for (y = 0; y < n; y++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
