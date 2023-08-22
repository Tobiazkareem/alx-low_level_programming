#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of elements n
 * @a: variable pointer to int
 * @n: integer
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

	if (count == n - 1)
		continue;

	printf(", ");
	}

	printf("\n");
}
