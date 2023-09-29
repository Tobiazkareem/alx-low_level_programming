#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: A pointer to the binary string
 *
 * Return: the converted number, 0 if there is
 * an invalid character or b ia NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	/* unsigned int base = 1; */
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		result = (result * 2) + (b[count] - '0');
	}

	return (result);
}
