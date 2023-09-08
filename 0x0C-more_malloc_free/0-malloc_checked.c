#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 *
 * Return: return point ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	/* if malloc fails, terminates the process with status 98 */
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
