#include "main.h"

/**
 * swap_int - swap two integer values
 * @a: first integer
 * @b: second integer
 *
 */

void swap_int(int *a, int *b)
{
	/* swap a value with b and vice versa */
	/* using dereferencing */
	/**
	 * *a = 42;
	 * *b = 98;
	 * gave the right output but not the right way
	 */

	/* declare a var to store pointer a */
	int store = *a;

	*a = *b;
	*b = store;
}
