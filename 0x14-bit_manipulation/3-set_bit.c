#include "main.h"

/**
 * set_bit - sets the value of bit at given index to 1
 * @n: a pointer to the number in which the bit is to be set
 * @index: index of the bit to set
 *
 * Return: 1 if it works or -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n) | (1 << index);
	return (1);
}
