#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 * @a: pointer to a
 * @size: size
 *
 */

void print_diagsums(int *a, int size)
{
	/* declare sum of primary diagonal */
	int prysum = 0;

	/* declare sum of secondary diagonal */
	int secsum = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		/* access primary diagonal elements */
		prysum += *(a + i * size + i);

		/* access secondary diagonal elements */
		secsum += *(a + i * size + (size - 1 - i));
	}

	printf("%d, %d\n", prysum, secsum);
}
