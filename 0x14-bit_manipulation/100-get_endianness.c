#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: return 1
 */

int get_endianness(void)
{
	unsigned int number1 = 1;
	char *byte_pointer = (char *)&number1;

	/**
	 * if first byte 'lowest memory address' contains 1,
	 * its little endian
	 * otherwise, its big endian
	 */

	return (*byte_pointer == 1);
}
