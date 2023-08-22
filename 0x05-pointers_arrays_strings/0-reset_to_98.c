#include "main.h"

/**
 * reset_to_98 - reset the value of n to 98
 * @n: pointer to the integer
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	/*a pointer can only point to a address */

	/* = &p;ddress of n is assigned to var n */

	/*to change the value of n, we assign the new value to the pointer */
	/*n = &n;*/
	*n = 98;
       /*this means p == &n, so 98 becomes the new value of n */
}
