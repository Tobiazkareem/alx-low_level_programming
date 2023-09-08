#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: elements number
 * @size: byte size of array element
 *
 * Return: if fails, NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* check if zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocates memory and check for failure */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/*set allocated memore to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
