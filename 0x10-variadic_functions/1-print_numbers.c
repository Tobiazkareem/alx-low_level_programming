#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to b printed between nums
 * @n: integer value
 * @...: integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int y;
	int num;

	va_start(args, n);

	for (y = 0; y < n; y++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && y  < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
