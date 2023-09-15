#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between the separator
 * @n: no of strings to be passed to the function
 * @...: d strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int y;
	char *str;

	va_start(args, n);

	for (y = 0; y < n; y++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && y < n - 1)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
